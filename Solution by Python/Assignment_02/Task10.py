n=int(input())
if n<0:
    print("Hour cannot be negative")
elif n>168:
    print("Impossible to work more than 168 hours weekly")
elif n<=40:
    print(n*200)
else:
    print(8000+(n-40)*300)