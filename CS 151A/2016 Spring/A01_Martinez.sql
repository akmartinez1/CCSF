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
from zoo_2016
where z_id > 100;
select *
from zoo_2016;


/*  TASK 02  */
insert into zoo_2016 (z_id, z_name, z_type, z_cost, z_dob, z_acquired)
values (120, 'Mommy', 'Panda', 10000.00, to_date ('1971-01-01', 'YYYY-MM-DD'), date '1971-01-01');

insert into zoo_2016 (z_id, z_name, z_type, z_cost, z_dob, z_acquired)
values (121, 'Andrew', 'Tiger', 10000.00, to_date ('2005-01-01', 'YYYY-MM-DD'), date '2005-01-01');

insert into zoo_2016 (z_id, z_name, z_type, z_cost, z_dob, z_acquired)
values (122, 'Alina', 'Monkey', 10000.00, to_date ('2007-01-01', 'YYYY-MM-DD'), date '2007-01-01');

/*  TASK 03 */
insert into zoo_2016 (z_id, z_name, z_type, z_cost, z_dob, z_acquired )
values (102, 'Simba', 'Lion', 7500.00, to_date('2013-06-06', 'YYYY-MM-DD'), date '2015-08-31' );

insert into zoo_2016 (z_id, z_name, z_type, z_cost, z_dob, z_acquired )
values (106, 'Timon', 'Meerkat', 550.50, to_date('2014-06-06', 'YYYY-MM-DD'), date '2015-08-31' );

insert into zoo_2016 (z_id, z_name, z_type, z_cost, z_dob, z_acquired )
values (110, 'Pumbaa', 'Warthog', 550.50, to_date('2010-06-06', 'YYYY-MM-DD'), date '2015-08-31' );

INSERT INTO zoo_2016 (z_id, z_name, z_type, z_cost, z_dob, z_acquired)
VALUES (101, 'Pongo', 'Dog', 1010.00, to_date('2013-01-26', 'YYYY-MM-DD'), date '2014-05-01');

INSERT INTO zoo_2016 (z_id, z_name, z_type, z_cost, z_dob, z_acquired)
VALUES (102, 'Perdita', 'Dog', 1020.00, to_date('2014-02-23', 'YYYY-MM-DD'), date '2015-12-02');

INSERT INTO zoo_2016 (z_id, z_name, z_type, z_cost, z_dob, z_acquired)
VALUES (103, 'Cripples', 'Horse', 10300.00, to_date('2011-11-11', 'YYYY-MM-DD'), date '2012-12-12');

/*  TASK 04 */
select z_id, z_name, z_type, z_cost, z_dob, z_acquired
from zoo_2016;

/*  TASK 05 */
Select z_type, z_name, z_cost from zoo_2016
order by z_type, z_name;

/*  TASK 06 */
elect z_id, z_name, z_dob from zoo_2016
where z_type = 'Zebra' order by z_dob desc;


/*  TASK 07 */
select tname
from tab;

/*  TASK 08 */
desc zoo_2016

/*  TASK 09 */


/*  TASK 10 */
