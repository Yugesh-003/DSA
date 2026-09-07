#include <iostream>
using namespace std;

// Class for Binary Tree Traversals
class TreeTraversal
{
private:
    // Array to store tree elements.
    // Index 0 is unused because the tree uses 1-based indexing.
    int tree[7];

public:
    // Function to input tree elements
    void input()
    {
        cout << "Enter 6 elements for the tree:\n";

        // Input elements from index 1 to 6
        for (int i = 1; i <= 6; i++)
        {
            cout << "Element " << i << ": ";
            cin >> tree[i];
        }
    }

    // Function for Preorder Traversal
    // Order: Root -> Left -> Right
    void preorder(int i)
    {
        // Check if the index is valid and the node exists
        if (i <= 6 && tree[i] != -1)
        {
            // Visit the root
            cout << tree[i] << "\t";

            // Visit the left subtree
            preorder(i * 2);

            // Visit the right subtree
            preorder(i * 2 + 1);
        }
    }

    // Function for Postorder Traversal
    // Order: Left -> Right -> Root
    void postorder(int i)
    {
        // Check if the index is valid and the node exists
        if (i <= 6 && tree[i] != -1)
        {
            // Visit the left subtree
            postorder(i * 2);

            // Visit the right subtree
            postorder(i * 2 + 1);

            // Visit the root
            cout << tree[i] << "\t";
        }
    }

    // Function for Inorder Traversal
    // Order: Left -> Root -> Right
    void inorder(int i)
    {
        // Check if the index is valid and the node exists
        if (i <= 6 && tree[i] != -1)
        {
            // Visit the left subtree
            inorder(i * 2);

            // Visit the root
            cout << tree[i] << "\t";

            // Visit the right subtree
            inorder(i * 2 + 1);
        }
    }
};

// Main function
int main()
{
    // Create a TreeTraversal object
    TreeTraversal t;

    // Input elements into the tree
    t.input();

    // Display Preorder Traversal
    cout << "\nPreorder elements are: ";
    t.preorder(1);

    // Display Postorder Traversal
    cout << "\nPostorder elements are: ";
    t.postorder(1);

    // Display Inorder Traversal
    cout << "\nInorder elements are: ";
    t.inorder(1);

    cout << endl;

    return 0;
}
