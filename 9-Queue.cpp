#include <iostream>
using namespace std;

// Queue class
class Queue
{
private:
    // Maximum size of the queue
    static const int MAX_SIZE = 5;

    // Array to store queue elements
    int qu[MAX_SIZE];

    // Front and rear pointers
    int front;
    int rear;

public:
    // Constructor
    Queue()
    {
        // Initially, the queue is empty
        front = -1;
        rear = -1;
    }

    // Function to insert an element into the queue
    void enqueue()
    {
        int value;

        // Check if the queue is full
        if (rear == MAX_SIZE - 1)
        {
            cout << "\nQueue is full";
        }
        else
        {
            cout << "Enter the value for queue: ";
            cin >> value;

            // If the queue is empty, set front to 0
            if (front == -1)
            {
                front = 0;
            }

            // Increment rear and insert the element
            rear++;
            qu[rear] = value;

            cout << "Element inserted successfully.\n";
        }
    }

    // Function to remove an element from the queue
    void dequeue()
    {
        // Check if the queue is empty
        if (front == -1 || front > rear)
        {
            cout << "\nQueue is empty";
        }
        else
        {
            cout << "\nDeleted element is: " << qu[front];

            // Move front to the next element
            front++;

            // Reset the queue when all elements are removed
            if (front > rear)
            {
                front = -1;
                rear = -1;
            }
        }
    }

    // Function to display all elements of the queue
    void display()
    {
        // Check if the queue is empty
        if (front == -1)
        {
            cout << "\nQueue is empty";
        }
        else
        {
            cout << "\nElements in queue are:\n";

            // Display elements from front to rear
            for (int i = front; i <= rear; i++)
            {
                cout << qu[i] << "\t";
            }

            cout << endl;
        }
    }
};

// Main function
int main()
{
    // Create a Queue object
    Queue q;

    // Insert elements into the queue
    q.enqueue();
    q.enqueue();

    // Remove the front element
    q.dequeue();

    // Display remaining queue elements
    q.display();

    return 0;
}
