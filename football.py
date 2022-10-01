x=input()
result=True
if "1111111" in x:
    result=True
elif "0000000" in x:
    result=True
else:
    result=False
if result==True:
    print("YES")
else:
    print("NO")
