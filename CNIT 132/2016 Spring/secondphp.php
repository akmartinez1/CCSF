<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN"
        "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
      <html xmlns="http://www.w3.org/1999/xhtml" lang="en" xml:lang="en">
<head>
<title>Using a link with event handler</title>
<style type="text/css">
	h3 {color:#FF0000; font-type:italic; text-align:center;}
</style>
</head>
<body>

<p>This paragraph will be shown right before any of the PHP below</p>

 <form action="" method="get">
 <label for="name">Your Name </label>
<input type="text" id="name" name="name">
 <input type="submit" value="Submit" onclick="writeName(name);">
 </form>
<p>
<?php

/* function writeName($a)
{ */
   
 /* $PHP_SELF is an environment variable that'll show the
       path from your root folder to this
       document itself. Just for you to test this command.
       NOTE: This may only work if your server is Apache. */

   // print "$PHP_SELF";

    // When you want to write HTML code from within PHP code,
    // you need to do as shown below, using the function print().
    // Inside parentheses you write the HTML code.

    $msg = "awesome";
    $username = "Claudia";
    
    echo ("<h3>");

    echo ("$username sentences for the day");

    echo ("</h3>");
 
    print ("<p>");
 
    print ("When I'm happy, I want to say $msg");
 
    print ("</p>");

    $msg = "ouch"; 

    print ("<p style=\"text-align:center;color:blue\">");
 
    print ("When it hurts, I want to say $msg");
 
    print ("</p>");
/* } */

?>
</p>

</body>
</html>