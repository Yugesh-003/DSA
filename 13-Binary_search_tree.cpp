#include <iostream>
using namespace std;

class binary_search_tree
{
public:
    int tree[50], i, count;

    void init()
    {
        for (i = 1; i < 50; i++)
        {
            tree[i] = -1;
        }
        count = 0;
    }

    void insert()
    {
        int value;
        cout << "Enter the value: ";
        cin >> value;
        i = 1;
        while (tree[i] != -1)
        {
            if (value > tree[i])
            {
                i = i * 2 + 1;
            }
            else
            {
                i = i * 2;
            }
        }
        tree[i] = value;
        count = count + 1;
    }

    void preorder(int i)
    {
        if (i <= count && tree[i] != -1)
        {
            cout << tree[i] << "\t";
            preorder(i * 2);
            preorder(i * 2 + 1);
        }
    }
};

int main()
{
    binary_search_tree bs;
    bs.init();
    bs.insert();
    bs.insert();
    bs.insert();
    cout << "Preorder elements are: ";
    bs.preorder(1);
    return 0;
}
