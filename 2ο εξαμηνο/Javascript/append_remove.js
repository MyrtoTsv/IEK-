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

    <button onclick="addThing()">Προσθήκη</button> <button onclick="delThing()">Διαγραφή</button> <!--onclick ειναι εvent και σημαινει οτι οταν πατησω το κουμπι , θα καλεστει η συναρτησει addThing-->
    <!--Οταν θα παταμε το κουμπι , θελουμε να μπαινει ενα νεο στοιχειο-->
    <input id ="box" type ="text">

    <!--Θα φτιαξουμε πρωτα την συναρτηση που θα περιεχει το κουμπι -->
    <!--Μεσα στο script γραφουμε στον κωδικα jvs -->
    <script>

          function addThing(){
            li = document.createElement("li"); //αποθηκευουμε το στοιχειο που δημιουργησαμε στην li
            //Τωρα θελουμε να παρουμε τι εχει το κουτι text.Για να το κανουμε αυτο πρεπει να το παρουμε πρωτα 
            new_input = document.querySelector("#box"); //το αποθηκευσαμε σε καινουρια μεταβλητη new_input
            li.textContent = new_input.value; //το textContent αυτου του στοιχειου θα ειναι η τιμη του text
            //Δεν αρκει που εχουμε κανει createElement ,πρεπει να το κανουμε append για να εμφανιστει
            ul = document.getElementById("mylist");
            ul.appendChild(li);//
        }

        function delThing(){

            const del = document.querySelector("li"); //σβήνει το πρώτο στοιχείο
            del.remove();
           
        }
    </script>
</body>
</html>
