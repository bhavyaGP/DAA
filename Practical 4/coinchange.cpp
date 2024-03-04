#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout << "Enter Size of Coin array";
    cin>>size;
    vector<int> coin {size};    
    int value ;
    cout << "Enter Value:"; 
    cin>>value;
    for(int i = 0; i < coin.size(); i++)
    {
        cin>>coin[i];
    }
    sort(coin.begin(), coin.end(), greater<int>());
    int sum = 0, i = 0;
    int x[size] = {0}; 

    while (value != 0)
    {
        if (coin[i] <= value)
        {
            sum += coin[i];
            value -= coin[i]; 
            x[i]++;
        }
        else
        {
            i++;
        }
    }

    cout << "Coins used: ";
    for (int i = 0; i < coin.size(); i++)
    {
        if (x[i] > 0)
        {
            for (int j = 0; j < x[i]; j++)
            {
                cout << coin[i] << " ";
            }
        }
    }

    return 0; 
}
