#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Recursive Binary Search in C++
int recursiveBinarySearch(const vector<string>& book_list, int low, int high, const string& target_book) {
    if (low > high) {
        return -1; // Base case: book not found
    }

    int mid = (low + high) / 2;

    if (book_list[mid] == target_book) {
        return mid; // Book found
    } else if (book_list[mid] < target_book) {
        return recursiveBinarySearch(book_list, mid + 1, high, target_book); // Search in the right half
    } else {
        return recursiveBinarySearch(book_list, low, mid - 1, target_book); // Search in the left half
    }
}

int main() {
    // List of book titles
    vector<string> books = {
        "Advanced Physics",
        "Anatomy and Physiology",
        "Biology Essentials",
        "Calculus I",
        "Chemistry Basics",
        "Civil Engineering Principles",
        "Computer Networks",
        "Data Structures",
        "Discrete Mathematics",
        "Economics 101"
    };

    string target = "Data Structures";

    // invoke the function
    int result = recursiveBinarySearch(books, 0, books.size() - 1, target);

    if (result != -1) {
        cout << "'" << target << "' found at index " << result << "." << endl;
    } else {
        cout << "'" << target << "' not found in the list." << endl;
    }

    return 0;
}
