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
select cl_id,
  an_id,
  an_type,
  an_name
from vt_animals
where an_type in ('cat', 'dog')
and an_dob <= '31-DEC-2009';


/*  TASK 02  */
select ex_id,
  ex_date,
  srv_id,
  ex_fee
from vt_exam_headers
join vt_exam_details using (ex_id)
join vt_animals using (an_id)
where an_type in ('hamster', 'capybara', 'porcupine', 'dormouse')
order by ex_id, srv_id;


/*  TASK 03 */
select stf_id,
  stf_name_first||' '||stf_name_last as "STAFF",
  ex_date
from vt_staff
join vt_exam_headers using (stf_id)
join vt_animals using (an_id)
where an_type not in ('snake', 'chelonian', 'crocodilian', 'lizard', 'bird')
order by ex_date;


/*  TASK 04 */
select cl_id,
  ex_id,
  ex_date,
  srv_id,
  ex_fee
from vt_clients
join vt_animals using (cl_id)
join vt_exam_headers using (an_id)
join vt_exam_details using (ex_id)
where ex_fee not between 50 and 100
order by ex_date, srv_id;


/*  TASK 05 */
select *
from vt_services
where srv_desc like '%Feline%' and srv_desc not like '%Dental%'
order by srv_type, srv_id;


/*  TASK 06 */
select distinct cl_id,
  cl_name_last
from vt_clients
join vt_animals using (cl_id)
where an_type = 'dog'
order by cl_id;


/*  TASK 07 */
select distinct cl_id,
  cl_name_last
from vt_clients
join vt_animals using (cl_id)
where an_type != 'dog'
order by cl_id;


/*  TASK 08 */
select distinct cl_id,
  cl_name_last
from vt_clients
join vt_animals using (cl_id)
where an_type in ('hamster', 'capybara', 'porcupine', 'dormouse')
order by cl_id;


/*  TASK 09 */
select distinct cl_id,
  cl_name_last
from vt_clients
join vt_animals using (cl_id)
where an_type not in ('hamster', 'capybara', 'porcupine', 'dormouse')
order by cl_id;

/*  TASK 10 */
