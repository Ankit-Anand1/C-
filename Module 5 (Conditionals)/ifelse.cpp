// print the given input is odd or even number

// #include <iostream>
// using namespace std;

// int main (){
//     int x;

//     cout <<"Enter a number : ";
//     cin >> x;

//     if (x%2==0)
//     {
//         cout << "Even";
//     }
//     else{
        
//         cout << "Odd";
//     }
    
// }




// #include <iostream>
// using namespace std;

// int main (){
//     int x;

//     cout <<"Enter a number : ";
//     cin >> x;

//     if (x%2==0)
//     {
//         cout << "Even";
//     }
//     if (x%2!=0){
        
//         cout << "Odd";
//     }
    
// }



// number divisible by 5 or not 

// #include <iostream>
// using namespace std;

// int main (){
//     int x;

//     cout <<"Enter a number : ";
//     cin >> x;

//     if (x%5==0)
//     {
//         cout << "Divisible by 5";
//     }
//     else{
        
//         cout << "Not divisible by 5";
//     }
    
// }



// Cp and SP , profit or loss



#include <iostream>
using namespace std;

int main (){
    int SP,CP,profit,loss;

    cout <<"Enter Selling Price : ";
    cin >> SP;

     cout <<"Enter Cost Price : ";
    cin >> CP;

    profit = SP - CP;
    loss = CP - SP;

    if (SP > CP)
    {
        cout << "Profit : "<<profit;
    }
    // else{
        
    //     cout << "Loss : "<<loss;
    // }
    
    if (CP > SP){
          cout << "Loss : "<<loss;
    }

    if (SP == CP){
          cout << "No Profit or Loss! ";
    }
}
