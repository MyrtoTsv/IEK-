<?php


$conn = mysqli_connect("localhost", "root", "", "classicmodels");        //dbhost, root , password, nameOfDatabase

$sql = "SELECT * FROM users"; //giati theloume ola ta stoixeia twn xrhsthwn

$result = mysqli_query($conn, $sql);


?>


<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Edit Users</title>
    <style>
     

    </style>
</head>

<body>

    <h1>Χρήστες:</h1>
    <table border = '1'>
       
        <tr>
            <th>Name</th>
            <th>Email</th>
            <th>Password</th>
            <th>Age</th>
            <th>Country</th>
        </tr>
    

        <?php
            
             while ($row = mysqli_fetch_assoc($result)){
        ?>

            <!--Ta $row antistoixoun sta kelia tou register ston pinaka users sthn vash-->
            <!--Vazoume echo gia na ketupwsei giati alliws den tha ektupwsei-->
            <tr>
                <td><?php echo $row["username"];?></td>
                <td><?php echo $row["email"];?></td>
                <td><?php echo $row["password"];?></td>
                <td><?php echo $row["age"];?></td>
                <td><?php echo $row["country"];?></td>
                <!--Theloume an uparxei epilogh na diagrafoume ton xrhsth-->
                <!--to onclick to vazoume gia confirm message an einai sigouros oti thelei na diagapsei ton user-->
                <td><a href="deleteuser.php? email=<?php echo $row["email"];?>" onclick="return confirm('Are sure?')">Delete user</a></td>
            </tr>
        <?php } ?>
            
    </table>
    
</body>
</html>

<!--H methodos POST pairnei ta stoixei apo to body , enw to GET to pairnei apo thn selida-->