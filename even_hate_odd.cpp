#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int cntp = 0, cntn = 0;
        for (int i = 0; i < n; i++)
        {
            if(a[i] % 2 == 0)
            {
                cntp++;
            }
            else 
            {
                cntn++;
            }
        }
        if(n%2 != 0)
        {
            cout << -1 <<"\n";
        }
        else
        {
            cout << abs(cntn - cntp) / 2 << endl;
        }
    }
    
    return 0;
}