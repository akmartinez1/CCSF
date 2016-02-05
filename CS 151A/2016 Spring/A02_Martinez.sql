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
select
   stf_name_first
,  stf_name_last
,  stf_job_title
from vt_staff;


/*  TASK 02  */
select
   an_id as "ID"
,  an_name as "Name"
,  an_type as "Animal Type"
,  an_dob as "BirthDate"
from vt_animals
order by "BirthDate";


/*  TASK 03 */
select distinct an_type
from vt_animals;


/*  TASK 04 */
select
   srv_type
,  srv_desc
from vt_services
order by srv_type, srv_list_price;


/*  TASK 05 */
select
   ex_id as "EXAM_ID"
,  srv_id as "SERVICE"
,  ex_fee as "FEE_CHARGED"
from vt_exam_details
order by "EXAM_ID", "FEE_CHARGED";


/*  TASK 06 */
select
   distinct an_name
,  an_type
,  an_dob
from vt_animals
order by an_type, an_name;


/*  TASK 07 */
select
   an_id as "Animal"
,  ex_date as "Exam Date"
,  stf_id as "Staff"
from vt_exam_headers
order by "Staff", "Exam Date" desc;


/*  TASK 08 */
select distinct
   cl_state
,  cl_city
from vt_clients
order by cl_state, cl_city;


/*  TASK 09 */


/*  TASK 10 */
