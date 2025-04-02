// /////////pass by value

// #include<iostream>
// using namespace std;

// void swap(int a, int b){
//     int temp = a;
//     a = b;
//     b = temp;

//     return;
// }

// int main(){

//     int a,b;
//     cin>> a >> b;
//     cout<< "Before swap: a = "<< a << " b = "<< b << endl;
//     swap(a,b);
//     cout<< "After swap: a = "<< a << " b = "<< b << endl;
// }



/////////pass by reference

// #include<iostream>
// using namespace std;

// void swap(int *a, int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;

//     return;
// }

// int main(){

//     int a,b;
//     cin>> a >> b;
//     cout<< "Before swap: a = "<< a << " b = "<< b << endl;
//     swap(&a,&b);
//     cout<< "After swap: a = "<< a << " b = "<< b << endl;
// }