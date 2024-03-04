#include<bits/stdc++.h>
using namespace std;
int Counter=0;
int main()
{
    int n,key;
    int arr[20];
    cout<<"Enter Size of array: ";
    cin>>n;
    cout<<"Enter Array:"<<endl;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    //+3
    Counter+=2;
    for(int i=2;i<=n;i++)
    {
        key=arr[i];
        int j=i-1;
        //+2
        Counter+=2;
        while(j>0 && arr[j]>key)    
        {
            //+2
            Counter+=2;
            arr[j+1]=arr[j];
            j=j-1;
            //+2
            Counter+=2;
        }
        arr[j+1]=key;
        //+3
        Counter+=3;
    }
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"Counter is:"<<Counter<<endl;
    cout<<"\nThis Program is Prepared by 22CE103"<<endl;
}
//12, 11, 13, 5, 6