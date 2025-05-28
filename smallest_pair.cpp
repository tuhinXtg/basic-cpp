#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
        cin >> a[i];
        }
        int min_val = INT_MAX;
        for (int i = 0; i < n-1; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                min_val = min(min_val, a[i]+a[j]+j-i);
            }
        }
        t--;
        cout << min_val << "\n";
    }    
    
    return 0;
}