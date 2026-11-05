#include <iostream>
using namespace std;

// Class for performing DFS and BFS graph traversal
class graph_traversal
{
public:
    int n, adj_m[6][6], visited[6];

    // Function to get graph input using adjacency matrix
    void input()
    {
        int i, j;

        // Get the number of vertices
        cout << "Enter the no.of vertices for the graph: ";
        cin >> n;

        // Get adjacency matrix values
        cout << "Create the graph using adjacency matrix: ";
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                cin >> adj_m[i][j];
            }
        }
    }

    // DFS - Depth First Search (uses Stack)
    void dfs()
    {
        int stack[6], top = -1, position, i, start;

        // Get starting vertex
        cout << "Enter the starting position for the traversal: ";
        cin >> start;

        // Push starting vertex into stack
        top = top + 1;
        stack[top] = start;

        // Initially mark all vertices as unvisited
        for (i = 1; i <= n; i++)
        {
            visited[i] = 0;
        }

        // Repeat until stack becomes empty
        while (top != -1)
        {
            // Pop an element from stack
            position = stack[top];
            top = top - 1;

            // Visit the vertex if not already visited
            if (visited[position] == 0)
            {
                cout << position << "\t";
                visited[position] = 1;
            }

            // Check adjacent vertices in reverse order
            for (i = n; i >= 1; i--)
            {
                // If connected and not visited, push into stack
                if (adj_m[position][i] == 1 && visited[i] == 0)
                {
                    top = top + 1;
                    stack[top] = i;
                }
            }
        }
    }

    // BFS - Breadth First Search (uses Queue)
    void bfs()
    {
        int queue[6], front = -1, rear = -1, position, i, start;

        // Get starting vertex
        cout << "\nEnter the starting position for the traversal: ";
        cin >> start;

        // Initially mark all vertices as unvisited
        for (i = 1; i <= n; i++)
        {
            visited[i] = 0;
        }

        front = 0;
        rear = 0;
        queue[front] = start;

        // Repeat until queue becomes empty
        while (front <= rear)
        {
            // Remove an element from the front
            position = queue[front];
            front = front + 1;

            // Visit the vertex if not already visited
            if (visited[position] == 0)
            {
                cout << position << "\t";
                visited[position] = 1;
            }

            // Check all adjacent vertices
            for (i = 1; i <= n; i++)
            {
                // If connected and not visited, insert into queue
                if (adj_m[position][i] == 1 && visited[i] == 0)
                {
                    rear = rear + 1;
                    queue[rear] = i;
                }
            }
        }
    }
};

// Main function
int main()
{
    graph_traversal gt;

    gt.input();  // Read graph
    gt.dfs();    // Perform Depth First Search
    gt.bfs();    // Perform Breadth First Search

    return 0;
}