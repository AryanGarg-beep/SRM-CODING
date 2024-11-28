income = int(input("Enter income: "))
if income <= 300000:
    print("Tax amount: 0")
elif income <= 600000:
    tax = income * (5/100)
    tax_add = tax * (4/100)
    total_tax = tax + tax_add
    print(f"Tax amount: {total_tax}")
elif income <= 900000:
    tax = income * (10/100)
    tax_add = tax * (4/100)
    total_tax = tax + tax_add
    print(f"Tax amount: {total_tax}")
elif income <= 1200000:
    tax = income * (15/100)
    tax_add = tax * (4/100)
    total_tax = tax + tax_add
    print(f"Tax amount: {total_tax}")
elif income <= 1500000:
    tax = income * (20/100)
    tax_add = tax * (4/100)
    total_tax = tax + tax_add
else:
    tax = income * (25/100)
    tax_add = tax * (4/100)
    total_tax = tax + tax_add
    if total_tax >= 700000:
        print("You are eligible for section 87-A. You are exempt from taxation")
    else:
        print(f"Tax amount: {total_tax}")
