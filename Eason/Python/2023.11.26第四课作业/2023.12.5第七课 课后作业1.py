a=int(input())
c=int(input())
b=input()
if b=="+":
    d=a+c
elif b=="-":
    d=a-c
elif b=="*":
    d=a*c
else:
    d=a/c

print(str(a)+b+str(c)+"="+str(d))
