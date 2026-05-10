CREATE DATABASE LABASS1;
USE LABASS1;

--LAB ASS 1.1
CREATE TABLE WORKER(
WORKER_ID INT PRIMARY KEY,
FIRST_NAME VARCHAR(20),
LAST_NAME VARCHAR(20),
SALARY INT,
DEPT_NAME VARCHAR(20)
);

--LAB ASS 1.2
ALTER TABLE WORKER ADD JOINING_DATE DATE;

ALTER TABLE WORKER ALTER COLUMN DEPT_NAME VARCHAR(20);

INSERT INTO WORKER VALUES 
(1, 'Rana', 'Hamid', 100000, 'HR', '2014-02-20 09:00:00'),
(2, 'Sanjoy', 'Saha', 80000, 'Admin', '2014-06-11 09:00:00'),
(3, 'Mahmudul', 'Hasan', 300000, 'HR', '2014-02-20 09:00:00'),
(4, 'Asad', 'Zaman', 500000, 'Admin', '2014-02-20 09:00:00'),
(5, 'Sajib', 'Mia', 500000, 'Admin', '2014-06-11 09:00:00'),
(6, 'Alamgir', 'Kabir', 200000, 'Account', '2014-06-11 09:00:00'),
(7, 'Foridul', 'Islam', 75000, 'Account', '2014-01-20 09:00:00'),
(8, 'Keshob', 'Ray', 90000, 'Admin', '2014-04-11 09:00:00');

--LAB ASS 1.3 change the slary data type.
ALTER TABLE WORKER 
ALTER COLUMN SALARY FLOAT;

--LAB ASS 1.4 rename a perticular column name 
EXEC SP_RENAME 'WORKER.DEPT_NAME' , 'DEPARTMENT' , 'COLUMN' ;

--LAB ASS 1.5 changing the column width
ALTER TABLE WORKER 
ALTER COLUMN DEPARTMENT VARCHAR(50);

--LAB ASS 2.1 change the worker id into not null
ALTER TABLE WORKER
ALTER COLUMN WORKER_ID INT NOT NULL;

--LAB ASS 2.2 whos slary is greater than 100
SELECT * FROM WORKER 
WHERE SALARY > 100;

--LAB ASS 2.3
ALTER TABLE WORKER 
ADD CONSTRAINT UQFN UNIQUE (FIRST_NAME); 

--LAB ASS 2.4
ALTER TABLE WORKER
ADD CONSTRAINT PK PRIMARY KEY (WORKER_ID);

--LAB ASS 3.1 |BEFORE 8 ADDED|
INSERT INTO WORKER 
(WORKER_ID, FIRST_NAME, LAST_NAME, SALARY, DEPARTMENT, JOINING_DATE) 
VALUES 
(9, 'Aslam', 'Hamid', 100000, 'HR', '2014-02-20 09:00:00'),
(10, 'Raju', 'Saha', 80000, 'Admin', '2014-06-11 09:00:00');

--LAB ASS 3.2
SELECT * FROM WORKER;

--LAB ASS 3.3
SELECT TOP 5 WORKER_ID, 
CONCAT(FIRST_NAME,' ',LAST_NAME) AS FULL_NAME,
SALARY, DEPARTMENT, JOINING_DATE
FROM WORKER 

--LAB ASS 3.4
SELECT * FROM WORKER
WHERE DEPARTMENT='Admin';

--LAB ASS 3.5
SELECT FIRST_NAME , LAST_NAME 
FROM WORKER 
WHERE SALARY > 10000;

--LAB ASS 3.6
SELECT * FROM WORKER
WHERE JOINING_DATE < (SELECT JOINING_DATE FROM WORKER 
						WHERE FIRST_NAME = 'Sonjoy' );

--LAB ASS 3.7
UPDATE WORKER SET SALARY = 95000 
WHERE WORKER_ID=8

--LAB ASS 3.8
DELETE WORKER WHERE FIRST_NAME='Asad';

-- LAB ASS 4

--TO DELETE ALL TABLE DATA
TRUNCATE TABLE WORKER;

INSERT INTO WORKER 
(WORKER_ID, FIRST_NAME, LAST_NAME, SALARY, DEPARTMENT, JOINING_DATE) 
VALUES 
(1, 'Rana', 'Hamid', 100000, 'HR', '2014-02-20 09:00:00'),
(2, 'Sanjoy', 'Saha', 80000, 'Admin', '2014-06-11 09:00:00'),
(3, 'Mahmudul', 'Hasan', 300000, 'HR', '2014-02-20 09:00:00'),
(4, 'Asad', 'Zaman', 500000, 'Admin', '2014-02-20 09:00:00'),
(5, 'Sajib', 'Mia', 500000, 'Admin', '2014-06-11 09:00:00'),
(6, 'Alamgir', 'Kabir', 200000, 'Account', '2014-06-11 09:00:00'),
(7, 'Foridul', 'Islam', 75000, 'Account', '2014-01-20 09:00:00'),
(8, 'Keshob', 'Ray', 90000, 'Admin', '2014-04-11 09:00:00');

