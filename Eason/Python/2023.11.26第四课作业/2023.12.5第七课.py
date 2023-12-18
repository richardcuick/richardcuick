"""
n=int(input())
if n%4==0 and n%100!=0 or n%400==0:
    print("True")
else:
    print("False")
"""
a=int(input())
b=int(input())
c=int(input())
if a<=b and a<=c:
    print(a)
elif b<=a and b<=c:
    print(b)
elif c<=a and c<=b:
    print(c)
