F=float(input())
C=(F-32)*0.56
print(f"{int(C)} degrees C")
if C<20:
    print("Winter")
elif C>=20 and C<=25:
    print("Autumn")
elif C>25 and C<30:
    print("Spring")
else:
    print("Summer")