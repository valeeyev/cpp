def getin(promt):
    while True:
        try:
            return int(input(promt))
        except ValueError:
            print("integer emas")


def main():
    a = getin("a ")
    b = getin("b ")
    print(a + b)

main()