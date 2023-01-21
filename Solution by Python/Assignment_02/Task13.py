n=int(input())
if n<0 or n>100:
    print("Invalid")
elif n>=90:
    print("A")
elif n>=80:
    print("B")
elif n>=70:
    print("C")
elif n>=60:
    print("D")
elif n>=50:
    print("E")
else:
    print("F")