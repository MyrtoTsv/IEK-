<?php
if ($_SERVER["REQUEST_METHOD"] == "POST")  
        {
setcookie('name', $_POST['name'], time()+5);  # το μεσαίο είναι το όνομα που βάζει ο χρήστης. Το time()+5 είναι οτι θα θυμάται το όνομα για 5 δευτερα
header('Location:php.php');        # Ανακατεύθυνση...αν θες στο location βάζεις ενα οποιοδήποτε URL
        }
?>
<!DOCTYPE html>
<html>
<head>
    <meta charset='utf-8'>
    <meta http-equiv='X-UA-Compatible' content='IE=edge'>
    <title>Page Title</title>
    <meta name='viewport' content='width=device-width, initial-scale=1'>
    <link rel='stylesheet' type='text/css' media='screen' href='main.css'>
    <script src='main.js'></script>
</head>
<body>
    <form method="POST">
        <fieldset>
            <legend>Φόρμα για Κουπόνια</legend>
            <label for = "name"> </label>
            <input type = "text" id = "name" name = "name" placeholder = "Ονοματεπώνυμο">
            <label for = "price"> </label><br>
            <input type = "text" id = "price" name = "price" placeholder = "Το ποσό σας"><br>
            <button type="submit">Υποβολή</button>
        </fieldset>
    </form>
    
    <?php
      
             if(isset($_COOKIE['name'])){
            echo "to cookie einai". $_COOKIE['name'];
        }  
    ?>
</body>
</html>