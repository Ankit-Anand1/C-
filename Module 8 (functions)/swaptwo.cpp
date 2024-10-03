// #include <iostream>
// using namespace std;

// int main(){
//     int a, b;
//     cin >> a >> b;
//     // cout << a << endl << b << endl;

//     int c;

//     c = a;
//     a = b;
//     b = c;

//     cout <<"swapped numbers are :"<< a <<endl << b;
// }



/// using function

#include <iostream>
using namespace std;

void swap (int a, int b){

    int c = a;
    a = b;
    b = c;

    return;
}
int main(){
    int a, b;
    cin >> a >> b;
    swap(a,b);
    cout <<"swapped numbers are :"<< a <<endl << b;
}