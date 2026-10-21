#include<iostream.h>
#include<conio.h>

class search
{
public:
    int element[20], search_value, i,n;

    // Get array elements and search value
    void input()
    {
        cout << "Enter the size of the array (<20): ";
        cin >> n;
        
        cout << "Enter the elements of array: ";
        for (i = 0; i < n; i++)
        {
            cin >> element[i];
        }

        cout << "Enter the value to search: ";
        cin >> search_value;
    }

    // Count the number of occurrences
    void operation()
    {
        int count = 0;

        for (i = 0; i < 5; i++)
        {
            if (search_value == element[i])
            {
                count = count + 1;
            }
        }

        cout << search_value << " present " << count << " times" << endl;
    }
};

void main()
{
    clrscr();
    search s;

    s.input();
    s.operation();

    getch();
}
