#include<bits/stdc++.h>
using namespace std;

struct graph{
    int src,desti,weight;
};

int find(int element , vector<int> &parent)
{
    if(parent[element]==element)
    {
        return element;
    }
    else
    {
        return find(parent[element],parent);
    }
}

void Union(int x,int y,vector<int> &parent)
{
    int temp1=find(x,parent);
    int temp2=find(y,parent);
    parent[temp2]=temp1;
}
void kruskal(graph edges[],vector<int> &parent,int size)
{
    int cost = 0;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size-i-1;j++)
        {
            if(edges[j].weight>edges[j+1].weight)
            {
                swap(edges[j],edges[j+1]);
            }
        }
    }
    for(int i=0;i<size;i++)
    {
        int a=find(edges[i].src,parent);
        int b=find(edges[i].desti,parent);
        if(a!=b)
        {
            cout<<edges[i].src<<" ---> "<<edges[i].desti<<" : "<<edges[i].weight<<endl;
            cost+=edges[i].weight;
            Union(a,b,parent);
        }
    }
    cout<<"Total Cost: "<<cost<<endl;
}

int main(){
    int size;
    cout<<"Enter Number of Edges: ";
    cin>>size;
    graph edges[size];
    for(int i=0;i<size;i++){
        cin>>edges[i].src;   
        cin>>edges[i].desti;   
        cin>>edges[i].weight;   
    }
    vector<int> parent(size+1);
    for(int i=1;i<=size;i++){
        parent[i] = i;
    }
    kruskal(edges,parent,size);
    return 0;
}