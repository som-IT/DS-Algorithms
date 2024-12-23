def partition(prices, low, high):
    pivot = prices[high]
    i = low - 1

    for j in range(low, high):
        if prices[j] < pivot:
            i += 1
            prices[i], prices[j] = prices[j], prices[i]
    prices[i + 1], prices[high] = prices[high], prices[i + 1]
    return i + 1

def quick_sort(prices, low, high):
    if low < high:
        pi = partition(prices, low, high)
        quick_sort(prices, low, pi - 1)
        quick_sort(prices, pi + 1, high)

prices = [99.99, 49.95, 299.49, 19.95, 199.95, 129.99]
quick_sort(prices, 0, len(prices) - 1)

print("Sorted prices:", prices)
