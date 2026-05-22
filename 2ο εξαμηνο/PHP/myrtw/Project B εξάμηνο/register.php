<?php

$conn = mysqli_connect("localhost","root", "","classicmodels");

if(!$conn){
    die("Σφάλμα σύνδεσης: ".mysqli_connect_error());
}

if($_SERVER["REQUEST_METHOD"] == "POST") {

    $username = mysqli_real_escape_string($conn,$_POST['username']);
    $email = mysqli_real_escape_string($conn,$_POST['email']);
    $password = mysqli_real_escape_string($conn,$_POST['password']);
    $age= mysqli_real_escape_string($conn,$_POST['age']);
    $country = mysqli_real_escape_string($conn,$_POST['country']);

    
    $sql = "INSERT INTO users(username, email ,password, age, country ) VALUES('$username', '$email', '$password', '$age', '$country')"; //Ta nea dedomena pou tha valoume ston pinaka users

    if(mysqli_query($conn, $sql)) {
        header("Location:login.php");
        exit();
    }
    else{
        echo"Σφάλμα";
    }
}

?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Register</title>

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
    display:block;
    text-align:left;
    width:300px;       
    margin:10px auto 6px auto;
    font-size:20px;    
    font-weight:bold;
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

</style>
</head>
<body>
    <form method="POST">

    <h1>Register</h1>

            <label for="username">Name:</label>
            <input type="text" name="username" placeholder="Name" required><br>

            <label for="email">Email:</label>
            <input type="email" name="email" placeholder="Email" required><br>

            <label for="password">Password:</label>
            <input type="password" name="password" placeholder="Password" required><br>

            <label for="age">Age:</label>
            <input type="number" name="age" placeholder="Age" required><br>

            <label for="country">Country:</label>
            <input type="text" name="country" placeholder="Country" required><br>

            <input type="submit" id="button" value="Register"><br>

</form>
    
</body>
</html>
