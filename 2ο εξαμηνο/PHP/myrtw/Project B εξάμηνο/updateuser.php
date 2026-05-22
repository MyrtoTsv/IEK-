<?php

        $conn = mysqli_connect("localhost", "root", "", "classicmodels");        //dbhost, root , password, nameOfDatabase'

        $email = $_GET['email']; //prepei na paroume auto to "monadiko" pou exoume gia na ginei update o sugkekrimenos xrhsths

        //einai ola ta stoixeia tou xrhsth me to sugkekrimeno email
        $sql = "SELECT * FROM users WHERE email='$email'"; 

        $result =  mysqli_query($conn, $sql);

        $user = mysqli_fetch_assoc($result);

        //An ginei postarisma sthn forma
        if ($_SERVER["REQUEST_METHOD"] == "POST") {


            $username = mysqli_real_escape_string($conn,$_POST['username']);
            $email = mysqli_real_escape_string($conn,$_POST['email']);
            $password = mysqli_real_escape_string($conn,$_POST['password']);
            $age= mysqli_real_escape_string($conn,$_POST['age']);
            $country = mysqli_real_escape_string($conn,$_POST['country']);

            //update 
            $sql_update = "UPDATE users SET username='$username',email='$email',password='$password',age='$age',country='$country'";

            mysqli_query($conn, $sql_update);

            header("Location:edituser.php");

            exit();
        }


?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>

     <form method="POST">

    <h1>Update user</h1>

    <!--Auta ta vazoume se $user giati apo ekei ta pairnei,$user = mysqli_fetch_assoc($result);-->
            <label for="username">Name:</label>
            <input type="text" name="username" value ="<?php echo $user['username'];?>"<br>

            <label for="email">Email:</label>
            <input type="email" name="email" value ="<?php echo $user['email'];?>"<br>

            <label for="password">Password:</label>
            <input type="password" name="password" value ="<?php echo $user['password'];?>"<br>

            <label for="age">Age:</label>
            <input type="number" name="age" value ="<?php echo $user['age'];?>"<br>

            <label for="country">Country:</label>
            <input type="text" name="country" value ="<?php echo $user['country'];?>"<br>

            <input type="submit" id="button" value="Update"><br>

</form>
    
</body>
</html>