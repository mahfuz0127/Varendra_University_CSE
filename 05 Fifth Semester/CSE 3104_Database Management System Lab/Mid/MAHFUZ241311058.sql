CREATE DATABASE STCOURSE;

USE STCOURSE;

CREATE TABLE Student (
    Student_ID INT PRIMARY KEY,
    Name VARCHAR(100),
    Department VARCHAR(50),
    CGPA DECIMAL(3,2),
    Admission_Year INT
);

CREATE TABLE Course (
    Course_ID VARCHAR(10) PRIMARY KEY,
    Course_Name VARCHAR(100),
    Credit INT,
    Instructor VARCHAR(100),
    Department VARCHAR(50)
);

INSERT INTO Student (Student_ID, Name, Department, CGPA, Admission_Year) VALUES
(101, 'Rafiq', 'CSE', 3.75, 2021),
(102, 'Nabila', 'EEE', 3.60, 2020),
(103, 'Hasan', 'CSE', 3.90, 2019),
(104, 'Tania', 'BBA', 3.40, 2022),
(105, 'Reza', 'EEE', 3.10, 2021);

INSERT INTO Course (Course_ID, Course_Name, Credit, Instructor, Department) VALUES
('C101', 'Database Systems', 3, 'Dr. Karim', 'CSE'),
('C102', 'Circuit Theory', 3, 'Dr. Rahman', 'EEE'),
('C103', 'Marketing Basics', 2, 'Dr. Jahan', 'BBA'),
('C104', 'Computer Networks', 3, 'Dr. Alam', 'CSE'),
('C105', 'Control Systems', 3, 'Dr. Rahman', 'EEE');

SELECT * FROM Student;
SELECT * FROM Course:
