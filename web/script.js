Type Data
    String -> "Azis Zuhri asdas"
    Integer -> 1,2,3,-10
    Boolean -> False/True
    Array  -> ['azis', 1, true};
    Object ->  {
        "Name" : "Azis Zuhri"
    }
Variable
    var
    let
    const

//     // var my_name = "Azis Zuhri Pratomo"  // `` / '';
//     // var a = 10;
//     // var b = 20;
//     // var c = a + b;
//     // var d = '1';
//     // var e = '2';
//     // var f = d + e;
//     // var prodi = " Teknik Informatika 21";
//     // var isFemale = true;
//     // var isMale = false;
//     // console.log(isFemale);
//     // console.log(isMale);

//     var mahasiswa = [
//         'Azis', "Khoirul" ,"Hafid",
//         "Hanif", "Cantika", 10,
//         true,
//         [
//             19, 18, 29 ,10
//         ]
//     ];

//     var data_azis = {
//         "name" : "Azis Zuhri Pratomo",
//         "age" : 19,
//         "colege" : "PENS",
//         "prodi" : "Teknik Informatika",

//      }

//     console.log(mahasiswa);
//     console.log(data_azis);
//     console.log(`Namaku ${data_azis.name} , umurku ${data_azis.age}`);

//     // operator kalkulasi :
//     // + , - , / , *\
//     // Operator Pembanding :
//     // == , ===, != , !== , < , <= , > , >=
//     // Operator logika :
//     // && dan ||
//     var a = 10;
//     var b = 10;
//     var c = b == a;
//     var d = 11 === 11;

//     var angka = 10;
//     var number = 20;
//     console.log(d);

//     // && -> true + true = true / true + false = false
//     // || -> true + false = true / false + false = false
//     console.log(angka < number || number < a);
//     // 10 < 20 = true;
//     // 20 < 10 = false;
//     // true || false -> true



// // Conditional
//     //  if / switch case

//     // if else biasa
//     var isCantikaFemale = true;
//     if(isCantikaFemale) {
//         var hobby = "Masak"
//     } else {
//         var hobby = "Main Bola"
//     }

//     // swith case
//     var bahasa = "Alien";
//     switch (bahasa) {
//         case "Inggris":
//             var greeting = "Good Morning";
//             break;
//         case "Perancis":
//             var greeting = "Bonjour";
//             break;
//         case "Jepang":
//             var greeting = "Konichiwa";
//             break;
//         case "Indonesia":
//             var greeting = "Selamat Pagi";
//             break;
//         default:
//             var greeting = "Selamat Pagi";
//             break;
//     }

//     // else if
//     var wanita = "Masak";
//     if(wanita == "Main bola") {
//         var answer = "Salah";
//     } else if(wanita == "Masak") {
//         var answer = "Benar"
//     } else if(wanita == "Main Basket") {
//         var answer = "Bisa jadi"
//     } else {
//         var answer = "bisa jadi";
//     }

//     var angka = 25;
//     if(angka > 20) {
//         console.log(`Angka ${angka} lebih dari 20`)
//     } else {
//         console.log(`Angka ${angka} kurang dari 20`);
//     }
// // looping
//     // for loop, foreach, for of , while, do while,

//     //while
//     var myArr = [1,2,3,4,5,5];
//     var empty = [];
//     var limit = 100;
//     var loop = 1;
//     while(loop <= limit ) {
//         empty.push(loop);
//         loop++
//     }
//     console.log(empty);
// // function

let a = 1;
try {
    console.log(a);
    console.log(b);

} catch (error) {
    alert(error.name);
    alert(error.message);
}
