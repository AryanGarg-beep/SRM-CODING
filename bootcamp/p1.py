#program to check if employee is eligible to pay taxes
name = input("Enter employee name: ")
salary = float(input("Enter salary: "))

if salary > 300000:
    print(f"{name} must pay taxes")
else:
    print(f"{name} does not need to pay taxes")