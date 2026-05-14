<?php
session_start();


$conn = mysqli_connect("localhost", "root", "", "classicmodels");        //dbhost, root , password, nameOfDatabase

if (!$conn){                                                             // SE PERIPTOSI POU DEN YPARXEI 
    die("Σφάλμα σύνδεσης: ".mysqli_connect_error());
}

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $username = $_POST['username'] ?? '';
    $password = $_POST['pass'] ?? '';

}

$username = mysqli_real_escape_string($conn, $username);
$password = mysqli_real_escape_string($conn, $password);

$sql = "SELECT * FROM users WHERE username='$username' AND password='$password'";


$result = mysqli_query($conn, $sql);

if (mysqli_num_rows($result) > 0) {

$user = mysqli_fetch_assoc($result);

$_SESSION['name'] = $user['name'];
$_SESSION['lastname'] = $user['lastname'];
$_SESSION['phone'] = $user['phone'];
$_SESSION['username'] = $user['username'];
$_SESSION['password'] = $user['password'];


header("Location:welcome.php");
exit();

}
else
{

echo "O χρήστης δεν υπάρχει";

}





?>

<!DOCTYPE html>
<html>
<head>
    <meta charset='utf-8'>
    <meta http-equiv='X-UA-Compatible' content='IE=edge'>
    <title>Login</title>
    <meta name='viewport' content='width=device-width, initial-scale=1'>
    <link rel='stylesheet' type='text/css' media='screen' href='main.css'>
    <link rel="icon" type="image/x-icon" href="carr.png">
    <script src='main.js'></script>
    <style>
        
        *{   margin: 0;
             padding: 0;
             box-sizing: border-box;}

        body{
             display: grid;
             grid-template-columns: auto;
             place-items: center;
             height: 100vh;
             background-image:url(carss.webp);
             background-repeat: no-repeat;
             font-family: 'Gill Sans', 'Gill Sans MT', Calibri, 'Trebuchet MS', sans-serif;
             background-size: 100%;
        }
        
        .login{
               height: auto;
               width: 20vw;
               padding: 60px 40px 60px 40px;
               border-radius: 20px;
               backdrop-filter: blur(15px);
               border: 1px solid white;
               background-color:transparent;
               display: grid;
               place-items: center;
               color:white;

        }

        .info  { text-align: center;
                
               
               }

        #username, #pass{
                        margin-top:10px;
                        margin-bottom:20px;
                        background: none;
                        padding: 5px ;
                        width:20vw;
                        border:none;
                        border-bottom: 1px solid white;
                        outline: none;
                      } 
        
        .button{
                 padding: 15px 20px;
                 border:0;
                 border-radius: 99px;
                 background-color: white;
                 width:15vw;
                 
               }
        .button:hover{ 
                      transform: scale(110%);
                      
        }
        h1{
            text-align: center;
            margin-bottom: 30px;
            
        }
        p , a{
            margin-top: 20px;
            text-align: center;
            color: aliceblue;
        }
        
        input[type=text]{ color:white;}
        input[type=password]{ color:white;}
          
    </style>
    <form method="POST">
      <fieldset class="login">
        <h1>Login</h1>
        <div class="info">
         <label for="username"><b>Username:</b></label><br>
         <input type="text" id="username" name="username" ><br>
         <label for="pass"><b>Password:</b></label><br>
         <input type="password" id="pass" name="pass" ><br><br>
        </div>
         <input type="submit" value="Submit" class="button">
        
      </fieldset>
       <p> No account? <a href="register.php">Create an account</a></p>
    </form>

   

</body>
</html>