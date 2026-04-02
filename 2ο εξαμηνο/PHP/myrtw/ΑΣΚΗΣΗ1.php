<!DOCTYPE html>
<html>
<head>
    <meta charset='utf-8'>
    <meta http-equiv='X-UA-Compatible' content='IE=edge'>
    <title>Άσκηση 1</title>
    <meta name='viewport' content='width=device-width, initial-scale=1'>
    <link rel='stylesheet' type='text/css' media='screen' href='main.css'>
    <script src='main.js'></script>
</head>
<style>
        label{
            display: inline-block;
           
            clear: left;
            width: 100px;
            text-align: left;
        }

        input{
            display: inline-block;
           
        }

        fieldset{
            width: 310px;
            height: 140px;
        }
    </style>
</head>
<body>
    <form method="post">
        <fieldset>
            <label for="name">Δώσε Κυβικά</label>
            <input type="text" id="cc" name="cc" style="width: 190px;"><br><br>
            <label for="text">Είσαι άνω των 20 ετών;</label><br>
            <label for="yes">ΝΑΙ</label>
            <input type="radio" id="yes" name="age" value="yes">
            <label for="no">ΟΧΙ</label>
            <input type="radio" id="no" name="age" value="no"><br><br>
            <input type="submit" id="button" name="koumpi" value="Υποβολή">
        </fieldset>
    </form>  

    <?php
        if($_SERVER["REQUEST_METHOD"] == "POST")
        {
            $cc = $_POST['cc'];    
            $age = $_POST['age'];
            $price;
            $vat_price;

            if($cc <= 1000)
                {
                   $price = 170; 
                }
            else if($cc >= 1000 &&  $cc <=2000)
                {
                    $price = 230; 
                }
            else 
                {
                    $price = 350;
                }

            if($age == "no")
                {
                    $price=$price+50;   
                }

            $vat_price = $price + ($price*0.23);
            echo "Το τελικό σας ποσό είναι $vat_price € (με ΦΠΑ).";  
        } 
    ?>
</body>
</html>