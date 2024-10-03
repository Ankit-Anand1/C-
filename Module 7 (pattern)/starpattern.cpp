// ///print star triangle

//  #include <iostream>
// using namespace std;
// int main (){
 
//  int n;
//  cout << "Enter rows: ";
//  cin >> n;

//  for (int i = 1; i<=n; i++){
//    for (int j = 1; j<=i; j++)
  
//   { 
//       cout << "*";
//   }
//     cout << endl;
//  }
// }



// ///print inverse star triangle

//  #include <iostream>
// using namespace std;
// int main (){
 
//  int n;
//  cout << "Enter rows: ";
//  cin >> n;

//  for (int i = 1; i<=n; i++){
//    for (int j = 1; j<=n+1-i; j++)
  
//   { 
//       cout << "*";
//   }
//     cout << endl;
//  }
// }



///print number triangle

//  #include <iostream>
// using namespace std;
// int main (){
 
//  int n;
//  cout << "Enter rows: ";
//  cin >> n;

//  for (int i = 1; i<=n; i++){
//    for (int j = 1; j<=i; j++)
  
//   { 
//       cout << j;
//   }
//     cout << endl;
//  }
// }


///odd number triangle

//  #include <iostream>
// using namespace std;
// int main (){
 
//  int n;
//  cout << "Enter rows: ";
//  cin >> n;

//  for (int i = 1; i<=n; i++){
//    for (int j = 1; j<=2*i-1; j+=2)
  
//   { 
//       cout << j;
//   }
//     cout << endl;
//  }
//}


 ///print plus star pattern 

//  #include <iostream>
// using namespace std;
// int main (){
 
//  int n;
//  cout << "Enter rows: ";
//  cin >> n;

// int mid = n/2 +1;
//  for (int i = 1; i<=n; i++){
//    for (int j = 1; j<=n; j++)
  
//   { 
//       if (i==mid || j==mid) cout <<"*";
//       else cout<<" ";
//   }
//     cout << endl;
//  }
// }



//// print star cross pattern


 #include <iostream>
using namespace std;
int main (){
 
 int n;
 cout << "Enter rows: ";
 cin >> n;

 for (int i = 1; i<=n; i++){
   for (int j = 1; j<=n; j++)
  
  { 
      if (i==j || i+j==n+1) cout <<"*";
      else cout<<" ";
  }
    cout << endl;
 }
}
