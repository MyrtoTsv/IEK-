<?php
session_start();


$conn = mysqli_connect("localhost", "root", "", "classicmodels");        //dbhost, root , password, nameOfDatabase

if (!$conn){                                                             // SE PERIPTOSI POU DEN YPARXEI 
    die("Σφάλμα σύνδεσης: ".mysqli_connect_error());
}

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $email = $_POST['email'] ?? '';
    $password = $_POST['password'] ?? '';



$email = mysqli_real_escape_string($conn, $email);
$password = mysqli_real_escape_string($conn, $password);

$sql = "SELECT * FROM users WHERE email='$email' AND password='$password'";


$result = mysqli_query($conn, $sql);

if (mysqli_num_rows($result) > 0) {

$user = mysqli_fetch_assoc($result);

$_SESSION['username'] = $user['username'];
$_SESSION['email'] = $user['email'];
$_SESSION['password'] = $user['password'];
$_SESSION['age'] = $user['age'];
$_SESSION['country'] = $user['country'];


header("Location:welcome.php");
exit();

}
else
{

echo "O χρήστης δεν υπάρχει";

}
}
?>


<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>Sign in</title>

<style>

body{
    display: flex;
    justify-content: center;  
    align-items: center;       
    height: 100vh;            
    margin: 0;
    background-color:#F0F8FF;
}

label {
    display: block;
    margin-top: 10px;
}

input {
    width: 300px;
    height:35px;
    padding: 5px;
    margin-bottom: 20px;
    border-radius: 10px;
    font-size:18px;
}

#button{
    font-size:20px;
    width: 320px;
    height:45px;
    font-weight:bold;
    background-color:cornflowerblue;
}

form{
    background-color:white;
    width: 380px;
    border-radius:15px;
    padding: 35px; 
    text-align:center;
}

a{
    text-decoration: none;
}

</style>
</head>

<body>

<form method="POST" action ="">
        <h1>Sign in</h1>

        <input type="text" name="email" placeholder="Email" required>

        <input type="password" name ="password" placeholder="Password" required><br>

        <input type="submit" id="button" value="Sign in"><br></a>
       
        <a href="register.php">Don't have an account?<b>Register</b></a>
</form>

</body>
</html>