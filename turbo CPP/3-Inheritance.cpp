#include<iostream.h>
#include<conio.h>

class payroll_calculation
{
protected:
    char name[20];
    long int basic_pay, salary;
    int HRA, TA, PF, LIC;

    // Get employee details
    void input()
    {
        cout << "Enter your name: ";
        cin >> name;

        cout << "Enter your basic pay: ";
        cin >> basic_pay;
    }

    // Calculate salary details
    void operation()
    {
        HRA = basic_pay * 0.10;
        TA = basic_pay * 0.05;
        PF = basic_pay * 0.12;

        if (basic_pay < 20000)
        {
            LIC = basic_pay * 0.05;
        }
        else
        {
            LIC = 0;
        }

        salary = (basic_pay + HRA + TA) - (PF + LIC);
    }
};

// Inherit from payroll_calculation
class payroll_display : public payroll_calculation
{
public:
    void display()
    {
        input();
        operation();

        cout << "\nEmployee Name : " << name;
        cout << "\nBasic Pay     : " << basic_pay;
        cout << "\nHRA           : " << HRA;
        cout << "\nTA            : " << TA;
        cout << "\nPF            : " << PF;
        cout << "\nLIC           : " << LIC;
        cout << "\nSalary        : " << salary;
    }
};

void main()
{
    clrscr();
    payroll_display pd;
    pd.display();
    getch();
}
