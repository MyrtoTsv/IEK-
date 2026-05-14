<?php
session_start();

if (!isset($_SESSION['adult']) || $_SESSION['adult'] !== false) {
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

echo "Καλώς έφυγες από την σελίδα";

?>

</body>
</html>