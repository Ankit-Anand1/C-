// #include <iostream>
// using namespace std;

// int main (){
//     int num;
//     cout << "enter day number : ";
//     cin >> num;

//     switch (num){
//         case 1 :
//         cout << "monday";
//         break;

//         case 2 :
//         cout << "tuesday";
//           break;

//         case 3 :
//         cout << "wednesday";
//           break;

//         case 4 :
//         cout << "thursday";
//           break;

//         case 5 :
//         cout << "friday";
//           break;

//         case 6 :
//         cout << "saturday";
//           break;

//         case 7 :
//         cout << "sunday";
//           break;

//         default : 
//         cout << "invalid input!";
//           break;
        
//     }

// }




////////// program to design a calculator


#include <iostream>
using namespace std;

int main (){
    int a,b;
    char op;

    cout << "enter first number : ";
    cin >> a;

    cout << "enter second number : ";
    cin >> b;

    cout << "Choose Operator (+ - * / %) : ";
    cin >> op; 

    switch (op){
        case '+' :
        cout << "sum : " << a+b;
        break;

        case '-' :
        cout << "difference : "<< a-b;
          break;

        case '*' :
        cout << "multiplication : "<< a*b;
          break;

        case '/' :
        cout << "division : "<< a/b;
          break;

        case '%' :
        cout << "remainder : "<< a%b;
          break;

        default : 
        cout << "invalid input!";
          break;
        
    }

}