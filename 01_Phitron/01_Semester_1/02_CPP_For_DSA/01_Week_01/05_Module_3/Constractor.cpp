 #include<bits/stdc++.h>
 using namespace std;
 class Student
 {  
    public:
    int roll;
    int cls;
    double gpa;
    Student(int r, int c, double g)
    {
        // roll=r;
        // cls=c;
        // gpa=g; 
        this->roll=r;
        this->cls=c;
        this->gpa=g;  
    }
 };
 int main()
 {  
    Student rahim(29, 9, 5.00);
    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;

    return 0;
 }