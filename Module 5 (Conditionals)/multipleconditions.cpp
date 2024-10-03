// logical and , logical or

// #include <iostream>
// using namespace std;

// int main (){
//     int n;

//     cout <<"Enter a integer : ";
//     cin >> n;

//     if(n >= 100 && n <= 999){
//         cout << "Three digit number";
//     }
//     else {
//           cout << "Not a three digit number";
//     }
// }


// divisible by 5 and 3

// #include <iostream>
// using namespace std;

// int main (){
//     int n;

//     cout <<"Enter a integer : ";
//     cin >> n;

//     if(n % 5 ==0 && n % 3 == 0){
//         cout << "Divisible by 5 and 3";
//     }
//     else {
//           cout << "Number is not Divisible by 5 and 3";
//     }
// }



// #include <iostream>
// using namespace std;

// int main (){
//     int n;

//     cout <<"Enter a integer : ";
//     cin >> n;

//     if(n % 5 ==0 || n % 3 == 0){
//         cout << "Divisible by 5 or 3";
//     }
//     else {
//           cout << "Number is not Divisible by 5 or 3";
//     }
// }


//// 3 positive integers and print greatest of them

#include <iostream>
using namespace std;

int main (){
    int num1,num2,num3;

    cout <<"Enter first number: ";
    cin >> num1;
    cout <<"Enter second number: ";
    cin >> num2;
    cout <<"Enter third number: ";
    cin >> num3;

    if(num1 > num2 && num1 > num3){
        cout << num1 << " is largest";
    }
    
     if(num2 > num1 && num2 > num3){
        cout << num2 << " is largest";
    }

     if(num3 > num2 && num3 > num1){
        cout << num3 << " is largest";
    }
}

