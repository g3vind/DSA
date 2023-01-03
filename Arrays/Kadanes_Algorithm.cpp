#include <iostream>
using namespace std;

int kadane(int arr[], int n)
{

    int maxSoFar = 0;
    int maxEndingHere = arr[0];
    for (int i = 0; i < n; i++)
    {
        maxEndingHere = maxEndingHere + arr[i];
        if (maxEndingHere < 0)
        {
            maxEndingHere = 0;
        }
        if (maxSoFar < maxEndingHere)
        {
            maxSoFar = maxEndingHere;
        }
    }
    return maxSoFar;
}
int main()
{
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum sum contigious subarray : " << kadane(arr, n);
    return 0;
}
