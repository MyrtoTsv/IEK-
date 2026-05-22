<?php
   session_start();

   if(!isset($_SESSION['username'])){
        header("Location:login.php");
        exit;
   }

   $conn = mysqli_connect("localhost", "root", "", "classicmodels"); 

   if(!$conn){
        die("Σφάλμα σύνδεσης: ".mysqli_connect_error());
   }

   $sql = "SELECT * FROM products";
   $result = mysqli_query($conn , $sql);
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Welcome</title>

    <style>
            *{
                margin:0;
                padding:0;   
            }

            body{
                 background-color:#F0F8FF;
            }

            header{
                display:flex;
                align-items: center;
                justify-content: space-between;
                padding:30px 30px;
                background-color:cornflowerblue;
            }

            .navbar ul{
                display:flex;           
                justify-content:center;
                list-style:none;
            }

            .navbar{
                flex:1;
            }

            .navbar a,li{
                color:rgb(255, 255, 255);
                text-decoration:none;
                display:inline-block;
                padding:0 10px;
                font-size:25px;
            }

            .navbar a:hover{
                font-display: block;
                color:gray;
            }

            h1{
                padding-top:90px;
                text-align:center;
             }

   </style>
</head>
<header>
     <nav class="navbar">
                 <ul>
                        <li><a href="welcome.php">Home</a></li>
                        <li><a href="">Classic Cars</a></li>
                        <li><a href="">Motorcycles</a></li>
                        <li><a href="">Planes</a></li>
                        <li><a href="">Ships</a></li>
                        <li><a href="">Trains</a></li>
                        <li><a href="">Trucks and Buses</a></li>
                        <li><a href="">Vintage Cars</a></li>
                       
                </ul>
                
        </nav>
</header>
<main>

    <div>

    <h1> Products: </h1><br>
    <?php

    while ($row = mysqli_fetch_assoc($result)){


          echo "<p style='font-size:20px;
            border:2px solid black;
            border-radius:15px;
            margin-bottom:20px;
            padding:10px;'>";

            echo "<b>Όνομα:</b> ".$row['productName']."<br>
            <b>Περιγραφή:</b> <i>".$row['productDescription']."</i><br>
            <b>Τιμή:</b> ".$row['buyPrice']."<br><br>";

            echo "</p>";
    }
    ?>
    </div>
    


</main>

</html>
    
