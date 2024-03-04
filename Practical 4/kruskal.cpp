#include <bits/stdc++.h>
using namespace std;
struct graph
{
    int first, second;
    int weight;
};
int find(int element, vector<int> &parent)
{
    if (parent[element] == element)
    {
        return element;
    }
    else
    {
        return find(parent[element], parent);
    }
}
void Union(int x, int y, vector<int> &parent)
{
    int x_set_parent = find(x, parent);
    int y_set_parent = find(y, parent);
    parent[y_set_parent] = x_set_parent;
}
void kruskal(vector<int> &parent, graph edges[], int size) // vector<graph> edges
{
    int cost = 0;
    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = 0; j < size - i - 1; ++j)
        {
            if (edges[j].weight > edges[j + 1].weight)
            {
                swap(edges[j], edges[j + 1]);
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        int a = find(edges[i].first, parent);
        int b = find(edges[i].second, parent);
        if (a != b)
        {
            cout << edges[i].first << " --- " << edges[i].second << endl;
            cost += edges[i].weight;
            Union(a, b, parent);
        }
    }
    cout << "Total cost= " << cost << endl;
}
int main()
{
    int size;
    cout << "Enter Number of Edges:";
    cin >> size;
    graph edges[size]; // vector<graph> edges(size);
    vector<int> parent(size + 1);
    cout << "Enter details for each edge (first second weight):" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> edges[i].first >> edges[i].second >> edges[i].weight;
    }
    for (int i = 1; i <= size; i++)
    {
        parent[i] = i;
    }
    cout << "Edges:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Edge " << i + 1 << ": " << edges[i].first << " -> " << edges[i].second
            << ", Weight: " << edges[i].weight << endl;
    }
    cout << "Initial parent array:" << endl;
    for (int i = 1; i <= size; i++)
    {
        cout << parent[i] << " ";
    }
    cout << endl;
    kruskal(parent, edges, size); // kruskal(parent,edges)
    cout<<"\nThis Program is Prepared by 22CE103"<<endl;
    return 0;
}


//  0 1 10
//  1 3 15
//  2 3 4
//  2 0 6
//  0 3 5