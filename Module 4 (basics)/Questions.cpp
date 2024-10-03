// calculate area of circle;

// #include <iostream>
// using namespace std;

// int main(){
//     float r, area, pi = 3.1415;

//     cout<<"Enter radius of circle : ";
//     cin >> r;

//     area = pi * (r*r);
//     cout << "area of circle : "<<area;

// }



    // calculate Simple interest

#include <iostream>
using namespace std;
int main(){
    float p, r , t ,si;

    cout<<"Enter principle: ";
    cin >> p;

    cout<<"Enter rate: ";
    cin >> r;

    cout<<"Enter time: ";
    cin >> t;

    si = (p*r*t)/100;
    cout << "Simple interest is : "<<si;
}