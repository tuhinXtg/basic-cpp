#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;

//     Student(string name,int roll,char section,int math_marks,int cls )
//     {
//         this->name = name;
//         this->roll = roll;
//         this->section = section;
//         this->math_marks = math_marks;
//         this->cls = cls;    }
};
int main()
{
    int n;
    cin >> n;
    int max;
    Student topper;
    for (int i = 0; i < n; i++)
    {
        Student temp;
        cin >> temp.name>> temp.roll >> temp.section >> temp.math_marks
        >>temp.cls;
        // cout <<temp.name<<" "<< temp.roll <<" "<< temp.section <<" "<< temp.math_marks
        // <<" "<<temp.cls<<"\n";
        if(i==1)
        {
            topper = temp;
        }
        else{
            if(temp.math_marks >topper.math_marks)
            {
                topper = temp;
            }
            else if(temp.math_marks == topper.math_marks)
            {
                if(temp.roll < topper.roll)
                {
                    topper = temp;
                }
            }
        }
        
        
    }
    cout <<topper.name<<" "<< topper.roll <<" "<< topper.section <<" "<< topper.math_marks
    <<" "<<topper.cls<<"\n";
    return 0;
}
















