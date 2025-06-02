#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    int math;
    int english;
    Student(string name, int roll, int math, int english)
    {
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
    }
    void total()
    {
        cout << "Total marks of " << name <<" is = "<< math+english << endl;;
    }
};
int main()
{
    Student tuhin("Tuhin", 2,10,20);
    cout << tuhin.name << endl;
    tuhin.total();
    return 0;
}