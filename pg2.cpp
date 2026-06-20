#include <iostream>
#include <conio.h>
using namespace std;

class priceCalculation {
    public : int unitPrice, quantity, totalPrice;
    void input (){
        cout << "Enter the Unit Price : ";
        cin >> unitPrice;
        cout << "\n Enter the Quantity : ";
        cin >> quantity;
    }
    void operation () {
        totalPrice = unitPrice * quantity;
    }
    void output () {
        cout << "\n Total Price : " << totalPrice;
    }
};
int main() {
    priceCalculation c1;
    c1.input();
    c1.operation();
    c1.output();
    return 0;
}