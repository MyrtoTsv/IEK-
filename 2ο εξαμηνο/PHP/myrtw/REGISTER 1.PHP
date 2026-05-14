<!DOCTYPE html>
<html>
<head>
    <meta charset='utf-8'>
    <meta http-equiv='X-UA-Compatible' content='IE=edge'>
    <title>Register</title>
    <meta name='viewport' content='width=device-width, initial-scale=1'>
    <link rel='stylesheet' type='text/css' media='screen' href='main.css'>
    <link rel="icon" type="image/x-icon" href="carr.png">
    <script src='main.js'></script>
    <style>
        
        *{   margin: 0;
             padding: 0;
             box-sizing: border-box;}

        body{
             display: grid;
             grid-template-columns: auto;
             place-items: center;
             height: 100vh;
             background-image:url(carss.webp);
             background-repeat: no-repeat;
             font-family: 'Gill Sans', 'Gill Sans MT', Calibri, 'Trebuchet MS', sans-serif;
             background-size: 100%;
        }
        
        .login{
               height: auto;
               width: 20vw;
               padding: 60px 40px 60px 40px;
               border-radius: 20px;
               backdrop-filter: blur(15px);
               border: 1px solid white;
               background-color:transparent;
               display: grid;
               place-items: center;
               color:white;
              

        }

        .info  { text-align: center;
                
               
               }

        #username, #pass, #name, #lname, #number
                      {
                        margin-top:10px;
                        margin-bottom:20px;
                        background: none;
                        padding: 5px ;
                        width:20vw;
                        border:none;
                        border-bottom: 1px solid white;
                        outline: none;
                      } 
        
        .button{
                 padding: 15px 20px;
                 border:0;
                 border-radius: 99px;
                 background-color: white;
                 width:15vw;
                 
               }
        .button:hover{ 
                      transform: scale(110%);
                      
        }
        h1{
            text-align: center;
            margin-bottom: 30px;
            
        }
       
        input[type=text]{ color:white;}
        input[type=password]{ color:white;}
        input[type=number]{ color:white;}
          
    </style>
    <form>
      <fieldset class="login">
        <h1>Create your accound</h1>
        <div class="info">
        <label for="name">Name</label><br>
        <input type="text" id="name" name="name"><br>
        <label for="lname">Last name</label><br>
        <input type="text" id="lname" name="lname"><br>
        <label for="number">Phone Number</label><br>
        <input type="number" id="number" name="number"><br>
        <label for="username">Username</label><br>
        <input type="text" id="username" name="username"><br>
        <label for="password">Password</label><br>
        <input type="password" id="pass" name="pass"><br><br>
         </div>
        <input type="submit" value="Submit" class="button">
      </fieldset>
      
    </form>

   

</body>
</html>
