def linear_search(A, data):
    # step 1
    loc = -1  
    n = len(A)
    

    # step 2
    i = 0
    while i < n:
        # step 3
        if A[i] == data:
            loc = i
            break
        i += 1

    # step 4
    if loc >= 0:
        print("Data is found and searching is successful.")
    else:
        print("Data is not found and searching is unsuccessful.")
    



A = [10, 23, 45, 70, 11, 15]
data = 70
linear_search(A, data)
