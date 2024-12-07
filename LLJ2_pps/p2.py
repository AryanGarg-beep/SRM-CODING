#check if number is a perfect square
num = int(input("Enter number: "))
root = num**0.5
if root*root == num:
    print("Perfect square")
else:
     print("Not a perfect square")

#corrected code
num = int(input("Enter number: "))
if num < 0:
    print("Number should be positive")
else:
    root = num**0.5
    if root*root == num:
        print("Perfect square")
    else:
        print("Not a perfect square")