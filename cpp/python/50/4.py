# factorial of given number using recursion
def factorial(n):
    if n == 0:
        return 1
    else:
        return n * factorial(n - 1)


n = int(input("n = "))
res = factorial(n)
print(f"factorial of {n} is - {res}")
