#include <bits/stdc++.h>
using namespace std;
int main()
{

    int arr[] = {2, 3, 1, 2, 3};
    // n = 5
    int val;
    int n = sizeof(arr) / sizeof(arr[0]);
    // cout << n << endl; : 5
    for (int i = 0; i < n; i++)
    {

        if (i == arr[i])
        {
            val = i;
        }
    }
    cout << val << " ";
}