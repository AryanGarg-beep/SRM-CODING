add_more_items = 'yes'
grand_total = 0
total_items = 0
final = 0
member = 'yes'
promo = 'PROMO10'
discounts = []

#taking user input-------------------------------------------------------------------------
while add_more_items.lower() == 'yes':
    item_code  = input("Enter item code: ")
    description = input("Description: ")
    price       = float(input("Price: "))
    quantity   = int(input("Quantity: "))

    total_cost = price * quantity
    grand_total += total_cost
    total_items += quantity

    
   
#Promocode implementation-------------------------------------------------------------------
    if item_code == promo:
        discount = total_cost * 0.10
        total_cost = total_cost - discount
        print("Coupon is applicable!")
        discounts.append(f"{promo} coupon discount: {discount:>7.2f}")

    add_more_items = input("Do you want to add more items? (yes/no): ") #wanna buy more?

original = grand_total
member = input("Is the customer a Member?(yes/no): ") #is the customer even legit?
# 10% discount for purchases that are over 10000-------------------------------------------
if grand_total >= 10000:
    discount = original * 0.10
    grand_total = grand_total - discount
    discounts.append(f"10% discount: {discount:>18.2f}")

# 5% discount for purchasing more than 20 items--------------------------------------------
if total_items>20:
    discount = original * 0.05
    grand_total = grand_total - discount
    discounts.append(f"5% discount: {discount:>19.2f}")

# 2% membership discount benefit-----------------------------------------------------------
if member.lower() == 'yes':
    membership_discount = original * 0.02
    grand_total = grand_total - membership_discount
    discounts.append(f"membership discount: {membership_discount:>11.2f}")


#tax calculation---------------------------------------------------------------------------
if grand_total <= 5000:
    tax = grand_total * 0.05
    grand_total = grand_total + tax
elif final <=20000:
    tax = grand_total * 0.1
    grand_total = grand_total + tax
else:
    tax = grand_total * 0.15
    grand_total = grand_total + tax



#surcharge of credit payment----------------------------------------------------------------
print("-"*40)
payment = input("Is the customer paying by cash or credit?: ")
if payment.lower() == 'credit':
    surcharge = grand_total * 0.02
    grand_total = grand_total + surcharge
else:
    surcharge = 0

#printing final receipt---------------------------------------------------------------------
if grand_total > 500:
    print("-"*40)
    print("\nDiscounts:")
    print("-"*40)
    for discount in discounts:
        print(discount)
    print("-"*40)
    print(f"taxes: {tax:>25.2f}")
    print(f"surcharge: {surcharge:>21.2f}")
    print("-"*40)
    print(f"original amount: {original:>15.2f}")
    print(f"Grand Total: {grand_total:>19.2f}")
    print("-"*40)
else:
#You are not worthy for a receipt if u pay below 500----------------------------------------
    print("-"*40)
    print(f"Grand Total: {grand_total:>19.2f}")
    print("-"*40)



