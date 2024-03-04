#include<bits/stdc++.h>
using namespace std;
int main(){

    int size;
    cout<<"Enter Size of Input:";
    cin>>size;
    vector<int> coin{size};
    for(int i=0;i<size;i++)
    {
        cin>>coin[i];
    }
    int value;
    cout<<"Enter Total Value: ";
    cin>>value;
    sort(coin.begin(),coin.end(),greater<int>());
    int i=0,profit=0;
    int x[size]={0};
    while(value!=0)
    {
        if(coin[i]<=value)
        {
            profit+=coin[i];
            value-=coin[i];
            x[i]++;
        }
        else
        {
            i++;
        }
    }

    cout<<"Coin Used:"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<coin[i]<<" - "<<x[i];
        cout<<endl;
    }
    return 0;


}