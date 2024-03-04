#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> value;
    vector<int> weight;
    vector<int> item;
    vector<double> frac;
    int size;
    cout << "Enter Size of Input: ";
    cin >> size;
    int temp;

    cout << "Enter Values..." << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> temp;
        value.push_back(temp);
    }
    cout << "Enter weight..." << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> temp;
        weight.push_back(temp);
    }
    cout << "Enter item..." << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> temp;
        item.push_back(temp);
    }
    double tempo;
    for (int i = 0; i < size; i++)
    {
        tempo = double(value[i]) / weight[i];
        frac.push_back(tempo);
    }

    int swapp;
    for (int i = 0; i < size; i++)
    {
        swapp = 0;
        for (int j = i + 1; j < size; j++)
        {
            if (frac[j] > frac[i])
            {
                swapp = 1;
                swap(frac[j], frac[i]);
                swap(weight[j], weight[i]);
                swap(value[j], value[i]);
                swap(item[j], item[i]);
            }
        }
        if (swapp == 0)
        {
            break;
        }
    }
    cout<<"Run";
    int w = 50;
    float x[size];
    int iter = 0, profit = 0;
    while (w != 0)
    {
        if (weight[iter] <= w)
        {
            x[item[iter]-1] = 1;
            profit += value[iter];
            w -= weight[iter];
        }
        else
        {
            float fr = (double)(w) / weight[iter];
            profit += value[iter] * fr;
            w = 0;
            x[item[iter] - 1] = fr;
        }
        iter += 1;
    }

    cout << "Profit: " << profit << endl;

    for (int i = 0; i < size; i++)
    {
        cout << frac[i] << " " << value[i] << " " << weight[i] << " " << item[i] << " " << x[i] << endl;
    }
}