#include <bits/stdc++.h>
using namespace std;

int reversearray(int arr[], int n)
{
    int low = 0, high = n - 1;
    while (low < high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}

int print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "enter element are"
             << " " << arr[i] << endl;
    }
}

int main()
{
    cout << "enter the size" << endl;
    int f;
    cin >> f;
    int num[f];

    for (int i = 0; i < f; i++)
    {
        cout << "enter the element" << endl;
        cin >> num[i];
    }
    reversearray(num, f);

    print(num, f);

    return 0;
}
