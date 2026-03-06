<!--Askhsh:Asfalish Autokinhtou-->
<!--H forma zhtaei:Dwse onoma/dwse kuvika , eisai anw twn 20, oxi nai , radio buttons-->
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Asfaleia Autokinhtou</title>
</head>
<body>
    <!--to action den to vlepoume giati einai sthn idia selida-->
    <form method="post">
        <fieldset>
            <legend>Ασφάλεια Αυτοκινήτου</legend>
            <label for="name">Όνομα:</label><br>
            <input type="text" id="name" name="name"><br>

            <label for="cc">Κυβικά:</label><br>
            <input type="number" id="cc" name="cc"><br>
            
            <!--radio buttons-->
            <!-- ta radio buttons exoun to idio name ola-->
            <label>Είσαι άνω των 20;</label><br>
            <label for ="nai">NAI</label>
            <input type="radio" id="nai" name="apanthsh" value="nai"><br>
            <label for ="oxi">OXI</label>
            <input type="radio" id="oxi" name="apanthsh" value="oxi">
            <br>
           <input type="submit" value="Calculate Cost">

        </fieldset>
    </form>

     <?php

    if($_SERVER["REQUEST_METHOD"] == "POST"){
     
       $name = htmlspecialchars($_POST['name']); 
       
       echo "O pelaths me to onoma $name <br>";
       
       #edw vazoume to name='..'
       $cc = htmlspecialchars($_POST['cc']);
       
       if($cc <=1000){
        $cost=170;
       }else if($cc>1000 && $cc<2000){
        $cost=230;
       }else {
        $cost=350;
       }

       echo "Tha plhlwrsei analoga me ta kuvika $cc , $cost euro";
    }
  ?>
</body>
</html>
