random_list = [44, 55, 54]

n = int(input("n- "))
found = False
for i in random_list:
    if n == i:
        found = True
        break

if found is True:
    print("found")
else:
    print("not found")
