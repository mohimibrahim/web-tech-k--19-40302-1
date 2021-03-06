<?php
$servername = "localhost"; //default host name
$username = "root"; // default user is root
$password = "";// default password is empty

//create connection using mysqli function
$conn = new mysqli($servername, $username, $password);

//check connection
if($conn->connect_error)
{
    die("Connection failed : ".$conn->connect_error);
}
echo "connect successfully";
?>