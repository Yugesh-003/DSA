#include<iostream.h>
#include<stdlib.h>
#include<conio.h>

struct node
{
    int data;
    struct node *link;
};

class single_linked_list
{
public:
    struct node *head;

    // Constructor
    single_linked_list()
    {
        head = NULL;
    }

    // Insert a node at the end
    void insert()
    {
        int value;
        cout << "\nEnter the value: ";
        cin >> value;

        struct node *newnode, *temp;

        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = value;
        newnode->link = NULL;

        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            temp = head;

            while (temp->link != NULL)
            {
                temp = temp->link;
            }

            temp->link = newnode;
        }
    }

    // Delete the first node
    void remove()
    {
        struct node *temp;

        if (head == NULL)
        {
            cout << "\nList is empty";
        }
        else
        {
            temp = head;
            head = temp->link;
            free(temp);
        }
    }

    // Search for an element
    void search()
    {
        int search_value, present = 0;
        struct node *temp;

        cout << "\nEnter the value to search: ";
        cin >> search_value;

        if (head == NULL)
        {
            cout << "\nList is empty";
        }
        else
        {
            temp = head;

            while (temp != NULL)
            {
                if (search_value == temp->data)
                {
                    present = 1;
                    cout << "\nElement found";
                    break;
                }
                else
                {
                    temp = temp->link;
                }
            }

            if (present == 0)
            {
                cout << "\nElement not found";
            }
        }
    }

    // Display all elements
    void display()
    {
        struct node *temp;

        cout << "\nElements in the linked list are:\n";

        temp = head;

        while (temp != NULL)
        {
            cout << temp->data << "\t";
            temp = temp->link;
        }

        cout << endl;
    }
};

void main()
{
    clrscr();
    single_linked_list sll;

    sll.insert();
    sll.insert();
    sll.insert();

    sll.display();

    sll.remove();

    sll.display();

    sll.search();

    getch();
}
