# GCC Conversion Changes

## File 1 - Payroll Calculation

### Header changes

-   **Before**

    ``` cpp
    #include<iostream.h>
    #include<conio.h>
    ```

-   **After**

    ``` cpp
    #include <iostream>
    using namespace std;
    ```

### Inheritance fix

-   **Before**

    ``` cpp
    class payroll_display : payroll_calcualtion
    ```

-   **After**

    ``` cpp
    class payroll_display : public payroll_calculation
    ```

### Main function

-   **Before**

    ``` cpp
    void main()
    {
        clrscr();
        ...
        getch();
    }
    ```

-   **After**

    ``` cpp
    int main()
    {
        ...
        return 0;
    }
    ```

### Removed Turbo C++ functions

-   Removed:

    ``` cpp
    clrscr();
    getch();
    ```

### Quote replacement

-   Replaced smart quotes (`“ ”`) with normal quotes (`"`).

### LIC calculation correction

-   **Before**

    ``` cpp
    LIC = basic_pay * 0.5;
    ```

-   **After**

    ``` cpp
    LIC = basic_pay * 0.05;
    ```

    > If your lab manual really expects 50%, revert this line.

------------------------------------------------------------------------

## File 2 - Area Calculation

### Header changes

-   **Before**

    ``` cpp
    #include<iostream.h>
    #include<conio.h>
    ```

-   **After**

    ``` cpp
    #include <iostream>
    using namespace std;
    ```

### Main function

-   **Before**

    ``` cpp
    void main()
    ```

-   **After**

    ``` cpp
    int main()
    ```

### Removed Turbo C++ functions

-   Removed:

    ``` cpp
    clrscr();
    getch();
    ```

### Variable rename

-   **Before**

    ``` cpp
    int page;
    void area(int page);
    ```

-   **After**

    ``` cpp
    int side;
    void area(int side);
    ```

### Quote replacement

-   Replaced smart quotes (`“ ”`) with normal quotes (`"`).

------------------------------------------------------------------------

## File 3 - Exception Handling

### Header changes

-   **Before**

    ``` cpp
    #include<iostream.h>
    #include<conio.h>
    ```

-   **After**

    ``` cpp
    #include <iostream>
    using namespace std;
    ```

### Main function

-   **Before**

    ``` cpp
    void main()
    ```

-   **After**

    ``` cpp
    int main()
    ```

### Removed Turbo C++ functions

-   Removed:

    ``` cpp
    clrscr();
    getch();
    ```

### Comparison operator fix

-   **Before**

    ``` cpp
    if (denominator= =0)
    ```

-   **After**

    ``` cpp
    if (denominator == 0)
    ```

### Quote replacement

-   Replaced smart quotes (`“ ”`) with normal quotes (`"`).

------------------------------------------------------------------------

## File 4 - Addition Using Class and Object

### Header changes

-   **Before**

    ``` cpp
    #include<iostream.h>
    #include<conio.h>
    ```

-   **After**

    ``` cpp
    #include <iostream>
    using namespace std;
    ```

### Main function

-   **Before**

    ``` cpp
    void main()
    ```

-   **After**

    ``` cpp
    int main()
    ```

### Removed Turbo C++ functions

-   Removed:

    ``` cpp
    clrscr();
    getch();
    ```

------------------------------------------------------------------------

## File 5 - Price Calculation Using Constructor and Destructor

### Header changes

-   **Before**

    ``` cpp
    #include<iostream.h>
    #include<conio.h>
    ```

-   **After**

    ``` cpp
    #include <iostream>
    using namespace std;
    ```

### Main function

-   **Before**

    ``` cpp
    void main()
    ```

-   **After**

    ``` cpp
    int main()
    ```

### Removed Turbo C++ functions

-   Removed:

    ``` cpp
    clrscr();
    getch();
    ```

### Output statement fix

-   **Before**

    ``` cpp
    cout << "Total amount is to pay is:”<<total;
    ```

-   **After**

    ``` cpp
    cout << "Total amount to pay is: " << total << endl;
    ```

### Destructor output fix

-   **Before**

    ``` cpp
    cout”<<\n object delete”;
    ```

-   **After**

    ``` cpp
    cout << "Object deleted" << endl;
    ```

### Quote replacement

-   Replaced smart quotes (`“ ”`) with normal quotes (`"`).
