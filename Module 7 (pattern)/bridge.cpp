//// star bridge

// #include <iostream>
// using namespace std;

// int main(){

//     int n,m;
//     cout<<"enter number : ";
//     cin>>n;

//     for(int i=1; i<=2*n-1;i++){
//         cout<<"*";
//     }
//     cout<<endl;
//     m = n-1;
//     int nsp=1;
//     for(int i=1; i<=m; i++){
//        for(int j=1; j<= m+1-i;j++){
//         cout<<"*";
//        }
   
//    for(int k=1; k<=nsp; k++){
//     cout<<" ";
//    }
//    nsp +=2;
//     for(int j=1; j<= m+1-i;j++){
//         cout<<"*";
//        }
//    cout<<endl;
//       }
// }



////////number bridge


#include <iostream>
using namespace std;

int main(){

    int n,m;
    cout<<"enter number : ";
    cin>>n;

    for(int i=1; i<=2*n-1;i++){
        cout<<i;
    }
    cout<<endl;
    m = n-1;
    int nsp=1;
    for(int i=1; i<=m; i++){
        int a=1;
       for(int j=1; j<= m+1-i;j++){
        cout<<a;
        a++;
       }
   
   for(int k=1; k<=nsp; k++){
    cout<<" ";
    a++;
   }
   nsp +=2;
    for(int j=1; j<= m+1-i;j++){
        cout<<a;
        a++;
       }
   cout<<endl;
      }
}