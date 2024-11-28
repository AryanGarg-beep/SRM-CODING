n = int(input("enter limit: "))
for i in range(n):
    for j in range(1,6):
        print("*", end="")
    print("\n")
print("\n")
for i in range(n):
    for j in range(1,6):
        print(i+1, end="")
    print("\n")
print("\n")
for i in range(n):
    for j in range(1,6):
        print(j, end="")
    print("\n")