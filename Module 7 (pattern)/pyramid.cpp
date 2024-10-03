// ////star pyramid

// #include <iostream>
// using namespace std;
// int main (){
 
//  int n;
//  cout << "Enter number: ";
//  cin >> n;
//  for (int i = 1; i<=n; i++){
//      for (int k = 1; k<=n-i; k++)
//    { 
//       cout <<" "<< " ";
//    }
  
//    for (int j = 1; j<=2*i-1; j++)
  
//   { 
//       cout <<"*"<< " ";
    
//   }
//    cout << endl;
//  }
// }



////number pyramid palindrome

#include <iostream>
using namespace std;
int main (){
 
 int n;
 cout << "Enter number: ";
 cin >> n;
 for (int i = 1; i<=n; i++){
     for (int k = 1; k<=n-i; k++)
   { 
      cout <<" "<< " ";
   }
  
   for (int j = 1; j<=i; j++)
  
  { 
      cout <<j<< " ";
    
  }
    for (int q =i-1; q>=1; q--)
  
  { 
      cout <<q<< " ";
    
  }
   cout << endl;
 }
}