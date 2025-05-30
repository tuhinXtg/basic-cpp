#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int left = 0, right = n-1;
    int flag = 1;
    while (left < right)
    {
        if(a[left] != a[right])
        {
        flag = 0;
        }
        left++;
        right--;
    }
    cout << (flag ? "YES" : "NO");
    return 0;
}