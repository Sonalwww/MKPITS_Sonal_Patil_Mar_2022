




create table products(
product_id int Identity Primary key,product_name varchar(30) NOT NULL,
unit_price dec(10,2) check(unit_price>=0))

insert into products values('momoses',120)
insert into products values('Awesome free bike',40)
insert into products values('Awesome free bike',NULL)

select * from products


CREATE TABLE products2(
product_id Int IDENTITY PRIMARY KEY,product_name VARCHAR(233)NOT NULL,
unit_price DEC(10,2) 
CHECK(unit_price>0),
discounted_price DEC(10,3) 
CHECK(discounted_price>0),
CHECK(discounted_price<unit_price))

insert into products2 values('ballon',134,23)

insert into products2 values('pin',230,40)


select * from products2 