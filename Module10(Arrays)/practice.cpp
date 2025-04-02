//////////SumofArray

// #include <iostream>
// using namespace std;

// int main(){
//     int n;

//     cout << "Enter size of array: ";
//     cin >> n;
//     int num [n];

//     for(int i = 0; i <= n-1; i++){
//         cin >> num[i];
//     }
//     int sum = 0;
// for(int i=0 ; i<= n-1; i++){
//     sum += num[i];
// }
// cout << "Sum of array: " << sum;
// }






// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;

//     cout << "Enter size of array: ";
//     cin >> n;
//     int num[n];

//     for (int i = 0; i <= n - 1; i++)
//     {
//         cin >> num[i];
//     }
//     int count = 0;
//     int x;
//     cout << "number to compare: ";
//     cin >> x;
//     for (int i = 0; i <= n - 1; i++)
//     {
//         if (num[i] > x)
//         {
//             count++;
//         }
//     }
//     cout << "number of elements greater than X : " << count;
// }




#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;
    int num[n];

    for (int i = 0; i <= n - 1; i++)
    {
        cin >> num[i];
    }
    int count = 0;
    int x;
    cout << "number to compare: ";
    cin >> x;
    for (int i = 0; i <= n - 1; i++)
    {
        if (num[i] < x)
        {
            count++;
        }
    }
    cout << "number of elements greater than X : " << count;
}