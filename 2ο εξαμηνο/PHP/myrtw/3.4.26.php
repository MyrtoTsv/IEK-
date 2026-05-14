<?php
    header("refresh: 6; url=https://justpaste.it/l3yls");
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
    <form method="get">
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
        if ($_SERVER["REQUEST_METHOD"] == "GET") 
        {
            #Δήλωση/Δημιουργία Μεταβλητών
            $timi = htmlspecialchars($_GET['price']);
            $name = htmlspecialchars($_GET['name']);
            $points = intdiv($timi,10)*4;

            #Υπολογισμός Πόντων
            if($points <= 50)
            {
                $bonus = 0.07*$points; 
            }
            else if($points > 50 && $points <= 300)
            {
                $bonus = (50*0.07) + (250*0.1);
            }
            else if($points > 300)
            {
                $bonus = (50*0.07) + (250*0.13);
            }
            # Εκτύπωση Αποτελεσμάτων
            echo "Οι πόντοι του/της πελάτη/πελάτισσας $name είναι $points και θα πάρει δωροεπιταγή αξίας $bonus ευρώ."; 
        }   
    ?>
</body>
</html>