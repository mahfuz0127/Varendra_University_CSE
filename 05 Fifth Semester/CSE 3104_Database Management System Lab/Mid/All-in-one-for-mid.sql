CREATE DATABASE AlliNoNE;

USE AlLiNoNE;

/*TABLE CREATION : This is used to create a new table */
CREATE TABLE STUDENT(
	ST_ID INT PRIMARY KEY,
	ST_NAME VARCHAR(50),
	ST_CLASS VARCHAR(50)
);

/*ALTER TABLE ...ADD...: This is used to add some extra fields into existing relation.*/
ALTER TABLE STUDENT ADD
	ST_ADDRESS VARCHAR(50),	
	ST_PHONE INT

/*ALTER TABLE..DROP...: This is used to remove any field of existing relations.*/
ALTER TABLE STUDENT DROP COLUMN
	ST_ADDRESS

/*Inserting multiple records*/
INSERT INTO STUDENT (ST_ID,ST_NAME,ST_CLASS,ST_PHONE) VALUES
	(001,'MAHFUZ','5TH',76769),
	(002,'MARUF','5TH',75769),
	(003,'SABBIR','5TH',76169),
	(004,'RAIHAN','6TH',78343),
	(005,'MUSTAFIZ','7TH',98763),
	(006,'EVU','5TH',76769),
	(007,'SAIF','8TH',76769),
	(008,'MISHU','2ND',76769);
	
/*UPDATE-SET-WHERE: This is used to update the content of a record in a relation*/
UPDATE STUDENT SET ST_PHONE=98378
WHERE ST_ID=008;
/*UPDATE WITH JOIN
 Syntax: UPDATE t1 SET t1.c1 = t2.c2,t1.c2 = expression, ... FROM t1 
 [INNER | LEFT] JOIN t2 ON join_predicate WHERE where_predicate;

DELETE-FROM: This is used to delete all the records of a relation but it will retain the 
structure of that relation.
a) DELETE-FROM: This is used to delete all the records of relation.
Syntax: SQL>DELETE FROM relation_name;
Example: SQL>DELETE FROM student;
b) DELETE -FROM-WHERE: This is used to delete a selected record from a 
relation.
Syntax: SQL>DELETE FROM relation_name WHERE condition;
Example: SQL>DELETE FROM student WHERE sno = 2;
Page | 13
c) DELETE WITH JOIN
 Syntax: DELETE t1 FROM t1 JOIN t2 ON join_predicate WHERE 
 where_predicate;
 Example: DELETE Table1 FROM Table1 t1 INNER JOIN Table2
 t2 ON t1.Col1 = t2.Col1 WHERE t2.Col3 IN ('Two-Three','Two-Four')
4. TRUNCATE: This command will remove the data permanently. But structure will not be 
removed.
Syntax: SQL> TRUNCATE TABLE relation_name 
Example: SQL> TRUNCATE TABLE student 

*/




SELECT * FROM STUDENT;