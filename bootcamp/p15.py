n = int(input("ENter limit: "))
for i in range(n):
    for j in range(i+1):
        print("*", end=" ")
    print("\n")

for i in range(n):
    for j in range(i+1):
        print(i+1, end=" ")
    print("\n")

for i in range(n):
    for j in range(i+1):
        print(j+1, end=" ")
    print("\n")