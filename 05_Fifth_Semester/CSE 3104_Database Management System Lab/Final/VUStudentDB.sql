CREATE DATABASE VUStudentDB;
USE VUStudentDB;

CREATE TABLE Student_Details (
    Student_ID INT PRIMARY KEY,
    Name VARCHAR(50),
    Address VARCHAR(50)
);

INSERT INTO Student_Details (Student_ID, Name, Address)
VALUES
(101, 'Sadia', 'Dhaka'),
(102, 'Nusrat', 'Khulna'),
(103, 'Kamal', 'Rajshahi'),
(104, 'Jony', 'Dhaka');

CREATE TABLE Student_Marks (
    Student_ID INT PRIMARY KEY,
    Name VARCHAR(50),
    CGPA DECIMAL(3,2),
    Age INT
);

INSERT INTO Student_Marks (Student_ID, Name, CGPA, Age)
VALUES
(101, 'Sadia', 3.99, 19),
(102, 'Nusrat', 3.20, 21),
(103, 'Kamal', 3.56, 18),
(104, 'Jony', 3.75, 20),
(105, 'Amit', 3.01, 18);

SELECT * FROM Student_Details;
SELECT * FROM Student_Marks;

--1. Write a query to create a view for those student belongs to the rajshahi.
CREATE VIEW ST_BELONGS_RAJ AS
SELECT * 
FROM Student_Details S
WHERE S.Address = 'Rajshahi' ;

SELECT * FROM ST_BELONGS_RAJ;

--2. write a query to create a view for all student Student_ID, CGPA
CREATE VIEW ST_ID$CGPA AS
SELECT Student_ID, CGPA
FROM Student_Marks;

SELECT * FROM ST_ID$CGPA;

--3. Write a query to create a view to find student from dhaka whose cgpa more than 3.50
CREATE VIEW ST_inDH_35 AS
SELECT D.Student_ID, D.Name, D.Address, M.CGPA
FROM Student_Details D
JOIN Student_Marks M ON D.Student_ID=M.Student_ID
WHERE D.Address = 'Dhaka'
AND M.CGPA > 3.50;

SELECT * FROM ST_inDH_35;

-- CREATE A VIEW TO COUNT STUDENT ACORDING TO AGE
CREATE VIEW ST_COUNT_AC2AGE AS
SELECT Age, COUNT(*) AS TOTAL_ST
FROM Student_Marks
GROUP BY AGE;

SELECT * FROM ST_COUNT_AC2AGE;