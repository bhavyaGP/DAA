#include <bits/stdc++.h>
using namespace std;
int main()
{
    int Tcoint;
    cout << "Enter Total Number of Coins: ";
    cin >> Tcoint;
    vector<int> coins{Tcoint};

    int total;
    cout << "Enter Total Amount: ";
    cin >> total;
    int table[Tcoint + 1][total + 1];

    cout << "Enter Coins: ";
    for (int i = 0; i < Tcoint; i++)
    {
        cin >> coins[i];
    }
    table[0][0] = 0;
    for (int j = 1; j <= total; j++)
    {
        table[0][j] = INT_MAX;
    }
    for (int i = 0; i < Tcoint; i++)
    {
        for (int j = 0; j <= total; j++)
        {
            if (j < coins[i])
            {
                table[i + 1][j] = table[i][j];
            }
            else
            {
                table[i + 1][j] = min(table[i][j], table[i + 1][j - coins[i]] + 1);
            }
        }
    }
    cout<<"Table:"<<endl;
    for (int i = 0; i < Tcoint; i++)
    {
        for (int j = 0; j <=total; j++)

        {
            cout << table[i+1][j] << " ";
        }
        cout << endl;
    }
}
