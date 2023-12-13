    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int cases;
        cin >> cases;
        while(cases--)
        {
            int num;
            char c;
            cin >> num >> c ;
            for (int i = 0; i < num; i++)
            {
                cout << c << " " ;
            }
            cout << endl;
        }
        return 0;
    }