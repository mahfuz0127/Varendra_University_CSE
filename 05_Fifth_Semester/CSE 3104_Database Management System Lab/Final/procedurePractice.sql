CREATE DATABASE PROCEDURE_PRACTICE;

USE PROCEDURE_PRACTICE;

-- Create the Branch table
CREATE TABLE Branches (
    Br_Id VARCHAR(10) PRIMARY KEY,
    Branch_Name VARCHAR(50)
);

-- Create the Zone table
CREATE TABLE Zones (
    Zone_Id VARCHAR(10) PRIMARY KEY,
    Zone_Name VARCHAR(50)
);

-- Create the Accounts table
CREATE TABLE Accounts (
    Account_no INT PRIMARY KEY,
    Acc_holder_name VARCHAR(100),
    Amount DECIMAL(18, 2),
    Branch_Id VARCHAR(10) FOREIGN KEY REFERENCES Branches(Br_Id),
    Zone_Id VARCHAR(10) FOREIGN KEY REFERENCES Zones(Zone_Id)
);

-- Insert Data
INSERT INTO Branches VALUES 
('B-101', 'Bonani'), 
('B-102', 'Romna'), 
('B-103', 'Shaheb bazar'), 
('B-104', 'Ullapara');

INSERT INTO Zones VALUES 
('Z-801', 'Sirajgonj'), 
('Z-802', 'Rajshahi'), 
('Z-803', 'Dhaka'), 
('Z-804', 'Chittagong');

INSERT INTO Accounts VALUES 
(1992212, 'Mr. Nazmuzzaman', 200000, 'B-101', 'Z-803'),
(1992213, 'Mr. Jibon', 170000, 'B-102', 'Z-803'),
(1882212, 'Bushra', 180000, 'B-103', 'Z-802'),
(1882213, '%Sajib', 170000, 'B-104', 'Z-801');

--1. Create a simple stored procedure "SPdetails" to find Acc_holder_name, Amount, Branch_Name and Zone_Name.
CREATE PROCEDURE SPdetails
AS
BEGIN
    SELECT 
        A.Acc_holder_name, 
        A.Amount, 
        B.Branch_Name, 
        Z.Zone_Name
    FROM Accounts A
    INNER JOIN Branches B ON A.Branch_Id = B.Br_Id
    INNER JOIN Zones Z ON A.Zone_Id = Z.Zone_Id;
END;

EXEC SPdetails;

--2. Create a simple stored procedure "SPaverage" to find Branch_name and Amount of Branchwhere amount will be greater than particular amount (say 17000). Here branch_name andamount will be passed by parameter
CREATE PROCEDURE SPaverage
    @BName VARCHAR(50),      -- Parameter for Branch Name
    @MinAmount DECIMAL(18,2) -- Parameter for the specific amount limit
AS
BEGIN
    SELECT 
        B.Branch_Name, 
        A.Amount
    FROM Accounts A
    INNER JOIN Branches B ON A.Branch_Id = B.Br_Id
    WHERE B.Branch_Name = @BName 
      AND A.Amount > @MinAmount;
END;

EXEC SPaverage @BName = 'Bonani', @MinAmount = 17000;
EXEC SPaverage @BName = 'Shaheb bazar', @MinAmount = 17000;



--not excuted
--want to know
--3. Create a simple stored procedure "SPbalance" to find Amount of a particular zone. Herezone name will be passed by parameter and amount will be shown by using return value ().
CREATE PROCEDURE SPbalance
    @ZName VARCHAR(50) -- Input parameter for the Zone Name
AS
BEGIN
    DECLARE @ZoneAmount INT; -- Variable to hold the amount temporarily

    -- Find the amount by joining Accounts and Zones
    SELECT @ZoneAmount = A.Amount
    FROM Accounts A
    INNER JOIN Zones Z ON A.Zone_Id = Z.Zone_Id
    WHERE Z.Name = @ZName; -- Matches the 'Name' column in the Zone table

    -- Send the value back as a return code
    RETURN @ZoneAmount;
END;

DECLARE @ReturnValue INT;

