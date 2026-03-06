<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
 <!--Tha pernoume onoma kai email apo thn selida ths html-->
 <!--ksekinaei kwdikas ths php-->
  <?php
    #tha mpei se ena if einai standard
    #An deis oti exei sumplhrwthei h forma , na exei erthei kati me post
    if($_SERVER["REQUEST_METHOD"] == "POST"){
       #twra tha paroume to onoma kai tha to emfanisoume
       $name = $_POST['name']; #giati $_POST giati sthn html xrhsimopooiei thn methodo POST
       #'name' giati sthn html leei << name="name" >>
       #twra tha typwsoume thn metavlhth
       echo "To onoma sas einai $name <br>";
      
       #gia to email
       $email = $_POST['email'];
       echo "To email sas einai $email";
    }
  ?>

</body>
</html>