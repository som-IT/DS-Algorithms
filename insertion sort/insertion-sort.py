def insertion_sort(prices):
    for i in range(1, len(prices)): # 1,2,3
        key = prices[i]
        j = i - 1
        while j >= 0 and prices[j] > key: 
            prices[j + 1] = prices[j]
            j -= 1
        prices[j + 1] = key

# sort prices
prices = [99.99, 49.95, 299.49, 19.95]
insertion_sort(prices)
print("Sorted prices:", prices)
