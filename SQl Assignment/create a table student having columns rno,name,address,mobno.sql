





create table Students(RollNum int, Name varchar(30),Address varchar(50),MobNo int,Rank int)

insert into Students values(1,'Sonal','Yavatmal',2345555,1)
insert into Students values(2,'Anushri','Yavatmal',32341313,2)
insert into Students values(3,'Dhbbb','Yavatmal',1223343,3)
insert into Students values(4,'mona','Yavatmal',8988989,4)
insert into Students values(5,'ona','Yavatmal',8666989,5)
insert into Students values(6,'mna','Yavatmal',8988989,6)
insert into Students values(7,'moa','Yavatmal',8955989,7)
insert into Students values(8,'mon','Yavatmal',89884989,8)
insert into Students values(9,'eona','Yavatmal',8982989,9)
insert into Students values(10,'monal','Yavatmal',8338989,10)

select * from Students


select * from Students where RollNum=1
select * from Students Where RollNum>=3
select *from Students where Name='Sonal' and Address='Yavatmal'
select * from Students where Address='Yavatmal'