set echo on
set feedback 1
set pagesize 999
set trimspool on
set linesize 200
set tab off
clear columns


/* Alan K. Martinez */

/*  TASK 00 */
select user, sysdate
from dual;

/*  TASK 01 */
delete
from zoo_2015
where z_id > 100;

select *
from zoo_2015;


/*  TASK 02  */
insert into zoo_2015 (z_id, z_name, z_type, z_cost, z_dob, z_acquired)
values (110, 'Mommy', 'Panda', 10000.00, to_date ('1971-01-01', 'YYYY-MM-DD'), date '1971-01-01');

insert into zoo_2015 (z_id, z_name, z_type, z_cost, z_dob, z_acquired)
values (111, 'Andrew', 'Tiger', 10000.00, to_date ('2005-01-01', 'YYYY-MM-DD'), date '2005-01-01');

insert into zoo_2015 (z_id, z_name, z_type, z_cost, z_dob, z_acquired)
values (112, 'Alina', 'Monkey', 10000.00, to_date ('2007-01-01', 'YYYY-MM-DD'), date '2007-01-01');


/*  TASK 03 */
Insert Into zoo_2015  (z_id, z_name, z_type, z_cost, z_dob, z_acquired)
Values (101, 'Tommy', 'Shark', 500.00, to_date('2015-05-15', 'YYYY-MM-DD'), date '2015-05-15');

Insert Into zoo_2015  (z_id, z_name, z_type, z_cost, z_dob, z_acquired)
Values (102, 'Fan', 'Butterfly', 15.00, to_date('2015-06-15', 'YYYY-MM-DD'), date '2015-06-15');

Insert Into zoo_2015  (z_id, z_name, z_type, z_cost, z_dob, z_acquired)
Values (103, 'Mask', 'Frog', 30.00, to_date('2015-01-11', 'YYYY-MM-DD'), date '2015-01-16');

Insert Into zoo_2015 ( z_id, z_type, z_cost, z_dob, z_acquired )
Values ( 7001, 'Unicorn', 9999.00, date '2000-02-29', date '2015-08-25' );

Insert Into zoo_2015
Values ( 7002, 'Pikachu', 'Pokemon', 9999.00, date '2008-12-21', date '2015-08-25' );

Insert Into zoo_2015 ( z_id, z_name, z_type, z_cost, z_dob, z_acquired )
Values ( 7003, 'Harold', 'Ant', 0.10, date '2015-08-21', date '2015-08-25' );

insert into zoo_2015 (z_id, z_name, z_type, z_cost, z_dob, z_acquired)
values (111, 'Buddy', 'Dog', 1500, to_date('2014-03-17', 'YYYY-MM-DD'), date '2015-02-02');

insert into zoo_2015 (z_id, z_name, z_type, z_cost, z_dob, z_acquired)
values (222, 'Sophie', 'Cat', 1500, to_date('2015-05-11', 'YYYY-MM-DD'), date '2015-07-17');

insert into zoo_2015 (z_id, z_name, z_type, z_cost, z_dob, z_acquired)
values (333, 'Jake', 'Leopard', 23000, to_date('2013-8-18', 'YYYY-MM-DD'), date '2015-03-17');



/*  TASK 04 */
select z_id, z_name, z_type, z_cost, z_dob, z_acquired
from zoo_2015;


/*  TASK 05 */
Select z_type, z_name, z_cost from zoo_2015
order by z_type, z_name;


/*  TASK 06 */
Select z_id, z_name, z_dob from zoo_2015
where z_type = 'Zebra' order by z_dob desc;


/*  TASK 07 */
select tname
from tab;


/*  TASK 08 */
desc zoo_2015


/*  TASK 09 */


/*  TASK 10 */
