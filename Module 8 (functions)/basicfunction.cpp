// #include <iostream>
// using namespace std;

// int main(){
//     int a,b,c;
//    cin >> a >> b >> c;
//     for (int i = 1; i<=a; i++){
//         for (int j = 1; j<=i; j++){
//             cout<<"*";
//         }
//          cout << endl;
//     }

//     for (int i = 1; i<=b; i++){
//         for (int j = 1; j<=i; j++){
//                 cout<<"*";
//         }
//          cout << endl;
//     }

//     for (int i = 1; i<=c; i++){
//         for (int j = 1; j<=i; j++){
//                 cout<<"*";
//         }
//         cout << endl;
//     }
// }



// #include <iostream>
// using namespace std;

// int main(){
//   int a;

//     for (int k = 1; k<=3; k++){
//         cin>>a;
//          for (int i = 1; i<=a; i++){
//         for (int j = 1; j<=i; j++){
//             cout<<"*";
//         }
//          cout << endl;
//          }
//     }
// }


//  #include <iostream>
// using namespace std;

//     void star (int x){
//         for(int i=1; i<=x; i++){
//             for(int j=1; j<=i; j++){
//                 cout<<"*";
//             }
//             cout <<endl;
//         }
//     }


// void greeting (){
//     cout<<"Good Morning"<<endl;;
// }


// int main(){

//    greeting(); //function calling

//     star(3);
//       star(6);
//         star(9);
// } 



//////returntype


//  #include <iostream>
// using namespace std;

//     int sum (int x, int y){
//         return x+y;
//     }


// int main(){
//     // int x=2;
//     // int y= 3;
//     cout << sum (10,30);
   
// } 




#include <iostream>
#include <cmath>
using namespace std;

    int sum (int x, int y){
        return x+y;
    }
    


int main(){
     int x,y;
     cin >> x >> y;
    //cout << sum (10,30);

    cout << min (x,y);
     cout << max (x,y);
     cout << sqrt (5);
   
} 