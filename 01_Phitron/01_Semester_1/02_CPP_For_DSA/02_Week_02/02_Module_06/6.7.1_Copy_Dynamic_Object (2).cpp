#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
        int age;
        Person(string name, int age)
        {
            this->name=name;
            this->age=age;
        }
};
int main()
{
    // dynamic memory allocation
    Person* rakib=new Person("Rakib Ahasan",24);
    Person* shakib=new Person("Shakib Ahamed",26);
    
    // rakib->name=shakib->name;
    // rakib->age=shakib->age;
    *rakib=*shakib;
    delete shakib;
    cout << rakib -> name << " " << rakib->age << endl;
    return 0;
}