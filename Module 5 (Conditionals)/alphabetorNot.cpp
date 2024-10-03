#include <iostream>
using namespace std;

int main (){
    char ch;

    cout <<"Enter an alphabet : ";
    cin >> ch;

   int ascii = (int)ch;
//   if (ascii >= 97 && ascii <= 122){
//     cout << "the character is lowercase alphabet";
//   }
//    if (ascii >= 67 && ascii <= 90){
//     cout << "the character is uppercase alphabet";
//   }


if ((ascii >= 97 && ascii <= 122) || (ascii >= 67 && ascii <= 90)){
    cout << "the character is an alphabet";
  }
  else{
    cout << "the character is not an alphabet";
  }
}


//  a to z = 97 to 122
// A to Z = 65 to 90