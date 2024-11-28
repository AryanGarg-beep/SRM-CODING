n = int(input("Enter number: "))
count = 1
num = 1
while num <= n:
     if count%4!=0:
        print(num**2,end = " ")
     count += 1
     num += 1