-- Execute the procedure and capture the return
EXEC @ReturnValue = SPbalance @ZName = 'Rajshahi';

-- Display the captured value
SELECT @ReturnValue AS 'Returned Amount';

-- Q4. Create a simple stored procedure "SPamount" to Find all account holders name with their branch name 
-- and zone name whose name has substring 'Mr.' and Amount Less than Maximum Amount.
CREATE PROCEDURE SPamount
AS
BEGIN
    SELECT A.Acc_holder_name, B.Branch_Name, Z.Name AS Zone_Name
    FROM Accounts A
    INNER JOIN Branches B ON A.Branch_Id = B.Br_Id
    INNER JOIN Zones Z ON A.Zone_Id = Z.Zone_Id
    WHERE A.Acc_holder_name LIKE 'Mr.%' 
      AND A.Amount < (SELECT MAX(Amount) FROM Accounts);
END;

-- To run requirement #4
EXEC SPamount;


-- Q5. Create a simple stored procedure "SPdetailsInfo" to find number of customer of each Zone. 
-- Printed as output parameter and zone_name passed as parameter.
CREATE PROCEDURE SPdetailsInfo
    @ZName VARCHAR(50),
    @CustCount INT OUTPUT
AS
BEGIN
    SELECT @CustCount = COUNT(Account_no)
    FROM Accounts A
    INNER JOIN Zones Z ON A.Zone_Id = Z.Zone_Id
    WHERE Z.Name = @ZName;
END;

DECLARE @CustomerCount INT;
EXEC SPdetailsInfo @ZName = 'Dhaka', @CustCount = @CustomerCount OUTPUT;
SELECT @CustomerCount AS 'Number of Customers in Dhaka';


-- Q6. Create procedure "spEmployeeSalaryDetails1" with four parameters. 
-- Find number of Branch_Name where Amount between StartAmount/EndAmount and contains substring "Ba".
CREATE PROCEDURE spEmployeeSalaryDetails1
    @StartAmount DECIMAL,
    @EndAmount DECIMAL,
    @BNameSub VARCHAR(20),
    @ReturnCount INT OUTPUT
AS
BEGIN
    SELECT @ReturnCount = COUNT(B.Branch_Name)
    FROM Accounts A
    INNER JOIN Branches B ON A.Branch_Id = B.Br_Id
    WHERE A.Amount BETWEEN @StartAmount AND @EndAmount
      AND B.Branch_Name LIKE '%' + @BNameSub + '%';
END;

DECLARE @BranchMatchCount INT;
EXEC spEmployeeSalaryDetails1 
    @StartAmount = 7000, 
    @EndAmount = 30000, 
    @BNameSub = 'Ba', 
    @ReturnCount = @BranchMatchCount OUTPUT;

SELECT @BranchMatchCount AS 'Branches Matching Criteria';

-- Q7. Create a simple stored procedure "SPdetailsInfoSpecific" to find Zone_name, number of customer of a specific Zone.
CREATE PROCEDURE SPdetailsInfoSpecific
    @ZName VARCHAR(50)
AS
BEGIN
    SELECT Z.Name AS Zone_name, COUNT(A.Account_no) AS Number_of_customers
    FROM Zones Z
    LEFT JOIN Accounts A ON Z.Zone_Id = A.Zone_Id
    WHERE Z.Name = @ZName
    GROUP BY Z.Name;
END;

EXEC SPdetailsInfoSpecific @ZName = 'Rajshahi';

-- Q8. Creating a simple stored procedure "SPdetailsInfo1" to find Zone_name, 
-- number of Branch of a specific Zone (Branch name pass by parameter).
CREATE PROCEDURE SPdetailsInfo1
    @ZName VARCHAR(50)
AS
BEGIN
    SELECT Z.Name AS Zone_name, COUNT(DISTINCT A.Branch_Id) AS Number_of_Branches
    FROM Zones Z
    INNER JOIN Accounts A ON Z.Zone_Id = A.Zone_Id
    WHERE Z.Name = @ZName
    GROUP BY Z.Name;
END;

EXEC SPdetailsInfo1 @ZName = 'Dhaka';

