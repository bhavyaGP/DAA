#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter Totol Amount: ";
    int value;
    cin>>value;
    cout<<"Enter Total Number of Coin: ";
    int size;
    cin>>size;
    vector<int> coin(size);
    vector<int> x(size,0);
    cout<<"Enter Coin: ";
    for(int i=0; i<size; i++)
    {
        cin>>coin[i];
    }
    sort(coin.begin(), coin.end(),greater<int>());
    int sum = 0,i=0;
    while(value!=0) 
    {
        if(coin[i]<=value)
        {
            sum+=coin[i];
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