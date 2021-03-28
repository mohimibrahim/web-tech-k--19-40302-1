<!--
<html>
<body>
Your Input
<br>

<?php echo $_POST["fname"];?><br>
<?php echo $_POST["femail"];?><br>
<?php echo $_POST["fweb"];?><br>
<?php echo $_POST["comment"];?><br>
<?php echo $_POST["gender"];?><br>

</body>
</html>
-->
<?php
if(isset($_POST["submit"]))  
    {
        $servername = "localhost"; 
        $username = "root";
        $password = "";
        $dbname = "lab3";
// Create connection
$conn = new mysqli($servername, $username, $password, $dbname);


if($conn->connect_error)
{
    die("Connection failed : ".$conn->connect_error);
}
$name = "fname";
$email = "femail";
$website = "fweb";
$comment = "comment";
$gender = "gender";
$sql = "INSERT INTO user (Name, E-mail, Website, Comment, Gender)
VALUES ('$name', '$email', '$website', '$comment', $gender')";

$res = $conn->query($sql);
if($res)
{
    echo "new record inserted";
}
else
{
    echo "error occured.$conn->error";
}
$conn->close();
    }
?>