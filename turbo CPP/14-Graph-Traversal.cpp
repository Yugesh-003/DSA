// Graph traversal using DFS and BFS (Turbo C++)
#include<iostream.h>
#include<conio.h>

class graph_traversal
{
public:
    int n, adj_m[7][7], visited[7];  // size 7 for 1-based indexing up to 6

    void input()
    {
        int i, j;
        cout << "Enter the no. of vertices for the graph: ";
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

    void dfs()  // depth first search using stack
    {
        int stack[7], top = -1, position, i, start;
        cout << "Enter the starting position for DFS: ";
        cin >> start;
        top = top + 1;
        stack[top] = start;
        for (i = 1; i <= n; i++)
        {
            visited[i] = 0;
        }
        while (top != -1)
        {
            position = stack[top];
            top = top - 1;
            if (visited[position] == 0)
            {
                cout << position << "\t";
                visited[position] = 1;
            }
            for (i = n; i >= 1; i--)
            {
                if (adj_m[position][i] == 1 && visited[i] == 0)
                {
                    top = top + 1;
                    stack[top] = i;
                }
            }
        }
    }

    void bfs()  // breadth first search using queue
    {
        int queue[7], front = -1, rear = -1, position, i, start;
        cout << "\nEnter the starting position for BFS: ";
        cin >> start;
        for (i = 1; i <= n; i++)
        {
            visited[i] = 0;
        }
        rear = rear + 1;
        queue[rear] = start;
        front = 0;
        while (front <= rear)
        {
            position = queue[front];
            front = front + 1;
            if (visited[position] == 0)
            {
                cout << position << "\t";
                visited[position] = 1;
            }
            for (i = 1; i <= n; i++)
            {
                if (adj_m[position][i] == 1 && visited[i] == 0)
                {
                    rear = rear + 1;
                    queue[rear] = i;
                }
            }
        }
    }
};

void main()
{
    clrscr();
    graph_traversal gt;
    gt.input();
    gt.dfs();
    gt.bfs();
    getch();
}
