#include <iostream>
using namespace std;

int main(){
    // int x = 7;
    // int *ptr = &x;
    // cout << ptr << endl;

    // ptr = ptr + 1;
    // cout << ptr << endl;


    //////////pointer ke number of bytes ka addition hota hai (int 4 bytes) its hexadecimal so if last is ec then after 4 bytes it is f0(


    int x = 4;
    int *ptr = &x;
    cout << *ptr << endl;
    (*ptr)++;
    cout << *ptr << endl;
}