#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void quickSort(vector<double>& prices, int low, int high) {
    if (low < high) {
        // Choosing the pivot 
        double pivot = prices[high];
        int i = low - 1;

        for (int j = low; j < high; j++) {
            if (prices[j] <= pivot) {
                i++;
                swap(prices[i], prices[j]);
            }
        }
        swap(prices[i + 1], prices[high]);
        int pivotIndex = i + 1;

        quickSort(prices, low, pivotIndex - 1);  
        quickSort(prices, pivotIndex + 1, high); 
    }
}

int main() {
    vector<double> prices = {99.99, 49.95, 299.49, 19.95, 199.95, 129.99};

    quickSort(prices, 0, prices.size() - 1);

    cout << "Sorted Prices: ";
    for (double price : prices) {
        cout << price << " ";
    }
    return 0;
}
