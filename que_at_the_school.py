a, b=input().split()
t=int(b)
s=input()
while t:
    s=s.replace('BG','GB')
    t-=1
print(s)