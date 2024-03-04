#include <bits/stdc++.h>
using namespace std;
void Dijkstra(vector<vector<int>> &graph, vector<int> &distance, vector<int> &vis, int src)
{
    int n = graph.size();
    distance[src] = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        int u = -1;
        for (int j = 0; j < n; ++j)
        {
            if (!vis[j] && (u == -1 || distance[j] < distance[u]))
            {
                u = j;
            }
        }
        vis[u] = 1;
        for (int v = 0; v < n; ++v)
        {
            if (graph[u][v] && !vis[v])
            {
                distance[v] = min(distance[v], distance[u] + graph[u][v]);
            }
        }
    }
}
int main()
{
    int size;
    cout << "Enter the size of the matrix: ";
    cin >> size;
    vector<int> distance(size, INT_MAX);
    vector<int> vis(size, 0);
    int src;
    cout << "Enter Your Source node: ";
    cin >> src;
    vector<vector<int>> graph;
    for (int i = 0; i < size; i++)
    {
        vector<int> temp;
        for (int j = 0; j < size; j++)
        {
            int value;  
            cin >> value;
            temp.push_back(value);
        }
        graph.push_back(temp);
    }
    Dijkstra(graph, distance, vis, src);
    cout << "Shortest distances from node " << src << " to all other nodes:" << endl;
    for (int i = 0; i < size; ++i)
    {
        cout << "Node " << i << ": " << distance[i] << endl;
    }
    cout << "This Program is Prepared by 22CE103 Bhavya" << endl;
    return 0;
}

// 0 1 2 0 0 0
// 1 0 0 5 1 0
// 2 0 0 2 3 0
// 0 5 2 0 2 2
// 0 1 3 2 0 1
// 0 0 0 2 1 0