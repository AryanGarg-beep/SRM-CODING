#find largest of 3 numbers

num1 = int(input("Enter first number:"))
num2 = int(input("Enter second number:"))
num3 = int(input("Enter third number:"))

if num1 > num2 and num1 > num3:
    largest = num1
    print(f"{num1} is the largest")
elif num2 > num3:
    print(f"{num2} is the largest")
elif num3 > num2:
    print(f"{num3} is the largest")
else:
    print("All numbers are equal")