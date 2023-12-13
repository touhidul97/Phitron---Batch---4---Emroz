#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    char  name[100];
    int roll;
    double cgpa;
};
int main()
{
    student a,b;
    cin.getline(a.name,100);
    cin >> a.roll >> a.cgpa ;
    getchar();
    cin.getline(b.name,100);
    cin >> b.roll >> b.cgpa ;

    cout << a.roll << " " << a.name << " " << a.cgpa << endl;
    cout << b.roll << " " << b.name << " " << b.cgpa << endl;
    return 0;
}