n=input("请输入您喜欢的图案:")
#row=input("请输入要打印的行数:")
print(" "*9+n*1)
print(" "*8+n*3)
print(" "*7+n*5)
print(" "*6+n*7)
print(" "*5+n*9)
print(" "*5+n*9)
print(" "*6+n*7)
print(" "*7+n*5)
print(" "*8+n*3)
print(" "*9+n*1)
"""
for i in range(0,int(row)):
    print(" "*(int(row)-i-1)+n*(2*i+1))
#print()
for i in range(int(row)-1,0,-1):
    print(" "*(int(row)-i)+n*(2*i-1))
"""
