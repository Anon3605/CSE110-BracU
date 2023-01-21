n=int(input())
if n>=4 and n<=6:
    print("Breakfast")
elif n>=12 and n<=13:
    print("Lunch")
elif n>=16 and n<=17:
    print("Snacks")
elif n>=19 and n<=20:
    print("Dinner")
elif n>=23 or n<=0:
    print("Wrong time")
else:
    print("Patience is a virtue")