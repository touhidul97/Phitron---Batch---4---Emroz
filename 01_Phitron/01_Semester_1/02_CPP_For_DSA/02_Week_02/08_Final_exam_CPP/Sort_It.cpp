#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string nm;
        int cls;
        char s;
        int id;
        int math_marks;
        int eng_marks;
};
bool cmp(Student a, Student b)
{
    int total_a = a.math_marks + a.eng_marks;
    int total_b = b.math_marks + b.eng_marks;

    if( total_a == total_b )
    {
        return a.id < b.id ;
    }
    
    return total_a > total_b;
}
int main()
{
    int n;
    cin >> n;
    Student student[150];
    for (int i = 0; i < n; i++)
    {
        cin >> student[i].nm >> student[i].cls >> student[i].s >> student[i].id >> student[i].math_marks >> student[i].eng_marks ;
    }
    
    sort(student, student+n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << student[i].nm << " " << student[i].cls << " " << student[i].s << " " << student[i].id << " " << student[i].math_marks << " " << student[i].eng_marks << endl; 
    }
    
    return 0;
}