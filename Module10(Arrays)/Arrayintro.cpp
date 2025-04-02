// #include <iostream>
// using namespace std;

// int main(){
//     int score[5];
//     cout<< "Enter the scores of 5 students: ";
//     for(int i=0; i< 5; i++){
       
//         cin >>score[i];
//     }
   
//     cout << "The scores are: " << endl;
//     for(int i = 0; i < 5; i++){
//     cout << score[i] << endl;
//     }
//     cout<< endl;
// }




// #include <iostream>
// using namespace std;

// int main(){
//     int score[] = {2,5,6,3,6,1};

//     cout << score[2] << endl;
 
// }




/////////question to print index as roll number

// #include <iostream>
// using namespace std;

// int main(){
//     int marks[5] = {25,55,65,33,36};

//     for(int i = 0; i<=5; i++){
//     if(marks[i] < 35){
//         cout << i;
//          }
//     }
// }



#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    int marks[n];

    cout << "enter the marks: ";
    for(int i=0; i <= n-1; i++){
        cin >> marks[i];
    }
    for(int i = 0; i<=n-1; i++){
    if(marks[i] < 35){
        cout << i << " ";
         }
    }
}