#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<double>& prices) {
    int n = prices.size();
    for (int i = 0; i < n - 1; i++) { 
        bool sorted = true;
        for (int j = 0; j < n - i - 1; j++) { 
            if (prices[j] > prices[j + 1]) {
                swap(prices[j], prices[j + 1]);
                sorted = false; // Mark as not sorted
            }
        }
        if (sorted) {
            break; // Stop early if no swaps
        }
    }
}

int main() {
    vector<double> priceList = {99.99, 49.95, 299.49, 19.95};
    
    bubbleSort(priceList);
    
    cout << "Sorted prices: ";
    for (double price : priceList) {
        cout << price << " ";
    }
    cout << endl;

    return 0;
}
