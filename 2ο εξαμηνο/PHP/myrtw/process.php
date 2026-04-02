<!DOCTYPE html>
<html>
<head>
</head>
<body>
    <?php
        if($_SERVER["REQUEST_METHOD"] == "POST")
        {
            $name = htmlspecialchar($_POST['name']);    
            echo "Το όνομα σας είναι $name. ";
            $email = $_POST['email'];
            echo "Το email σας είναι $email. ";
        } 
    ?>
</body>
</html>