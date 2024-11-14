#include <iostream>
#include <vector>
#include <string>

void binarySearch(const std::vector<std::string>& book_list, const std::string& target_book) {
    int low = 0;
    int high = book_list.size() - 1;
    int loc = -1;  

    while (low <= high) {
        int mid = (low + high) / 2;  
        if (book_list[mid] == target_book) {
            loc = mid;  
            break;
        } else if (book_list[mid] < target_book) {
            low = mid + 1;  // Search in the right half
        } else {
            high = mid - 1;  // Search in the left half
        }
    }

    if (loc >= 0) {
        std::cout << "Book is found at location " << loc << " and searching is successful." << std::endl;
    } else {
        std::cout << loc << "Book is not found and searching is unsuccessful." << std::endl;
    }

}

int main() {
    // Vector of sorted book titles
    std::vector<std::string> book_list = {
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

    // finding the target book
    std::string target_book = "Data Structures";
    binarySearch(book_list, target_book);

    return 0;
}
