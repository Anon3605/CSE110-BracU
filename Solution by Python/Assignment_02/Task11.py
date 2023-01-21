s=int(input())
L=3000-125*(s**2)
l=12000/((4+s**2)/14900)
if s<100:
    print(L)
else:
    print(l)