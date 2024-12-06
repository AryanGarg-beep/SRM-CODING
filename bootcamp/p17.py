def display():
    print("Welcome to the world of functions!")
def add_numbers(num1, num2):
    return num1 + num2

def check_even_odd(num):
    if num % 2 == 0:
        return "even"
    else:
        return "odd"

def factorial(num):
    if num == 0:
        return 1
    else:
        return num * factorial(num - 1)

def print_fibonacci_sum(sum_limit):
    print("Fibonacci series:")
    a,b = 0,1
    while a <= sum_limit:
        print(a, end=" ")
        a, b = b, a + b
    print()

def temp_convert_sum(celsius):
    fahrenheit = (celsius * 9/5) + 32
    return fahrenheit


display()
num1 = float(input("Enter the first number: "))
num2 = float(input("Enter the second number: "))

#sum of the 2 numbers
result = add_numbers(num1, num2)
print(f"Sum: {result}")

#sum is even or odd
sum_even_odd = check_even_odd(result)
print(f"The sum is {sum_even_odd}.")

#factorial of the sum
sum_factorial = factorial(int(result))
print(f"factorial: {sum_factorial}.")

#febonacci till sum
print_fibonacci_sum(result)

#convert celsius to fahrenheit
temp = temp_convert_sum(result)
print(f"temp: {temp}")