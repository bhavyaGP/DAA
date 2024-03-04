//This program is Prepared by 22CE103 Bhavya
#include <bits/stdc++.h>
using namespace std;
int f = 1;
int Counter = 1;
int findfac(int x)
{
    Counter += 1;
    if (x == 0 || x == 1)
    {
        return 1;
    }
    return x * findfac(x - 1);
}
void iterative(int n)
{
    int fac = 1;
    int c = 0;
    c += 3;
    for (int i = 1; i <= n; i++)
    {
        fac = fac * i;
        c += 3;
    }
    cout << "Factorial:" << fac << endl;
    cout << "Counter is:" << c << endl;
}
int main()
{
    int n;
    cin >> n;
    iterative(n);
    int fac = findfac(n);
    cout << "Factorial:" << fac << endl;
    cout << "Counter is:" << Counter << endl;
    cout<<"This Program is Prepared by 22CE103 Bhavya";
}