-- 1. First three characters of FIRST_NAME
SELECT SUBSTRING(FIRST_NAME, 1, 3) AS FIRST_3_CHAR
FROM WORKER;

-- 2. Workers joined from Feb 2014 to March 2014
SELECT *
FROM WORKER
WHERE JOINING_DATE >= '2014-02-01'
  AND JOINING_DATE <= '2014-03-31';

-- 3. Workers served at least 6 months
SELECT *
FROM WORKER
WHERE DATEDIFF(MONTH, JOINING_DATE, GETDATE()) >= 6;

-- 4. Update salary of all workers whose title is Manager
UPDATE WORKER SET SALARY = SALARY + (SALARY * 0.10)
WHERE WORKER_ID IN (
    SELECT DEPARTMENT
    FROM WORKER
    WHERE DEPARTMENT = 'Manager'
);

-- 5. Update bonus (10% before date, else 5%) and department Admin
UPDATE WORKER
SET SALARY = 
    CASE 
        WHEN JOINING_DATE < '2014-04-11 09:00:00' THEN SALARY * 1.10
        ELSE SALARY * 1.05
    END
FROM WORKER 
WHERE DEPARTMENT = 'Admin';

-- 6. Delete workers who have not taken any bonus
DELETE FROM WORKER
WHERE DEPARTMENT NOT IN (
    'Admin'
);

-- 7. Workers with FIRST_NAME “Rana” and “Sajib”
SELECT *
FROM WORKER
WHERE FIRST_NAME IN ('Rana', 'Sajib');

-- 8. Workers excluding FIRST_NAME “Rana” and “Sajib”
SELECT *
FROM WORKER
WHERE FIRST_NAME NOT IN ('Rana', 'Sajib');

-- 9. FIRST_NAME contains ‘a’
SELECT *
FROM WORKER
WHERE FIRST_NAME LIKE '%a%';

-- 10. FIRST_NAME starts with ‘k’
SELECT *
FROM WORKER
WHERE FIRST_NAME LIKE 'k%';

-- 11. FIRST_NAME ends with ‘r’ and has 7 letters
SELECT *
FROM WORKER
WHERE FIRST_NAME LIKE '______r';

-- 12. Position of ‘n’ in ‘Sanjoy’
SELECT CHARINDEX('n', 'Sanjoy') AS POSITION;

-- 13. Average salary for each department
SELECT DEPARTMENT, AVG(SALARY) AS AVG_SALARY
FROM WORKER
GROUP BY DEPARTMENT;

-- 14. Employees with max or min salary in each department
SELECT *
FROM WORKER W
WHERE SALARY IN (
    SELECT MAX(SALARY) FROM WORKER GROUP BY DEPARTMENT
    UNION
    SELECT MIN(SALARY) FROM WORKER GROUP BY DEPARTMENT
)
ORDER BY DEPARTMENT ASC

-- 15. Position of ‘r’ in ‘Rana’
SELECT CHARINDEX('r', 'Rana') AS POSITION;

-- 16. FIRST_NAME after removing right-side spaces
SELECT RTRIM(FIRST_NAME) AS TRIMMED_NAME
FROM WORKER;

-- 17. Unique FIRST_NAME with length
SELECT DISTINCT FIRST_NAME, LEN(FIRST_NAME) AS NAME_LENGTH
FROM WORKER;

-- 18. Replace ‘a’ with ‘A’ in FIRST_NAME
SELECT REPLACE(FIRST_NAME, 'a', 'A') AS MODIFIED_NAME
FROM WORKER;

-- ==============================
-- LAB ASSIGNMENT (FULL SCRIPT)
-- ==============================

-- 1. CREATE TABLES

CREATE TABLE BONUS (
    WORKER_REF_ID INT,
    BONUS_DATE DATE,
    BONUS_AMOUNT INT
);

CREATE TABLE TITLE (
    WORKER_REF_ID INT,
    WORKER_TITLE VARCHAR(25),
    AFFECTED_FROM DATE
);

--------------------------------------------------

-- 2. INSERT DATA INTO WORKER


--------------------------------------------------

-- 3. INSERT DATA INTO BONUS

INSERT INTO BONUS VALUES
(1,'2019-02-20',5000),
(2,'2019-06-11',3000),
(3,'2019-02-20',4000),
(4,'2019-02-20',4500),
(5,'2019-06-11',3500),
(6,'2019-06-12',NULL);

--------------------------------------------------

-- 4. INSERT DATA INTO TITLE

