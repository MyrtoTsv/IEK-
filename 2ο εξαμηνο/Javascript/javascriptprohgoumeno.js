// function myFunction()
// {
//     // console.log("first");
//     // setTimeout(()=> {console.log("after");}, 2000);
//     // console.log("last");


//     fetch("https://microsoftedge.github.io/Demos/json-dummy-data/64KB.json")
//     .then(response => response.json())
//     .then(data => {
//         let div = document.getElementById("diva");
//         div.textContent = data ;
//     });
// }


async function getUsers(){
    const response = await fetch("https://microsoftedge.github.io/Demos/json-dummy-data/64KB.json");
    const data = await response.json();
    let div = document.getElementById("diva");
    let filtered = data.filter(user => user.language == "Sindhi");
    filtered.forEach(user=>{
       div.innerHTML += user.name + " " +user.language + "<br>";
      

    });
   
}
