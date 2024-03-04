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
                swap(frac[i], frac[j]);
                swap(value[i], value[j]);
                swap(weight[i], weight[j]);
                swap(item[i], item[j]);
            }
        }
        if (swapp == 0)
        {
            break;
        }
    }
    float x[size];
    int w = 50;
    int iter = 0, profit = 0;
    while (w != 0)
    {
        if (weight[iter] <= w)
        {
            x[item[iter] - 1] = 1;
            w -= weight[iter];
            profit += value[iter];
        }
        else
        {
            float fr = (double)(w) / weight[iter];
            profit += value[iter] * fr;
            w = 0;
            x[item[iter] - 1] =fr;
        }
        iter += 1;
    }

    cout << "Profit: " << profit << endl;

    for (int i = 0; i < size; i++)
    {
        cout << frac[i] << " " << value[i] << " " << weight[i] << " " << item[i] << " " << x[i] << endl;
    }
}