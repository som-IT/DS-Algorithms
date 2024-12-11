#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<double>& prices) {
    for (int i = 1; i < prices.size(); i++) {
        double key = prices[i];
        int j = i - 1;
        while (j >= 0 && prices[j] > key) {
            prices[j + 1] = prices[j];
            j--;
        }
        prices[j + 1] = key;
    }
}

int main() {
    vector<double> prices = {99.99, 49.95, 299.49, 19.95};
    insertionSort(prices);

    cout << "Sorted prices: ";
    for (double price : prices) {
        cout << price << " ";
    }
    cout << endl;

    return 0;
}
