#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    char sec;
    int id;
};
int main()
{
    int n;
    cin >> n;
    Student arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].cls >>
        arr[i].sec >> arr[i].id;
    }
    int i = 0, j = n-1;
    while (i<j)
    {
        swap(arr[i].sec, arr[j].sec);
        i++;
        j--;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name <<" "<< arr[i].cls <<" "<< arr[i].sec
        << " "<< arr[i].id << "\n";
    }
    
    return 0;
}