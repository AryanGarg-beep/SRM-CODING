n = int(input("Enter number: "))
num = 0
while num <= n:
    print(f"{num},{num**2}", end = "")
    if num != n:
        print("|", end = "")
    num += 2