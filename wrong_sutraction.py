a, b = input().split()
x=int(a)
y=int(b)
while y!=0:
    if x%10==0:
        x=x/10
    else:
        x=x-1
    y=y-1
print(int(x))
