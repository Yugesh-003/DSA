#include <iostream>
using namespace std;

// Stack class
class Stack
{
private:
    // Maximum size of the stack
    static const int MAX_SIZE = 5;

    // Array to store stack elements
    int st[MAX_SIZE];

    // Top points to the topmost element
    int top;

public:
    // Constructor
    Stack()
    {
        top = -1; // Stack is initially empty
    }

    // Function to push an element into the stack
    void push()
    {
        int value;

        // Check if the stack is full
        if (top == MAX_SIZE - 1)
        {
            cout << "\nStack is overflow";
        }
        else
        {
            cout << "Enter the value for stack: ";
            cin >> value;

            // Increment top and insert the element
            top++;
            st[top] = value;

            cout << "Element pushed successfully.\n";
        }
    }

    // Function to remove an element from the stack
    void pop()
    {
        // Check if the stack is empty
        if (top == -1)
        {
            cout << "\nStack is empty";
        }
        else
        {
            cout << "\nDeleted element is: " << st[top];

            // Decrement top to remove the element
            top--;
        }
    }

    // Function to display all elements of the stack
    void display()
    {
        // Check if the stack is empty
        if (top == -1)
        {
            cout << "\nStack is empty";
        }
        else
        {
            cout << "\nStack elements are:\n";

            // Display elements from top to bottom
            for (int i = top; i >= 0; i--)
            {
                cout << st[i] << "\n";
            }
        }
    }

    // Function to display the top element
    void peek()
    {
        // Check if the stack is empty
        if (top == -1)
        {
            cout << "\nStack is empty";
        }
        else
        {
            cout << "\nTop element is: " << st[top];
        }
    }
};

// Main function
int main()
{
    // Create a Stack object
    Stack s;

    // Push elements into the stack
    s.push();
    s.push();

    // Remove the top element
    s.pop();

    // Display remaining stack elements
    s.display();

    // Display the top element
    s.peek();

    return 0;
}
