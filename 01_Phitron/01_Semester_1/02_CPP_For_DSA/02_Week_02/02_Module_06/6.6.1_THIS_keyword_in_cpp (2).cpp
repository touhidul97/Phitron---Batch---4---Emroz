#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
        int age;
        Person(string name, int age)
        {
            // (*this).name = name;
            // (*this).age = age;
            this->name=name;
            this->age=age;
        }
        void hello()
        {
            cout << "Hello" << endl;
        }
};
int main()
{
    Person Rakib("Rakib Ahasan", 24);
    cout << Rakib.name << " " << Rakib.age << endl;
    return 0;
}