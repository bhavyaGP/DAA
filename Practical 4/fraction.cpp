#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> values;
    vector<int> weight;
    vector<int> item;
    vector<double> frac;
    cout << "Enter Size of Input: ";
    int size, temp;
    cin >> size;
    cout << "Enter Values: ";
    for (int i = 0; i < size; i++) {
        cin >> temp;
        values.push_back(temp);
    }
    cout << "Enter Weights: "; 
    for (int i = 0; i < size; i++) {
        cin >> temp;
        weight.push_back(temp);
    }
    cout << "Enter Items: "; 
    for (int i = 0; i < size; i++) {
        cin >> temp;
        item.push_back(temp);
    }
    for (int i = 0; i < size; i++) {
        double tempo = (double)values[i] / weight[i];
        frac.push_back(tempo);
    }
    int swapp;
    for (int i = 0; i < size; i++) {
        swapp = 0;
        for (int j = i + 1; j < size; j++) {
            if (frac[j] > frac[i]) {
                swap(values[j], values[i]);
                swap(weight[j], weight[i]);
                swap(item[j], item[i]);
                swap(frac[j], frac[i]);
                swapp = 1;
            }
        }
        if (swapp == 0) {
            break;
        }
    }

    for(int i = 0; i < size; i++) {
        cout<<values [i]<<" " ;
    }
    cout<<endl;    
    for(int i = 0; i < size; i++) {
        cout<<weight [i] <<" ";
    }
    cout<<endl;
    for(int i = 0; i < size; i++) {
        cout<<item [i] << " ";
    }
    cout<<endl;
    for(int i = 0; i < size; i++) {
        cout<<frac [i] << " ";
    }
    cout<<endl;


    int iter = 0, profit = 0;
    int W = 50;
    float X[size];
    while (W != 0) {
        if (weight[iter] <= W) {
            X[item[iter] - 1] = 1;
            profit += values[iter];
            W = W - weight[iter];
        } else {
            float fr = (double)(W) / weight[iter];
            profit += fr * values[iter];
            W = 0;
            X[item[iter] - 1] = fr;
        }
        iter += 1;
    }
    cout << "Profit: " << profit << endl;
    cout << "Sorted Values:" << endl;
    for (int i = 0; i < size; i++) {
        cout << frac[i] << " " << values[i] << " " << weight[i] << " " << item[i] <<" " << X[i]<<endl;
    }
    cout << "This Program is Prepared by 22CE103 Bhavya" << endl;
    return 0;
}
