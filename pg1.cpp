#include <iostream>
#include <conio.h>
using namespace std;

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
int main() {
    sum s1;
    s1.input();
    s1.operation();
    s1.output();
    return 0;
}