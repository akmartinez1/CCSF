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
  cl_postal_code
||': '
||cl_city
||' '
||cl_state
as "Location"
from vt_clients;


/*  TASK 02  */
select
   cl_name_first
,  cl_name_last
,  cl_phone
from vt_clients
where cl_phone is not null
order by cl_id;


/*  TASK 03 */
select distinct
   srv_id
from vt_exam_details
where ex_fee >= 75;


/*  TASK 04 */
select
   stf_name_first
||' '
||stf_name_last
as "STAFF"
,  stf_id
,  stf_job_title
from vt_staff
where stf_job_title not in ('vet', 'vet assnt');


/*  TASK 05 */
select
   srv_id as "Service ID"
,  srv_type as "Service Type"
,  srv_desc as "Description"
,  srv_list_price as "Curr Price"
,  srv_list_price * 1.15 as "Incr Price"
from vt_services
where srv_type not in ('office visit');


/*  TASK 06 */
select
   cl_id
,  an_id
,  an_name
from vt_animals
where an_type in ('hamster', 'capybara', 'porcupine' , 'dormouse')
order by cl_id, an_id;


/*  TASK 07 */
select distinct
   cl_id
,  an_type
from vt_animals
where an_type in ('snake', 'chelonian', 'crocodilian', 'lizard')
order by cl_id;

/*  TASK 08 */
select
   cl_id
,  an_id
,  an_name
,  an_dob
from vt_animals
where an_type not in ('snake', 'chelonian', 'crocodilian', 'lizard'
, 'hamster', 'capybara', 'porcupine' , 'dormouse')
order by an_dob desc;


/*  TASK 09 */


/*  TASK 10 */
A
