#include <bits/stdc++.h>
using namespace std;
int counter1 = 0;
int counter2 = 0;
int binary_searchR(int A[], int N, int K, int L, int H)
{

    counter1 += 1;  
    while (L <= H)
    {
        int mid = (L + H) / 2;
        if (A[mid] == K)
        {
            cout << "Your Posi Is:" << mid << endl;
            break;
        }
        else if (A[mid] < K)
        {
            cout << A[mid] << " " << endl;
            binary_searchR(A, N, K, mid + 1, H);
            break;
        }
        else
        {
            binary_searchR(A, N, K, L, mid - 1);
            break;
        }
    }
}
int binarySearchI(int arr[], int l, int r, int x)
{
    counter2 += 3;
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        counter2 += 2;
        if (arr[m] == x)
            cout << "Iterative Counter:" << counter2 << endl;
        return m;
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
        counter2 += 2;
    }
    return -1;
}
int main()
{
    int c, l = 0, h = 5, key;
    int arr[5];
    cout << "Enter Your Key Element: ";
    cin >> key;
    cout << "Enter Array Element:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    binary_searchR(arr, 5, key, l, h);
    int result = binarySearchI(arr, 0, 4, key);
    cout << "Your Posi Is:" << result << endl;
    cout << "Recursive Counter:" << counter1 << endl;
    cout<<"This Program is Prepared by 22CE103 Bhavya"<<endl;
}

// 2, 3, 4, 10, 40 