

Create table Storess(
Stored_ID int NOT NULL PRIMARY KEY,Stored_Name varchar(50),
Phone int,Email varchar(60),Street varchar(560),City varchar(70),
State varchar(80),Zip_Code int)

insert into Storess values(1,'foo',121212,'foo@gmail.com','darda','Yavatmal','Maharashatr',445002)
insert into Storess values(2,'spo',1211212,'soo@gmail.com','darda','Yavatmal','Maharashatr',445002)
insert into Storess values(3,'noor',1231212,'noor@gmail.com','darda','Yavatmal','Maharashatr',445002)
insert into Storess values(4,'foto',144212,'foto@gmail.com','darda','Yavatmal','Maharashatr',445002)
insert into Storess values(5,'moto',125512,'moto@gmail.com','darda','Yavatmal','Maharashatr',445002)
insert into Storess values(6,'hoho',177212,'hoho@gmail.com','darda','Yavatmal','Maharashatr',445002)
insert into Storess values(7,'goloo',021212,'goloo@gmail.com','darda','Yavatmal','Maharashatr',445002)
insert into Storess values(8,'sonoo',125512,'sonoo@gmail.com','darda','Yavatmal','Maharashatr',445002)
insert into Storess values(9,'mishoo',121342,'mishoo@gmail.com','darda','Yavatmal','Maharashatr',445002)
insert into Storess values(10,'bosoo',166212,'bosoo@gmail.com','darda','Yavatmal','Maharashatr',445002)

select * from Storess

create table Staff( Staff_ID int NOT NULL PRIMARY KEY,First_Name varchar(60),Last_Name varchar(80),
Email_ID varchar(80),phone int,Stored_ID INT FOREIGN KEY (Stored_ID) REFERENCES Storess(Stored_ID),
Manager_ID int)

insert into Staff values(101,'Harry','Clipatan','harry@gmail.com',2324556,1,301)
insert into Staff values(102,'Messi','Clipatan','messi@gmail.com',2324556,2,302)
insert into Staff values(103,'Arther','Clipatan','arther@gmail.com',2324556,3,303)
insert into Staff values(104,'Ema','Clipatan','ema@gmail.com',2324556,4,304)
insert into Staff values(105,'Gayeils','Baringtan','gayeils@gmail.com',2324556,5,305)
insert into Staff values(106,'Jack','Tarent','jack@gmail.com',2324556,6,306)

select * from Staff 

Create table Categories(Category_ID INT PRIMARY KEY,Category_Name varchar(780)) 

Insert into Categories values(201,'erer')
Insert into Categories values(202,'eret')
Insert into Categories values(203,'mrer')
Insert into Categories values(204,'yuer')
Insert into Categories values(205,'errt')
Insert into Categories values(206,'bhtu')

select * from Categories 


create table brands(Brand_ID int PRIMARY KEY,Brand_Name varchar(340))

insert into brands values(1001,'Nike')
insert into brands values(1002,'Apple')
insert into brands values(1003,'Amazon')
insert into brands values(1004,'Hero')
insert into brands values(1005,'Lambo')

select * from brands

create table Productss(Product_ID INT PRIMARY KEY,Product_Name varchar(780),Brand_ID INT FOREIGN KEY(Brand_ID) REFERENCES brands(Brand_ID),
Category_ID INT FOREIGN KEY(Category_ID) REFERENCES Categories(Category_ID),Model_Year Int,List_Price Int)

insert into Productss values(2001,'Bike',1001,201,1999,23000)
insert into Productss values(2002,'Cycle',1002,202,2000,23000)
insert into Productss values(2003,'Chocolate',1003,203,2013,23000)
insert into Productss values(2004,'Ice-Cream',1004,204,2014,23000)
insert into Productss values(2005,'Biscuit',1005,205,2022,23000)

select * from Productss 

Create table Customers(Cust_ID int PRIMARY KEY,First_Name varchar(790),Last_Name varchar(600),Phone int,Email varchar(60),Street varchar(500),City varchar(600),
State varchar(800),Zip_Code int)

Insert into Customers values(5001,'Ema','Barington',3456388,'ema@gmail.com','Lohara','Yavatmal','Maharashtra',23451)
Insert into Customers values(5002,'Elizabeth','Barington',34266788,'eli@gmail.com','Lohara','Yavatmal','Maharashtra',26751)
Insert into Customers values(5003,'Gres','Barington',34566348,'gresa@gmail.com','Lohara','Yavatmal','Maharashtra',23891)
Insert into Customers values(5004,'Dikince','Barington',34576788,'dikincea@gmail.com','Lohara','Yavatmal','Maharashtra',23251)
Insert into Customers values(5005,'Tancaka','Barington',35678788,'tancka@gmail.com','Lohara','Yavatmal','Maharashtra',26651)

select * from Customers


Create table Order123(Order_Id int PRIMARY KEY,Cust_ID Int FOREIGN KEY(Cust_ID) REFERENCES Customers (Cust_ID),Order_Status varchar(60),Order_Date date,Required_Date date,
Shipped_Date date,Stored_ID Int FOREIGN KEY(Stored_ID)REFERENCES Storess (Stored_ID),Staff_ID int FOREIGN KEY(Staff_ID)REFERENCES Staff)

Insert into Order123 values(6001,5001,'shipped','2022-9-1','2022-9-1','2022-9-2',1,101)
Insert into Order123 values(6002,5002,'completed','2022-9-2','2022-9-3','2022-9-4',2,102)
Insert into Order123 values(6003,5003,'progress','2022-9-5','2022-9-6','2022-9-7',3,103)
Insert into Order123 values(6004,5004,'reject','2022-9-8','2022-9-9','2022-9-10',4,104)
Insert into Order123 values(6005,5005,'process','2022-9-12','2022-9-16','2022-9-20',5,105)

select * from Order123


Create table Order_Items(Order_ID Int FOREIGN KEY(Order_Id) REFERENCES Order123(Order_Id),Item_Id int PRIMARY KEY,Product_Id int,Quantity int,List_Price DECIMAL(10,2),
Discount DECIMAL(10,1))

insert into Order_Items values(6001,7001,801,100,200,50)
insert into Order_Items values(6002,7002,802,200,200,50)
insert into Order_Items values(6003,7003,803,300,200,50)
insert into Order_Items values(6004,7004,804,400,200,50)
insert into Order_Items values(6005,7005,805,600,200,50)

select * from Order_Items

create table Stocks(Stored_ID INT FOREIGN KEY REFERENCES Storess,Product_ID INT FOREIGN KEY REFERENCES Productss,Quantity INT)

Insert Into Stocks values(1,2001,100)
Insert Into Stocks values(2,2002,200)
Insert Into Stocks values(3,2003,300)
Insert Into Stocks values(4,2004,400)
Insert Into Stocks values(5,2005,500)

select *from Stocks