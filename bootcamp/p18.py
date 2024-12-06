def input():
    marks = []
    for i in range(3):
        marks.append(int(input(f"Enter marks of subject {i+1}: ")))
    name = input("enter name: ")
    return marks, name

def result(marks):
    total_marks = sum(marks)
    average_marks = total_marks / len(marks)
    return average_marks
