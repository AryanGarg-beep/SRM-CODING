def fibonacci_series(limit):
    fib_series = [0, 1]
    while fib_series[-1] + fib_series[-2] < limit:
        fib_series.append(fib_series[-1] + fib_series[-2])
    return fib_series


limit = int(input("Enter the limit for the Fibonacci series: "))
fib_sequence = fibonacci_series(limit)
print(f"Fibonacci series up to {limit}: {fib_sequence}")