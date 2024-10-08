#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int> arr1, vector<int> arr2, int n, int m)
{
    map<int, int> nextGreater;
    stack<int> s;
    s.push(-1);

    for (int i = n - 1; i >= 0; i--)
    {
        int curr = arr1[i];
        while (s.top() != -1 && curr >= s.top())
        {
            s.pop();
        }
        nextGreater[arr1[i]] = s.top();
        s.push(arr1[i]);
    }
    vector<int> ans;
    for (int i = 0; i < m; i++)
    {
        ans.push_back(nextGreater[arr2[i]]);
    }
    return ans;
}

int main()
{
    int n, m;
    cout << "Enter the size of arr : ";
    cin >> n >> m;
    vector<int> arr1(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    vector<int> arr2(m);

    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    vector<int> a = nextGreaterElement(arr1, arr2, n, m);

    for (int i = 0; i < m; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}