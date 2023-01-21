m=int(input())
n=int(input())
v=(m/1000)/(n/3600)
print(v,"km/h")
if v<0:
    print("Invalid")
elif v<60:
    print("Too slow. Needs more changes")
elif v<=60 and v>=90:
    print("Velocity is okay. The car is ready!")
else:
    print("Too fast. Only a few changes should suffice.")