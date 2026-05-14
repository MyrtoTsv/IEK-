<?php

session_start();

if(!isset($_SESSION['username'])){
  header("Location:login.php");
  exit;
}































?>

<!DOCTYPE html>
<html lang='en'>
<head>
    <meta charset='utf-8'>
    <meta name='viewport' content='width=device-width, initial-scale=1'>
    <title>Welcome</title>
    <link rel='stylesheet' href='main.css'>
    <link rel="icon" type="image/x-icon" href="carr.png">
    <style>
        *{   margin: 0;
             padding: 0;
             box-sizing: border-box;}

        body{ display:grid;
              height: 100vh;}

        header {
         background-color: black;
         color: white;
         padding: 1rem;
         height: 90px;
         position: fixed;
         top: 0;
         right: 0;
         left: 0;
         z-index: 999;
       }

       main{
        background-color: rgb(242, 242, 242);
       }




/* Hamburger toggle (kryfo checkbox) */
#menu-toggle {
  display: none;
}

.hamburger {
  display: none;
  font-size: 1.5rem;
  cursor: pointer;
  position: absolute;
  right: 1rem;
  top: 2rem;
}

/* Navigation */
nav {
  
  padding-top: 40px;
  background-color: #ffffff;
  color: white;
  width: 220px;
  flex-shrink: 0;
  display: flex;
  flex-direction: column;
  position: fixed;
  top: 90px; 
  bottom: 0px;
  left: 0;
  overflow-y: auto;
  transition: transform 0.3s ease;
  transform: translateX(0);
  z-index: 1;
}

nav a {
  line-height: 1.5;
  color: rgb(3, 2, 2);
  text-decoration: none;
  padding: 0.75rem 1rem;
  
}

nav a:hover {
  color: rgb(0, 0, 0);
}

main {
  margin-left: 220px;
  padding: 1rem;
  flex: 1;
  transition: margin-left 0.3s ease;
}

h3{}

    </style>
</head>
<body>
  

  <header>
  
  <label for="menu-toggle" class="hamburger">Ξ</label>
  <h3>Welcome !</h3>
  <?php
     echo "Welcome ".$_SESSION['name']." in our page";
  ?>

</header>

<!-- Hidden checkbox toggle -->
<input type="checkbox" id="menu-toggle">

<nav>
  <ul class="nav">
    <li><a href="welcome.html">Home</a></li>
    <li><a href="#c1">Motorcycles</a></li>
    <li><a href="#c2">Sport cars</a></li>
    <li><a href="#c3">Vintage cars</a></li>
    <li><a href="#c4">Vans</a></li>
    
  </ul>
</nav>
    <main>

    </main>
    
</body>
</html>
