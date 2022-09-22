


create table order1(Order_ID int,Cust_Name varchar(40),Product_Name varchar(50),Quantity int,Order_Date date)

insert into order1 values(231,'Ogi','Biscuit',5,'2022-3-5')
insert into order1 values(231,'Magi','Cake',15,'2022-4-6')
insert into order1 values(231,'Poo','Magii',25,'2022-3-5')
insert into order1 values(231,'Dii','Chips',52,'2022-7-3')
insert into order1 values(231,'Jack','Namkin',23,'2022-3-15')
insert into order1 values(231,'Harry','Fruits',12,'2022-3-6')

select * from order1 where Order_Date between '2022-4-5' and  '2022-7-3'
select *from order1 where Cust_Name like '%gi%'