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