INSERT INTO TITLE VALUES
(1,'Manager','2019-02-20'),
(2,'Executive','2019-06-11'),
(8,'Executive','2019-06-11'),
(5,'Manager','2019-06-11'),
(4,'Asst. Manager','2019-06-11'),
(7,'Executive','2019-06-11'),
(6,'Lead','2019-06-11'),
(3,'Lead','2019-06-11');

--------------------------------------------------

-- ==============================
-- QUERIES START HERE
-- ==============================

-- 1. Employees except ‘Manager’ & ‘Asst. Manager’
SELECT W.*
FROM WORKER W
JOIN TITLE T ON W.WORKER_ID = T.WORKER_REF_ID
WHERE T.WORKER_TITLE NOT IN ('Manager', 'Asst. Manager');

-- 2. Workers ordered by designation after April 2014
SELECT W.*, T.WORKER_TITLE
FROM WORKER W
JOIN TITLE T ON W.WORKER_ID = T.WORKER_REF_ID
WHERE W.JOINING_DATE > '2014-04-30'
ORDER BY T.WORKER_TITLE ASC;

-- 3. Count Admin employees
SELECT COUNT(*) AS TOTAL_ADMIN
FROM WORKER
WHERE DEPARTMENT = 'Admin';

-- 4. Salary between 50000 and 100000
SELECT FIRST_NAME, LAST_NAME, SALARY
FROM WORKER
WHERE SALARY BETWEEN 50000 AND 100000;

-- 5. Workers per department (desc)
SELECT DEPARTMENT, COUNT(*) AS TOTAL
FROM WORKER
GROUP BY DEPARTMENT
ORDER BY TOTAL DESC;

-- 6. Workers who are Managers
SELECT W.*
FROM WORKER W
JOIN TITLE T ON W.WORKER_ID = T.WORKER_REF_ID
WHERE T.WORKER_TITLE = 'Manager';

-- 7. Odd rows
SELECT *
FROM (
    SELECT *, ROW_NUMBER() OVER (ORDER BY WORKER_ID) AS RN
    FROM WORKER
) X
WHERE RN % 2 = 1;

-- 8. Even rows
SELECT *
FROM (
    SELECT *, ROW_NUMBER() OVER (ORDER BY WORKER_ID) AS RN
    FROM WORKER
) X
WHERE RN % 2 = 0;

-- 9. Clone table
SELECT * INTO WORKER_CLONE FROM WORKER;

-- 10. Current date & time
SELECT GETDATE();

-- 11. Top 10 Name + Designation
SELECT TOP 10 W.FIRST_NAME, T.WORKER_TITLE
FROM WORKER W
JOIN TITLE T ON W.WORKER_ID = T.WORKER_REF_ID;

-- 12. 5th highest salary
SELECT DISTINCT SALARY
FROM WORKER W1
WHERE 5 = (
    SELECT COUNT(DISTINCT SALARY)
    FROM WORKER W2
    WHERE W2.SALARY >= W1.SALARY
);

-- 13. Same salary employees
SELECT *
FROM WORKER
WHERE SALARY IN (
    SELECT SALARY
    FROM WORKER
    GROUP BY SALARY
    HAVING COUNT(*) > 1
);

-- 14. Second highest salary
SELECT MAX(SALARY)
FROM WORKER
WHERE SALARY < (SELECT MAX(SALARY) FROM WORKER);

-- 15. First 50% rows
SELECT TOP 50 PERCENT *
FROM WORKER
ORDER BY WORKER_ID;

-- 16. Departments with <5 employees
SELECT DEPARTMENT
FROM WORKER
GROUP BY DEPARTMENT
HAVING COUNT(*) < 5;

-- 17. Department-wise count
SELECT DEPARTMENT, COUNT(*) AS TOTAL
FROM WORKER
GROUP BY DEPARTMENT;

-- 18. Last record
SELECT TOP 1 *
FROM WORKER
ORDER BY WORKER_ID DESC;

-- 19. First record
SELECT TOP 1 *
FROM WORKER
ORDER BY WORKER_ID ASC;

-- 20. Last 5 records
SELECT TOP 5 *
FROM WORKER
ORDER BY WORKER_ID DESC;

-- 21. Highest salary in each department
SELECT W.*
FROM WORKER W
JOIN (
    SELECT DEPARTMENT, MAX(SALARY) AS MAX_SAL
    FROM WORKER
    GROUP BY DEPARTMENT
) M ON W.DEPARTMENT = M.DEPARTMENT AND W.SALARY = M.MAX_SAL;

-- 22. Top 3 salaries
SELECT DISTINCT TOP 3 SALARY
FROM WORKER
ORDER BY SALARY DESC;


