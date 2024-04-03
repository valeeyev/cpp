# check n is odd or even
def od_or_even(n):
    if n % 2 == 0:
        return "even"
    else:
        return "odd"


n = 5
res = od_or_even(n)
print(f"{n} is {res}")
n = 6
res = od_or_even(n)
print(f"{n} is {res}")
