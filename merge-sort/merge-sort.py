def merge_sort(prices):
    if len(prices) > 1:
        mid = len(prices) // 2
        left_half = prices[:mid]
        right_half = prices[mid:]

        merge_sort(left_half)
        merge_sort(right_half)
        i = j = k = 0

        while i < len(left_half) and j < len(right_half):
            if left_half[i] < right_half[j]:
                prices[k] = left_half[i]
                i += 1
            else:
                prices[k] = right_half[j]
                j += 1
            k += 1

        while i < len(left_half):
            prices[k] = left_half[i]
            i += 1
            k += 1

        while j < len(right_half):
            prices[k] = right_half[j]
            j += 1
            k += 1

# Sort Prices
prices = [99.99, 49.95, 299.49, 19.95]
merge_sort(prices)
print("Sorted prices:", prices)
