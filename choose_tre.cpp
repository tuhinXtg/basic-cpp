#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;git pull origin main

    cin >> t;
    while (t--)
    {
        int n,s;
        cin >> n >>s;
        int a[n];
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i]; 
        }
        for (int i = 0; i < n-2; i++)
        {
            for (int j = i+1; j < n-1; j++)
            {
                for (int k = j+1; k < n; k++)
                {
                    if(a[i] + a[j] +a[k] == s)
                    {
                        cout << "YES" << "\n";
                        flag = 1;
                        break;
                    }
                }
                if(flag)
                {
                    break;
                }
            }
            if(flag)
            {
                break;
            }
        }
        if(flag == 0)
        {
            cout << "NO" << "\n";
        }
    }
    return 0;
}