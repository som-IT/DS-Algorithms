def binary_search(book_list, target_book):
    low = 0
    high = len(book_list) - 1
    loc = -1  

    while low <= high:
        mid = (low + high) // 2  
        if book_list[mid] == target_book:
            loc = mid  
            break
        elif book_list[mid] < target_book:
            low = mid + 1  # Search in the right half
        else:
            high = mid - 1  # Search in the left half

    if loc >= 0:
        print(f"Book is found at location {loc} and searching is successful.")
    else:
        print(f"{loc} Book is not found and searching is unsuccessful.")
    
   

# List of sorted book titles
book_list = [
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

# finding the target book
target_book = "Data Structures"
binary_search(book_list, target_book)
