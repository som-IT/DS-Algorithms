#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<double>& prices) {
    int n = prices.size();
    for (int i = 0; i < n - 1; i++) { 
        int minIndex = i; // Assume current index as minimum
        for (int j = i + 1; j < n; j++) { 
            if (prices[j] < prices[minIndex]) {
                minIndex = j; // Update index of the minimum
            }
        }
        swap(prices[i], prices[minIndex]);
    }
}

int main() {
    vector<double> prices = {99.99, 49.95, 299.49, 19.95};

    selectionSort(prices);

    cout << "Sorted prices: ";
    for (double price : prices) {
        cout << price << " ";
    }
    cout << endl;

    return 0;
}
