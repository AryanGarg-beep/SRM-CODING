n = int(input("Enter limit: "))
num = 2
count = 1
while num <= n:
    if count % 2 == 0:
        print(-num, end=" ")
    else:
        print(num, end=" ")
    num += 2
    count += 1