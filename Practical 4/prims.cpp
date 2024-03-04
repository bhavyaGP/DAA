#include <bits/stdc++.h>
using namespace std;
void Prims(vector<vector<int>> &graph)
{
    vector<int> key(graph.size());
    vector<bool> mst(graph.size());
    vector<int> parent(graph.size());

    for (int i; i < graph.size(); i++)
    {
        key[i] = INT_MAX;
        mst[i] = false;
    }
    key[0] = 0;
    parent[0] = -1;










}

int main()
{
    int size;
    cout << "Enter the size of the matrix: ";
    cin >> size;

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

    // Print the graph
    cout << "Graph:" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
}

// 0 2 0 6 0
// 2 0 3 8 5
// 0 3 0 0 7
// 6 8 0 0 9
// 0 5 7 9 0
