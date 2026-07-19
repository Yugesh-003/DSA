// Constructor and Destructor
// Product price calculation
#include <iostream>
#include <conio.h>

using namespace std;

class price_calculation
{
    int quantity;
    float price_per_quant, total;

public:
    price_calculation()
    {
        price_per_quant = 27.4;
    }

    void input()
    {
        cout << "Enter the quantity for the product: ";
        cin >> quantity;
    }

    void operation()
    {
        total = quantity * price_per_quant;
    }

    void display()
    {
        cout << "Total amount to pay is: " << total;
    }

    ~price_calculation()
    {
        cout << "\nObject deleted";
    }
};

int main()
{
    //clrscr();

    price_calculation p;

    p.input();
    p.operation();
    p.display();

    // getch();
    return 0;
}