def bubble_sort(prices):
    n = len(prices)
    for i in range(n - 1): 
        sorted = True
        for j in range(n - i - 1):  
            if prices[j] > prices[j + 1]:
                prices[j], prices[j + 1] = prices[j + 1], prices[j]
                sorted = False  # Mark as not sorted
        if sorted:
            break  # Stop early if no swaps
    return prices

# sort prices
price_list = [99.99, 49.95, 299.49, 19.95]
sorted_prices = bubble_sort(price_list)
print("Sorted prices:", sorted_prices)
