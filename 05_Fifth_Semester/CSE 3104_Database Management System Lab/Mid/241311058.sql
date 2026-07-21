CREATE DATABASE ASSESMENT;

USE ASSESMENT;

CREATE TABLE STUDENT(
    Student_ID INT PRIMARY KEY,
    Name VARCHAR(100),
    Department VARCHAR(50),
    CGPA DECIMAL(3,2),
    Admission_Year INT
);

CREATE TABLE COURSE(
    Course_ID VARCHAR(10) PRIMARY KEY,
    Course_Name VARCHAR(100),
    Credit INT,
    Instructor VARCHAR(100),
    Department VARCHAR(50)
);

INSERT INTO STUDENT (Student_ID, Name, Department, CGPA, Admission_Year) VALUES
(101, 'Rafiq', 'CSE', 3.75, 2021),
(102, 'Nabila', 'EEE', 3.60, 2020),
(103, 'Hasan', 'CSE', 3.90, 2019),
(104, 'Tania', 'BBA', 3.40, 2022),
(105, 'Reza', 'EEE', 3.10, 2021);

INSERT INTO COURSE (Course_ID, Course_Name, Credit, Instructor, Department) VALUES
('C101', 'Database Systems', 3, 'Dr. Karim', 'CSE'),
('C102', 'Circuit Theory', 3, 'Dr. Rahman', 'EEE'),
('C103', 'Marketing Basics', 2, 'Dr. Jahan', 'BBA'),
('C104', 'Computer Networks', 3, 'Dr. Alam', 'CSE'),
('C105', 'Control Systems', 3, 'Dr. Rahman', 'EEE');

--1
SELECT 
    AVG(CGPA) AS AVG_CGPA
FROM STUDENT
GROUP BY Department;

--2
SELECT 
    Department
FROM STUDENT
GROUP BY Department;

--3
SELECT 
    S.Student_ID, S.Name ,S.Department
FROM STUDENT S 
RIGHT OUTER JOIN COURSE C
ON S.Department = C.Department
ORDER BY S.Student_ID ASC;

--4
SELECT 
    c.Course_ID,
    SUM(c.Credit) AS S_CREDIT
FROM COURSE c
LEFT JOIN STUDENT s 
    ON s.Department = c.Department
GROUP BY c.Course_ID
ORDER BY S_CREDIT;


--5
SELECT 
    DEPARTMENT,
    MAX(Credit) AS H_CREDIT
FROM COURSE

SELECT * FROM STUDENT;
SELECT * FROM COURSE;
