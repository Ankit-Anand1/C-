#include <iostream>
#include <stdlib.h>
using namespace std;

int main (){
    // char ch = 'p';
    // char x = '1';
    // cout << ch << " "<<x;
    // return 0;


// ASCII Value

    // char ch = 'A';
    // cout << (int)ch;  //typecasting


    // float x = 7.1;
    // int y;
    // y = (int)x;
    // cout <<y;5


    // char ch;
    // cout<<"Enter the character to know ASCII Value : ";
    // cin >> ch;
    // int x = (int)ch;
    // cout << x-64;


// int x;
// cin >> x;
// float y =  (float)x;
// cout << y/2;


float x;
cin >> x;

int y = (int)x;
if (y<0) y = y-1;
int z = (float)y;
x = x - z;
cout << x;
}