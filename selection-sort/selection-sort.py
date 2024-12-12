def selection_sort(prices):
    n = len(prices)
    for i in range(n - 1): 
        min_index = i  # Assume current index as minimum
        for j in range(i + 1, n):  
            if prices[j] < prices[min_index]:
                min_index = j  # Update index of the minimum
        prices[i], prices[min_index] = prices[min_index], prices[i]

# Sort prices
prices = [99.99, 49.95, 299.49, 19.95]
selection_sort(prices)
print("Sorted prices:", prices)
