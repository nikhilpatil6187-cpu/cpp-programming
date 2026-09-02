#include <iostream>
using namespace std;

class Product
{
    int productID;
    string name;
    float price;
    int quantity;

public:
    void input()
    {
        cout << "Enter Product ID: ";
        cin >> productID;

        cout << "Enter Product Name: ";
        cin >> name;

        cout << "Enter Price: ";
        cin >> price;

        cout << "Enter Quantity: ";
        cin >> quantity;
    }

    void display()
    {
        cout << "\nProduct ID: " << productID << endl;
        cout << "Product Name: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
    }

    void calculatePrice()
    {
        cout << "Total Price = " << price * quantity << endl;
    }
};

int main()
{
    Product p;

    p.input();
    p.display();
    p.calculatePrice();

    return 0;
}