-- ==================================================================================================
-- =========================
-- 1. CREATE TABLES
-- =========================
CREATE TABLE Teacher (
    TID INT PRIMARY KEY,
    FirstName VARCHAR(50),
    LastName VARCHAR(50),
    Dept VARCHAR(50),
    Age INT,
    Salary INT
);

CREATE TABLE Department (
    DeptID INT PRIMARY KEY,
    DeptName VARCHAR(50),
    Location VARCHAR(50)
);

-- =========================
-- 2. INSERT DATA
-- =========================
INSERT INTO Teacher VALUES
(1,'Mizanur','Rahman','CSE',28,35000),
(2,'Delwar','Hossain','CSE',26,33000),
(3,'Shafiul','Islam','EEE',24,30000),
(4,'Faisal','Imran','CSE',30,50000),
(5,'Ahsan','Habib','English',28,28000);

INSERT INTO Department VALUES
(1,'CSE','Talaimari'),
(2,'EEE','Talaimari'),
(3,'English','Kazla'),
(4,'BBA','Talaimari');

-- =========================
-- 3. QUERIES
-- =========================

-- Q1: Update the Salary of Teacher by 15% whose DeptName is ‘CSE, otherwise update by 10% Salary.
UPDATE Teacher
SET Salary = 
    CASE 
        WHEN Dept = 'CSE' THEN Salary * 1.15
        ELSE Salary * 1.10
    END;

-- Q2: Write a query to insert/copy the values of all attributes from one table to another using (ID in) subquery.
CREATE TABLE Teacher_Backup (
    TID INT,
    FirstName VARCHAR(50),
    LastName VARCHAR(50),
    Dept VARCHAR(50),
    Age INT,
    Salary INT
);

INSERT INTO Teacher_Backup
SELECT *
FROM Teacher
WHERE TID IN (SELECT TID FROM Teacher);

-- Q3: Write a query to find firstname and lastname as fullname , age whose salary is maximum.
SELECT FirstName + ' ' + LastName AS FullName, Age
FROM Teacher
WHERE Salary = (SELECT MAX(Salary) FROM Teacher);

-- Q4: Write a query to find firstname, age,dept whose age is between 23 to 27.
SELECT FirstName, Age, Dept
FROM Teacher
WHERE Age BETWEEN 23 AND 27;

-- Q5: Write a query to find TID,firstname whose salary is less than average salary.
SELECT TID, FirstName
FROM Teacher
WHERE Salary < (SELECT AVG(Salary) FROM Teacher);

-- Q6: Write a query to update Dept by ‘English’ where Dept is ‘EEE’ using subquery.
UPDATE Teacher
SET Dept = 'English'
WHERE Dept IN (
    SELECT DeptName FROM Department WHERE DeptName = 'EEE'
);

-- Q7: Write a query to update salary by multiplying the salary by 100 where salary is greater than 5000 using subquery.
UPDATE Teacher
SET Salary = Salary * 100
WHERE TID IN (
    SELECT TID FROM Teacher WHERE Salary > 5000
);

-- Q8: Write a query to find the name that starts with ‘k/s’ using a subquery.
SELECT FirstName
FROM Teacher
WHERE TID IN (
    SELECT TID FROM Teacher
    WHERE FirstName LIKE 'K%' OR FirstName LIKE 'S%'
);

-- Q9: Find the Firstname,salary for all the teachers of CSE who have a higher salary than Delwar Hossain using subquery.
SELECT FirstName, Salary
FROM Teacher
WHERE Dept = 'CSE'
AND Salary > (
    SELECT Salary FROM Teacher
    WHERE FirstName = 'Delwar' AND LastName = 'Hossain'
);

-- Q10: Find out the id,names of all teachers who belong to the same department as the teacher ‘Mizanur’.
SELECT TID, FirstName
FROM Teacher
WHERE Dept = (
    SELECT Dept FROM Teacher WHERE FirstName = 'Mizanur'
);

-- Q11: Find TID, salary, deptID whose salary is greater than average salary.
SELECT T.TID, T.Salary, D.DeptID
FROM Teacher T
JOIN Department D ON T.Dept = D.DeptName
WHERE T.Salary > (SELECT AVG(Salary) FROM Teacher);

-- Q12: Find min salary from Teacher for each department where min salary is less than average salary.
SELECT Dept, MIN(Salary) AS MinSalary
FROM Teacher
GROUP BY Dept
HAVING MIN(Salary) < (SELECT AVG(Salary) FROM Teacher);

-- Q13: Find firstname,lastname,Dept where location name is Kazla using subquery.
SELECT FirstName, LastName, Dept
FROM Teacher
WHERE Dept IN (
    SELECT DeptName FROM Department
    WHERE Location = 'Kazla'
);

-- Q14: Write a query to find the TID,firstname,salary where the length of the firstname is at least 6.
SELECT TID, FirstName, Salary
FROM Teacher
WHERE LEN(FirstName) >= 6;
