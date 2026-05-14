
<?php
session_start();

if (!isset($_SESSION['adult']) || $_SESSION['adult'] !== true) {
header("Location: age_check.php");
exit;
}


?>


<!DOCTYPE html>
<html lang="el">
<head>
<meta charset="UTF-8">
<title>Welcome</title>
</head>
<body>

<?php 
  echo "Καλώς ήρθες ".$_SESSION['name']." στην σελίδα";
  ?>

  <a href="log_out.php"> disconnect </a>

</body>
</html>