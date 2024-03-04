#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Tcoin;
    int total;
    cout<<"Enter Total Number of coin:";
    cin>>Tcoin;
    cout<<"Enter Total Amount: ";
    cin>>total;

    vector<int> coin{Tcoin};
    for(int i=0;i<Tcoin;i++)
    {
        cin>>coin[i];
    }

    int table[Tcoin+1][total+1];
    table[0][0]=0;
    for(int j=1;j<=total;j++)
    {
        table[0][j]=INT_MAX;
    }
    for(int i=0;i<Tcoin;i++)
    {
        for(int j=0;j<=total;j++)
        {
            if(j<coin[i])
            {
                table[i+1][j]=table[i][j];
            }
            else
            {
                table[i+1][j]=min(table[i][j],table[i+1][j-coin[i]]+1);
            }
        }
    }
    for(int i=0;i<Tcoin;i++)
    {
        for(int j=0;j<=total;j++)
        {
            cout<<table[i+1][j]<<" ";
        }
        cout<<endl;
    }
}