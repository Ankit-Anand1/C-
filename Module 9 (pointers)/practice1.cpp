// #include <iostream>
// using namespace std;

// int main(){

//     // int x = 5;
//     // int *p = &x;

//     // int y = 10;
//     // int *q = &y;

//     // int sum = *p + *q;

//     // cout << sum ;

// ///////taking input from user

//     int x,y;
//     int *p = &x;
//     int *q = &y;

//     cout << "Enter first and Second number : ";
//     cin >> x >> y;

//     int sum = *p + *q;
//     cout << "Sum of two number:" << sum;
// }






/////////function to find first and last digit of a number without returning anything



#include <iostream>
using namespace std;

void first(int n, int *ptr1, int *ptr2){
    *ptr2= n %10; //last digit;

    while(n >9){
        n = n/10;
    }
    *ptr1 = n; //first digit
    return;
}


int main(){
                int n;
                cin>> n;

                if (cin.fail()) {
                    cout << "Invalid input! Exiting program." << endl;
                    return 1;  // Exit with error code
                }
            int firstdigit, lastdigit;
            int *ptr1 = &firstdigit;
            int *ptr2 = &lastdigit;

            first(n,ptr1,ptr2);

            cout<< "First digit of number is "<< firstdigit << endl;

            cout<<"last digit of a number is "<< lastdigit;

}