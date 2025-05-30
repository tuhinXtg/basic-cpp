#include<bits/stdc++.h>
using namespace std;
int sor_it(int n)
{
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a+n, greater<int>());
    return ;
}
int main()
{
    int n;
    cin >> n;
    int arr = sor_it(n);
    for (int i = 0; i < n; i++)
    {
        cout << arr << " ";
    }
    
    return 0;
}