people = [
    {"name": "Barkamol", "number": "+99891-123-45-67"},
    {"name": "Azamat", "number": "+99891-143-45-67"},
    {"name": "Ibrohim", "number": "+99891-199-45-67"},
]
ism = input("kim? ")

for person in people:
    if person["name"] == ism:

        print(f"mana :) {person['number']}")
        break
else:
    print("yo'q ekan :(")
