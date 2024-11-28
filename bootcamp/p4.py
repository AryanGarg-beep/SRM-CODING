#report card
marks1 = float(input("Enter 1st subject marks: "))
marks2 = float(input("Enter 2nd subject marks: "))
marks3 = float(input("Enter 3rd subject marks: "))
avg = (marks1 + marks2 + marks3)/3
if avg>=60:
    print("1st Class")
elif avg>=50:
    print("2nd Class")
elif avg>=35:
    print("Pass Class")
else:
    print("Fail")
