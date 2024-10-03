///////// write a function to compute the greatest common divisior of two given numbers


// #include <iostream>
// using namespace std;

// int gcd (int a, int b){
//     int hcf = 1;
//     for (int i=1; i<= min(a,b); i++){
//         if(a%i==0 && b%i==0){ ////is a common factor
//         hcf =i;
//         break;
//         }
//     }
//     return hcf; 
// }

// int main(){

// int a;
// cout << "enter a first number: ";
// cin >> a;

// int b;
// cout << "enter a second number: ";
// cin >> b;

// cout << gcd(a,b);
// }



///////factorial

#include <iostream>
using namespace std;

int fact(int x){
    int fact =1;
    for(int i=2; i<=x; i++){
        fact *= x;
    }
    return fact;
}

int main(){
    int x;
    cout <<"enter a number : ";
    cin>> x;

    for (int i=1; i<=x; i++){
         cout<<fact(i)<<endl;;
    }
}



