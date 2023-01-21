m=float(input())
n=int(input())

if m<0 or m>4:
    print("Invalid CGPA")
elif n<0 or n>136:
    print("Invalid credit count")
elif m<3.8 or n<30:
    print("The student is not eligible for a waiver")
elif m==4:
    print("The student is eligible for a waiver of 100 percent.")
elif m>=3.95:
    print("The student is eligible for a waiver of 75 percent.")
elif m>=3.90:
    print("The student is eligible for a waiver of 50 percent.")
else:
    print("The student is eligible for a waiver of 25 percent.")