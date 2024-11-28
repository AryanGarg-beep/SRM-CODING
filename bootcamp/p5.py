#tax calculator

name = input("Enter name: ")
ID = int(input("Enter ID: "))
basic_salary = float(input("Enter basic salary: "))
allowances = float(input("Enter special allowance: "))
bonus = float(input("Enter bonus percentage(annual bonus as % of gross salary): "))

gross_salary = basic_salary + allowances
annual_gross_salary = (gross_salary * 12) 
bonus = (bonus / 100) * annual_gross_salary
final_salary = annual_gross_salary + bonus

print(f"%-20 : %s"%('Employee name:', name))
print(f"%-20 : %7.0f"%("Employee ID:", ID))
print(f"%-20 : %7.0f"%("Gross monthly salary:", gross_salary))
print(f"%-20 : %7.0f"%("Gross annual salary:", final_salary))