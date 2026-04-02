<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <ul id = "mylist"> <!-- Δινουμε ενα id στην λιστα μας για να το χρησιμποιησουμε με την getElementById-->
        <li>Μήλο</li>
        <li>Πορτοκάλι</li>
        <li>Βερύκοκο</li>
    </ul>
    
    <button onclick="addThing()">Προσθήκη</button> <button>Διαγραφή</button> <!--onclick ειναι εvent και σημαινει οτι οταν πατησω το κουμπι , θα καλεστει η συναρτησει addThing-->
    <!--Οταν θα παταμε το κουμπι , θελουμε να μπαινει ενα νεο στοιχειο-->
    <!--Θα φτιαξουμε πρωτα την συναρτηση που θα περιεχει το κουμπι -->

    <!--Μεσα στο script γραφουμε στον κωδικα jvs -->
    <script>
        function addThing(){
            li = document.createElement("li"); //αποθηκευουμε το στοιχειο που δημιουργησαμε στην li
            li.textContent = "Νέο Στοιχείο"; //αλλαζω το κειμενο μιας ετικετας με την textContent
            //Δεν αρκει που εχουμε κανει createElement ,πρεπει να το κανουμε append για να εμφανιστει
            ul = document.getElementById("mylist");
            ul.appendChild(li);//
        }
    </script>
</body>
</html>
