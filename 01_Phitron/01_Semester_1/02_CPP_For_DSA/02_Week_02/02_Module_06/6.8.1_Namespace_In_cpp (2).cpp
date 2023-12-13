#include<bits/stdc++.h>
using namespace std;
namespace ewhanna
{
    int age=22;
    void hello()
    {
        cout << "Ewhanna namespace" << endl;
    }
}
namespace emroz
{
    int age2=26;
    void hello2()
    {
        cout << "Emroz namespace" << endl;
    }
}
using namespace ewhanna;
using namespace emroz;
int main()
{
    // cout << ewhanna::age << endl;
    // cout << emroz::age2 << endl;

    cout << age << endl;
    cout << age2 << endl;
    return 0;
}