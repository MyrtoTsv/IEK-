<?php

    $conn = mysqli_connect("localhost", "root", "", "classicmodels");        //dbhost, root , password, nameOfDatabase

    $email = $_GET['email']; //prepei na paroume auto to "monadiko" pou exoume gia na diagraftei o sugkekrimenos xrhsths

    //diegrapse mou apoton pinaka users opoion exei auton to email
    $sql = "DELETE FROM users WHERE email='$email'"; 

    //den xreiazetai na valoume $result 
    mysqli_query($conn, $sql);

    //anakateuhthunsh prisw sthn edituser.php afou kanei delete
    //ousiastika auth thn selida den tah thn vlepoumw etsi ,apla tha vlepoume ton xrhsth
    //na diagrafetai
    header("Location:edituser.php");

    exit();
?>

