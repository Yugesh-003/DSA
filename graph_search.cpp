#include <iostream>
using namespace std;

class graph_traversal
{
public:
    int n, adj_m[6][6], visited[6];

    // Get graph input
    void input()
    {
        int i, j;

        cout << "Enter the no.of vertices for the graph: ";
        cin >> n;

        cout << "Create the graph using adjacency matrix: ";
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                cin >> adj_m[i][j];
            }
        }
    }

    // DFS - Depth First Search using Stack
    void dfs(int search_element)
    {
        int stack[6], top = -1, position, i, start;

        cout << "\nEnter the starting position for DFS: ";
        cin >> start;

        // Initialize visited array
        for (i = 1; i <= n; i++)
        {
            visited[i] = 0;
        }

        // Push starting vertex
        stack[++top] = start;
        visited[start] = 1;

        cout << "\nDFS Traversal: ";

        while (top != -1)
        {
            // Pop vertex from stack
            position = stack[top--];

            cout << position << "\t";

            // Check whether search element is found
            if (position == search_element)
            {
                cout << "\nElement found!";
                return;
            }

            // Check adjacent vertices
            for (i = n; i >= 1; i--)
            {
                if (adj_m[position][i] == 1 && visited[i] == 0)
                {
                    stack[++top] = i;
                    visited[i] = 1;
                }
            }
        }

        cout << "\nElement not found!";
    }

    // BFS - Breadth First Search using Queue
    void bfs(int search_element)
    {
        int queue[6], front = -1, rear = -1, position, i, start;

        cout << "\n\nEnter the starting position for BFS: ";
        cin >> start;

        // Initialize visited array
        for (i = 1; i <= n; i++)
        {
            visited[i] = 0;
        }

        // Insert starting vertex into queue
        queue[++rear] = start;
        visited[start] = 1;
        front = 0;

        cout << "\nBFS Traversal: ";

        while (front <= rear)
        {
            // Remove vertex from queue
            position = queue[front++];

            cout << position << "\t";

            // Check whether search element is found
            if (position == search_element)
            {
                cout << "\nElement found!";
                return;
            }

            // Check adjacent vertices
            for (i = 1; i <= n; i++)
            {
                if (adj_m[position][i] == 1 && visited[i] == 0)
                {
                    queue[++rear] = i;
                    visited[i] = 1;
                }
            }
        }

        cout << "\nElement not found!";
    }
};

int main()
{
    graph_traversal gt;
    int search_element;

    gt.input();

    // Get the vertex to search
    cout << "\nEnter the element to search: ";
    cin >> search_element;

    // Perform DFS and BFS
    gt.dfs(search_element);
    gt.bfs(search_element);

    return 0;
}