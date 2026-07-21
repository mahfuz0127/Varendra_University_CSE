CREATE DATABASE VUSTDBS58;
USE VUSTDBS58;

CREATE TABLE Student_Marks (
    Student_ID INT PRIMARY KEY,
    Name VARCHAR(50),
    CGPA DECIMAL(3,2),
    Age INT
);

CREATE TABLE Student_Details (
    Student_ID INT PRIMARY KEY,
    Name VARCHAR(50),
    Address VARCHAR(50),
    FOREIGN KEY (Student_ID) REFERENCES Student_Marks
    ON DELETE CASCADE
);

INSERT INTO Student_Marks (Student_ID, Name, CGPA, Age)
VALUES
(101, 'Sadia', 3.99, 19),
(102, 'Nusrat', 3.20, 21),
(103, 'Kamal', 3.56, 18),
(104, 'Jony', 3.75, 20),
(105, 'Amit', 3.01, 18);

INSERT INTO Student_Details (Student_ID, Name, Address)
VALUES
(101, 'Sadia', 'Dhaka'),
(102, 'Nusrat', 'Khulna'),
(103, 'Kamal', 'Rajshahi'),
(104, 'Jony', 'Dhaka');


SELECT * FROM Student_Details;
SELECT * FROM Student_Marks;

--1
CREATE VIEW ST_DETAILS AS
SELECT D.Student_ID, D.Name, M.CGPA, M.Age
FROM Student_Details D
JOIN Student_Marks M ON D.Student_ID = M.Student_ID

SELECT * FROM ST_DETAILS;

--2
CREATE INDEX CL_IDX
ON Student_Marks 

--3
CREATE PROCEDURE ST_PDDETAILS AS
BEGIN
SELECT D.Student_ID, D.Name, M.CGPA
FROM Student_Details D
JOIN Student_Marks M ON D.Student_ID = M.Student_ID
WHERE D.Address = ''
END

EXEC ST_PDDETAILS

--4
CREATE PROCEDURE ST_COUNT AS
BEGIN
SELECT COUNT(*) AS T_ST
FROM Student_Marks
WHERE Age < 22
END

EXEC ST_COUNT 

--5
DELETE Student_Marks
WHERE CGPA < 3.25;