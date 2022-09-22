

create database mkpits

create table stud(roll_no int,Name varchar(40),city varchar(40))

insert into stud values(1,'sdf','yavatmal')
insert into stud values(2,'ssf','nagpur')
insert into stud values(3,'sff','mumbai')
insert into stud values(4,'sbf','washim')
insert into stud values(5,'shf','pune')

select * from stud


select distinct
  
  
 city 


from

stud

select Name from stud order by Name

select 
roll_no,Name,city
from
stud
order by Name desc;