#include <bits/stdc++.h>
using namespace std;

int maxSum(int *arr, int n)
{
    int mSum = INT_MIN;
    int cSum = 0;
    for (int i = 0; i < n; i++)
    {
        cSum += arr[i];
        if (cSum > mSum)
        {
            mSum = cSum;
        }

        if (cSum < 0)
        {
            cSum = 0;
        }
    }
    return mSum;
}

int main()
{
    int size;
    cout << "Enter size of array: " << endl;
    cin >> size;
    int *arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int mSum = maxSum(arr, size);

    cout << "Maximum sum of subArray is " << mSum << endl;
    return 0;
}