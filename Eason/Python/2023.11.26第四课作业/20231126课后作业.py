a=int(input("请输入商品价钱:"))
b=a*0.85
c=int(1000/b)
print("实付价格：",b,"元")
print("可以买",c,"件")
print("找回",1000-b*c,"元")
