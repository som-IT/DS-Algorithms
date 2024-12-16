def factorial(n):
    # Base Case
    if n == 1:
        return 1
    return n * factorial(n-1)
print("Factorial is ", factorial(9))