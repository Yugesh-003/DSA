// Binary search tree using array representation (Turbo C++)
#include<iostream.h>
#include<conio.h>

class binary_search_tree
{
public:
    int tree[50], i, count;

    void init()
    {
        for (i = 1; i < 50; i++)
        {
            tree[i] = -1;  // -1 means empty slot
        }
        count = 0;
    }

    void insert()
    {
        int value;
        cout << "Enter the value: ";
        cin >> value;
        i = 1;
        // traverse to find the correct empty slot
        while (tree[i] != -1)
        {
            if (value > tree[i])
            {
                i = i * 2 + 1;  // go right
            }
            else
            {
                i = i * 2;  // go left
            }
        }
        tree[i] = value;
        count = count + 1;
    }

    void preorder(int i)  // root -> left -> right
    {
        if (i < 50 && tree[i] != -1)
        {
            cout << tree[i] << "\t";
            preorder(i * 2);
            preorder(i * 2 + 1);
        }
    }
};

void main()
{
    clrscr();
    binary_search_tree bs;
    bs.init();
    bs.insert();
    bs.insert();
    bs.insert();
    cout << "Preorder elements are: ";
    bs.preorder(1);
    getch();
}
