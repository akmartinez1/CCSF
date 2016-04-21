<?php
/* Currently this php program, after being executed, is placing the user back to the index.htm file. If you want to change that, change the header(Location:) parameter in this program */
$humantest = $_REQUEST['Human'];
if (empty($humantest)) {
$to = "cnit@mail.ccsf.edu"; 
$from = $_REQUEST['Email'] ; 
$name = $_REQUEST['Name'] ; 
$headers = "From: $from"; 
$subject = "CNIT Website - Request Counseling Form"; 

$fields = array(); 
$fields{"Name"} = "Name"; 
$fields{"Email"} = "Email"; 
$fields{"Message"} = "Message"; 

$body = "We have received the following information:\n\n"; foreach($fields as $a => $b){ $body .= sprintf("%20s: %s\n",$b,$_REQUEST[$a]); } 

$headers2 = "From: cnit@mail.ccsf.edu"; 
$subject2 = "Thanks for contacting the CNIT Department of CCSF"; 
/* You can change the message of the autoreply that is sent to the user here */
$autoreply = "Thank you for contacting the CNIT Department of CCSF. Somebody will get back to you as soon as possible with answers to your questions or comments.";

$send = mail($to, $subject, $body, $headers); 
$send2 = mail($from, $subject2, $autoreply, $headers2); 
/* The "Location: http://www.ccsf.edu/cnit" will make the user go back to the index.htm, main page. If you want, you can change this here but need to write the entire path of the page you want to go back to */
if($send) 
{header( "Location: http://www.ccsf.edu/cnit" );} 
else 
{print "We encountered an error sending your mail, please try again or call us - 415-452-5323"; } 
;
}
?> 

