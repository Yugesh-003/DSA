// Class and Objects

// Add two numbers

#include<iostream.h>
#include<conio.h>

class sum {
    public : int n1, n2, res;
    void input (){
        cout << "Enter the value : ";
        cin >> n1 >> n2;
    }
    void operation () {
        res = n1+ n2;
    }
    void output () {
        cout << "\n" << res;
    }
};
void main() {
    clrscr();
    sum s1;
    s1.input();
    s1.operation();
    s1.output();
    getch();
}
