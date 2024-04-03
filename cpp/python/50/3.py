# find max of three numbers, only with if statement
def max3(a, b, c):
    if a > b and a > c:
        return a
    elif b > a and b > c:
        return b
    elif c > a and c > b:
        return c
    else:
        return "they are equal"


a = int(input("a = "))
b = int(input("b = "))
c = int(input("c = "))

print(f"{max3(a,b,c)}")
