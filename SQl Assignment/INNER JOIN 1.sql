
create table student_s(ID INT PRIMARY KEY IDENTITY,
ADMISSION_NO VARCHAR(45)NOT NULL,FIRST_NAME  VARCHAR(56),
LAST_NAME VARCHAR(65) NOT NULL,AGE INT,CITY VARCHAR(45)NOT NULL)

CREATE TABLE FEE(ADMISSION_NO VARCHAR(45)NOT NULL,COURSE VARCHAR(45)NOT NULL,
AMOUNT_PAID INT)
 INSERT INTO Student_S(ADMISSION_NO, FIRST_NAME, LAST_NAME, AGE, CITY)       
    VALUES (3354,'Luisa', 'Evans', 13, 'Texas'),       
    (2135, 'Paul', 'Ward', 15, 'Alaska'),       
    (4321, 'Peter', 'Bennett', 14, 'California'),    
    (4213,'Carlos', 'Patterson', 17, 'New York'),       
    (5112, 'Rose', 'Huges', 16, 'Florida'),  
    (6113, 'Marielia', 'Simmons', 15, 'Arizona'),    
    (7555,'Antonio', 'Butler', 14, 'New York'),       
    (8345, 'Diego', 'Cox', 13, 'California'); 


	
      
    INSERT INTO Fee (admission_no, course, amount_paid)       
    VALUES (3354,'Java', 20000),       
    (7555, 'Android', 22000),       
    (4321, 'Python', 18000),    
    (8345,'SQL', 15000),       
    (5112, 'Machine Learning', 30000)

    SELECT * FROM STUDENT_S
	SELECT * FROM FEE

	SELECT Student_S.admission_no, Student_S.first_name, Student_S.last_name, Fee.course, Fee.amount_paid  
    FROM Student_S  
    INNER JOIN Fee  
    ON Student_S.admission_no = Fee.admission_no; 