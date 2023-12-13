#include<bits/stdc++.h>
using namespace std;
class Product
{
    public:
        int id;
        string name;
        double price;
        Product(){};//default constructor

        Product(int id, string name, double price)
        {
            this->id = id;
            this->name=name;
            this->price=price;

        }
        
};
int main()
{
    int n;
    cin >> n;
    Product products[n];
    // ={
    //     Product(1, "Mango", 200),
    //     Product(2,"Laptop", 45000),
    // }
    for (int i = 0; i < n; i++)
    {
        cin >> products[i].id >> products[i].name >> products[i].price ;
    }

    for (int i = 0; i < n; i++)
    {
        cout << products[i].id << " " << products[i].name << " " << products[i].price << endl;
    }
    
    
    return 0;
}