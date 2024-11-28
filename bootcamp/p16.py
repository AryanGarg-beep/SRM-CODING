n = int(input("Enter the limit: "))
a = 1
b = 1
c = 1
for i in range(n+1):
    for j in range(i):
        print(a, end=" ")
        a, b = b, a + b
    print()

for i in range(n+1):
    for j in range(i):
        print(c**2, end=" ")
        c +=1
    print()
        
