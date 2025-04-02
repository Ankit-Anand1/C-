
// #include <iostream>
// #include <climits>
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

//     // int max = INT_MIN;

//     int max = num[0];
//     for (int i = 0; i <= n - 1; i++)
//     {
//         if (num[i] > max)
//         {
//             max = num[i];
//         }
//     }
//     cout << "Maximum element is: " << max;
// }




////////////////////////2nd largest element

#include <iostream>
#include <climits>
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

    int max = INT_MIN;

    // int max = num[0];
    for (int i = 0; i <= n - 1; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }

    cout << "Maximum element is: " << max << endl;

    int smax = INT_MIN;
    for (int i = 0; i <= n - 1; i++)
    {
        if (num[i] > smax && num[i] != max)
        {
            smax = num[i];
        }
    }
    cout << "Second Maximum element is: " << smax;
}