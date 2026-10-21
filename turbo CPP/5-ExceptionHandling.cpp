#include<iostream.h>
#include<conio.h>

class exception_handling
{
public:
    float numerator, denominator, result;

    // Get input values
    void input()
    {
        cout << "Enter the value for numerator: ";
        cin >> numerator;

        cout << "Enter the value for denominator: ";
        cin >> denominator;
    }

    // Perform division using exception handling
    void operation()
    {
        try
        {
            if (denominator == 0)
            {
                throw denominator;
            }

            result = numerator / denominator;
            cout << "Result is " << result << endl;
        }
        catch (float)
        {
            cout << "Divide by zero error" << endl;
        }
    }
};

void main()
{
    clrscr();
    exception_handling e;

    e.input();
    e.operation();

    getch();
}
