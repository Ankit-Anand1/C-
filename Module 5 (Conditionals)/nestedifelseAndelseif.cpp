// #include <iostream>
// using namespace std;

// int main (){
//     int n;

//     cout <<"Enter a number : ";
//     cin >> n;

//     // if ((n%5==0 || n%3==0) && n%15 !=0)
//     // {
//     //     cout << "Divisible by 3 and 5 but not 15";
//     // }
//     // else{
        
//     //     cout << "not matching condition";
//     // }
    

//     if(n%5==0 || n%3==0){
//         if(n%15 !=0){
//              cout << "Divisible by 3 and 5 but not 15";
//         }
//         else{
//             cout << "not matching condition";
//         }
//     }
// }



////else-if

// #include <iostream>
// using namespace std;

// int main (){
//     int n;

//     cout <<"Enter marks : ";
//     cin >> n;

// //     if(n >=90){
// //              cout << "Excellent";
// //     }
// //     else {
// //         if (n>=81){
// //             cout << "very good";
// //         }
// //         else{
// //             if(n>=71){
// //                 cout << "good";
// //             }
// //             else{
// //                 if(n >=61){
// //                     cout << "can do better";
// //                 }
// //                 else{
// //                     if(n>=51){
// //                         cout << "average";
// //                     }
// //                     else{
// //                         if(n>=41){
// //                             cout << "below average";
// //                         }
// //                         else{
// //                             if(n<=41){
// //                                 cout << "fail";
// //                             }
// //                         }
// //                     }
// //                 }
// //             }
// //         }
// //     }


// if(n>=91){
//     cout << "Excellent";
// }
// else if(n>=81){
//     cout << "very good";
// }
// else if (n >=71){
//     cout << "good";
// }
// else if (n >= 61) {
//     cout << "can do better";
// }
// else if (n >= 51){
//     cout << "average";
// }
// else if (n >= 41){
//     cout << "below average";
//  }
//  else if ( n <= 41){
//     cout << "fail";
//  }

// }



// check vowel or consonants

// #include <iostream>
// using namespace std;

// int main (){
//     char ch;

//     cout <<"Enter character : ";
//     cin >> ch;
//     int ascii = (int)ch;
//     if ((ascii >= 97 && ascii <= 122) || (ascii >= 67 && ascii <= 90)){
// if(ch == 'a' || ch == 'e' || ch == 'i'|| ch == 'o' || ch == 'u'){
//     cout << "The character is a vowel";
// }
// else{
//    cout << "The character is a consonant";
// }
//     }
// }



/// triangle sides

#include <iostream>
using namespace std;

int main (){
    int a,b,c;
    cout << "Enter 1st number : ";
    cin >> a;

 cout << "Enter 2nd number : ";
    cin >> b;

     cout << "Enter 3rd number : ";
    cin >> c;

if ((a + b > c) && (b + c > a) && (a + c > b))
{
    cout << " can be the Sides of triangle";
}
else {
cout << " Not Sides of triangle";
}
}
