// #include<bits/stdc++.h>
// using namespace std;

// class Student {
// public:
//     int id;
//     char name[101];
//     char section;
//     int marks;

//     Student(int id, char name[], char section, int marks) {
//         this->id = id;
//         strcpy(this->name, name);
//         this->section = section;
//         this->marks = marks;
//     }
// };

// int main() {
//     int t;
//     cin >> t;
//     if(t < 1 || t > 1000) {
//         cout << "Invalid number of test cases" << endl;
//         return 1;
//     }
//     while(t--) {
//         Student* students[3];
//         for(int i = 0; i < 3; i++) {
//             int id, marks;
//             char name[101], section;
//             cin >> id >> name >> section >> marks;
//             if(id < 1 || id > 3 || strlen(name) < 1 || strlen(name) > 100 || section < 'A' || section > 'Z' || marks < 0 || marks > 100) {
//                 cout << "Invalid input" << endl;
//                 return 1;
//             }
//             students[i] = new Student(id, name, section, marks);
//         }
//         int mx = 0, r = -1;
//         for(int i = 0; i < 3; i++) {
//             if(students[i]->marks > mx) {
//                 mx = students[i]->marks;
//                 r = i;
//             }
//         }
//         cout << students[r]->id << " " << students[r]->name << " " << students[r]->section << " " << students[r]->marks << endl;
//         for(int i = 0; i < 3; i++) {
//             delete students[i];
//         }
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    int id;
    char name[200];
    char section[10];
    int marks;
};
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        student a,b,c;
        cin >> a.id >> a.name >> a.section >> a.marks;
        cin >> b.id >> b.name >> b.section >> b.marks;
        cin >> c.id >> c.name >> c.section >> c.marks;

        int s=0;
        s = max({a.marks, b.marks, c.marks});
        if(a.marks == s)
        {
            cout << a.id << " " << a.name << " " << a.section << " " << a.marks;
        }
        else if (b.marks == s)
        {
            cout << b.id << " " << b.name << " " << b. section << " " << b.marks;
    
        }
        else
        {
            cout << c.id << " " << c.name << " " << c.section << " " << c.marks;
        }
        cout << endl;
    }
    return 0;
}