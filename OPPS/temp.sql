create database test;
show databases;
use test;
show tables;
create table employee(
    id int primary key,
    name varchar(20),
    age int
);
insert into employee(id,name,age) values(1,"John",25);
insert into employee(id,name,age) values(2,"Jane",30);
insert into employee(id,name,age) values(3,"Jim",35);
insert into employee(id,name,age) values(4,"Jill",40);
insert into employee(id,name,age) values(5,"Jill",40);
select * from employee;
