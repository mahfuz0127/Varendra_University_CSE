CREATE DATABASE Varendra_DB;

USE Varendra_DB;

CREATE TABLE Salesman(
    salesman_id INT PRIMARY KEY,
    name VARCHAR(50),
    city VARCHAR(50),
    commission DECIMAL(4, 2)
);

CREATE TABLE Orders(
    ord_no INT PRIMARY KEY,
    purch_amt DECIMAL(10, 2),
    ord_date DATE,
    customer_id INT,
    salesman_id INT FOREIGN KEY REFERENCES Salesman(salesman_id)
);

INSERT INTO Salesman (salesman_id, name, city, commission) VALUES 
(5001, 'James Hoog', 'New York', 0.15),
(5002, 'Nail Knite', 'Paris', 0.13),
(5005, 'Pit Alex', 'London', 0.11),
(5006, 'Mc Lyon', 'Paris', 0.14);

INSERT INTO Orders (ord_no, purch_amt, ord_date, customer_id, salesman_id) VALUES 
(70001, 150.50, '2025-10-04', 3005, 5002),
(70009, 270.65, '2026-03-11', 3001, 5005),
(70002, 65.26, '2026-05-05', 3002, 5001),
(70005, 2400.60, '2026-02-27', 3007, 5001);

SELECT * FROM Salesman;
SELECT * FROM Orders;

--1
CREATE VIEW Sales_Report AS
SELECT o.ord_no, s.name AS salesman_name, o.purch_amt
FROM Orders o
JOIN Salesman s ON o.salesman_id = s.salesman_id;

SELECT * FROM Sales_Report;

--2
CREATE UNIQUE NONCLUSTERED INDEX UX_Salesman_SalesmanID
ON Salesman (salesman_id);

--3
CREATE PROCEDURE spGetOrdersByCity
    @CityName VARCHAR(50)
AS
BEGIN
    SELECT s.name AS salesman_name, o.purch_amt
    FROM Salesman s
    JOIN Orders o ON s.salesman_id = o.salesman_id
    WHERE s.city = @CityName;
END;

--4
CREATE PROCEDURE spCountHighCommission
    @Threshold DECIMAL(4,2),
    @TotalCount INT OUTPUT
AS
BEGIN
    SELECT @TotalCount = COUNT(*)
    FROM Salesman
    WHERE commission > @Threshold;
END;

--5
DELETE FROM Orders
WHERE purch_amt < 100;