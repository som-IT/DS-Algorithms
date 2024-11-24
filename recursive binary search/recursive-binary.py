
def recursive_binary_search(book_list, low, high, target_book):
    if low > high:
        return -1  # Base case: book not found

    mid = (low + high) // 2

    if book_list[mid] == target_book:
        return mid  # Book found
    elif book_list[mid] < target_book:
        return recursive_binary_search(book_list, mid + 1, high, target_book)  # Search in the right half
    else:
        return recursive_binary_search(book_list, low, mid - 1, target_book)  # Search in the left half


# List of book titles
books = [
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
]

# invoke the function
target = "Data Structures"
result = recursive_binary_search(books, 0, len(books) - 1, target)

if result != -1:
    print(f"'{target}' found at index {result}.")
else:
    print(f"'{target}' not found in the list.")
