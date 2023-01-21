m=int(input())
n=int(input())
tt=(m*120)+(n*75)
if tt<0:
    print("Invalid")
elif tt<300:
    print(f"Previous total: {tt} \nNew total after discount: {tt}")
elif tt<500:
    print(f"Previous total: {tt} \nNew total after discount: {tt-10}")
elif tt<750:
    print(f"Previous total: {tt} \nNew total after discount: {tt-20}")
elif tt<100:
    print(f"Previous total: {tt} \nNew total after discount: {tt-50}")
else:
    print(f"Previous total: {tt} \nNew total after discount: {tt-150}")
