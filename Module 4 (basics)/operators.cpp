#include <iostream>
using namespace std;

int main()
{
//arithmetic operators

// int x = 5;
// int y = 2;

// cout<< x + y << endl;
// cout<< x - y << endl;
// cout<< x * y << endl;
// cout<< x / y << endl;



// increment - decrement operators

// int x = 5;
// cout<< x << endl; //5
// // x++; //post increment
// // cout<< x << endl; //6

// // x--;
// // cout<< x << endl; // 5

// // ++x;  //pre-increment
// // cout<< x << endl; //6

// // --x;
// // cout<< x << endl; //5

// cout<< --x << endl; //4
// cout<< x-- << endl; //4
// cout<< x << endl; //3



// float data type 

// float x = 5;
// float y = 2;

// cout<< x + y << endl;
// cout<< x - y << endl;
// cout<< x * y << endl;
// cout<< x / y << endl;



// find remainder 

// int a = 14; //dividend
// int b = 3; // divisor

// // int q = a/b; // quotient
// // int r; // remainder
// //a = r + (b * q);
// // r = a - (b * q);

// int r = a % b;
// cout << r ;

// modulus operator

// cout << 99 % 4; // if a < b then a % b = a 
// a % b = a % (-b)
// (-a) % b = - (a % b)
// (-a) % (-b) = -(a%b)


// calculate percentage of 5 subjects

// float x1 = 90;
// float x2 = 91;
// float x3 = 92;
// float x4 = 93;
// float x5 = 94;

// float percent = (x1 + x2 + x3 + x4 + x5)/5;
// cout << percent;

// boolean data type

// bool flag = false;
// cout<< flag;

// cout <<( 5 > 3);
// cout <<( 5 < 3);


//hierarchy of operators

// int i = 2*3/4+4/4+8-2+5/8;
// cout << i;



int num1;
int p = 5, q = 10;
p += q -= p;
cout <<p<<" "<<q<<endl;
return 0;


int i =2, j= 3, k,l;
float a,b;
k = i/j*j;  // 2/3*3 = 0 
l = j/i*i;  //3/2*2 = 2 
a = i/j*j;  // 2/3*3 = 0 
b = j/i*i;   //3/2*2 = 2 
cout <<k<< " "<<l<< " "<<a<<" "<<b;


}
