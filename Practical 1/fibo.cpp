#include <bits/stdc++.h>
using namespace std;
int counter = 0;
int counteri=0;
int fibo(int n)
{
    counteri+=1;
    int a = 0, b = 1, c, i;
    if (n == 0)
        return a;
    for (i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}
int fibbonacci(int n)
{
    counter += 1;
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return (fibbonacci(n - 1) + fibbonacci(n - 2));
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<"Recursive:"<<fibbonacci(n)<<endl;
    cout<<counter<<endl;
    cout<<"Iterative:"<<fibo(n)<<endl;
    cout<<"Counter:"<<counteri<<endl;
    cout<<"This Program is Prepared by 22CE103 Bhavya";
}