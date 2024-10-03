///  write  a program to count digits of a number

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter a number : "<<endl;
//     cin >> n;
//     int count = 0;
//     int a = n;

// while ( n > 0)
//   {
//    n /= 10;
//     count++;
//   }
//    if (a==0)cout << 1;
//    else cout << count << endl;

// }




//// print sum of digits of a given number

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter a number : " ;
//     cin >> n;
//     int lastdigit = 0;
//     int sum = 0;
    

// while ( n > 0)
//   {
//   lastdigit = n%10;
//   sum += lastdigit;
//   n /= 10;
//   }
//  cout << "sum : " << sum << endl;

// }


/// print reverse of a given number


// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter a number : " ;
//     cin >> n;
//    int lastdigit = 0;
//    int reverse = 0;

// while ( n > 0)
//   {
//     lastdigit = n%10;
//     reverse *= 10;
//     reverse += lastdigit;
//     n /= 10;
   
//   }
//  cout <<  reverse << endl;

// }



///// print sum of the series : 1-2+3-4+5...

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter a number : " ;
//     cin >> n;
//  int sum = 0;
// for(  int i = 1; i<= n; i++)
//   {
//   if ( i % 2 != 0)   sum += i;
//   else   sum -= i;
   
//   }
//  cout <<  sum << endl;

// }



///// factorial of a number

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter a number you want factorial of : " ;
//     cin >> n;
//  int factorial = 1;
// for(  int i = 1; i<= n; i++)
//   {
//     factorial *= i;
//   }
//  cout <<  factorial << endl;

// }


//////  print nth FIBONACCI Number

// #include <iostream>
// using namespace std;

// int main(){
//     int a = 1, b = 1, sum = 0;
//     int n;
//     cout << "Enter number : " ;
//     cin >> n;
 
// for(  int i = 1; i<= n-2; i++)
//   {
//     sum = a + b;
//     a = b;
//     b = sum;
//   }
//  cout << b  << endl;

// }



// calculate a raised to the power b 



#include <iostream>
using namespace std;

int main(){
   
    int a , b;
    cout << "Enter base : " ;
    cin >> a;

     cout << "Enter exponent : " ;
    cin >> b;
    bool flag = true ; // true means positive
    flag = false ; // false means negative
    b = -b;
 float power = 1;
 
for(  int i = 1; i<=b ; i++)
  {
   power = power * a;
  }
  if (flag==false) {
    power = 1/power;
    b = -b;
  }
 cout << power  << endl;

}