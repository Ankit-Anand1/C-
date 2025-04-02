
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

    int x;
    cout << "Enter element to search: ";
    cin >> x;

    ///checkmark
    bool flag = false; // lets assume default not present

    for (int i = 0; i <= n - 1; i++)
    {
        if (num[i] == x)
            flag = true;
    }

    if (flag == true)
    {
        cout << "Element Present";
    }
    else
    {
        cout << "Element not present";
    }
}