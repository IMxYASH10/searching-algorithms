#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    int target;
    cin >> target;
    for (int i = 0; i < n; i++)
    {
        if (target == arr[i])
            cout << i;
    }

    return 0;
}