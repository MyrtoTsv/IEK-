

<?php
session_start();

 

if ($_SERVER["REQUEST_METHOD"] == "POST") {
$age = $_POST['age'] ;

$_SESSION['name']=$_POST['name'];

if ($age >= 18) {
$_SESSION['adult'] = true;
header("Location: welcome.php");
exit;
} else {
$_SESSION['adult'] = false;
header("Location: log_out.php");
exit;
}
}

 

?>

<!DOCTYPE html>
<html lang="el">
<head>
<meta charset="UTF-8">
<title>Έλεγχος Ηλικίας</title>
</head>
<body>

<h2>Έλεγχος ηλικίας</h2>

<form method="post">

<input type="text" name="name" placeholder="Όνομα" required>
<input type="number" name="age" placeholder="Ηλικία" required>
<button type="submit">Είσοδος</button>
</form>

</body>
</html>