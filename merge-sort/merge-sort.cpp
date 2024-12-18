#include <iostream>
#include <vector>
using namespace std;

void merge(vector<double>& prices, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<double> L(n1), R(n2);

    for (int i = 0; i < n1; i++) L[i] = prices[left + i];
    for (int j = 0; j < n2; j++) R[j] = prices[mid + 1 + j];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            prices[k] = L[i];
            i++;
        } else {
            prices[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        prices[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        prices[k] = R[j];
        j++;
        k++;
    }
}

void merge_sort(vector<double>& prices, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        merge_sort(prices, left, mid);
        merge_sort(prices, mid + 1, right);
        merge(prices, left, mid, right);
    }
}

int main() {
    vector<double> prices = {99.99, 49.95, 299.49, 19.95};

    merge_sort(prices, 0, prices.size() - 1);

    cout << "Sorted prices: ";
    for (double price : prices) {
        cout << price << " ";
    }
    cout << endl;

    return 0;
}
