#include<iostream>
using namespace std;
int main ()
{
    int x=6;

    // if else :
        // if(x==1)
        // {
        //     cout <<"one";
        // }
        // else if (x==2)
        // {
        // cout << "Two";
        // }
    
    //switch ( shortcut og if else )

    switch(x) // ask the value of a variable
    {
        
        case 1: // as if (x==1)
            cout <<"One" << endl;
            break;
        case 2: // as if (x==2)
            cout <<"Two" << endl;
            break;
        case 3: // as if (x==3)
            cout <<"Three" << endl;
            break;
        case 4: // as if (x==4)
            cout <<"Four" << endl;
            break;
        case 5: // as if (x==5)
            cout <<"Five" << endl;
            break;
        default: // kind of act like else
            cout << "Mile Na!" << endl;
    }
    return 0;
}