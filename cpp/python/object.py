class myObject:
    def __init__(self, name, id):
        self.name = name
        self.id = id

    def changeObject(self, name, id):
        self.name = name
        self.id = id

    def print(self):
        print("{} va {}".format(self.name, self.id))


kimdir = myObject("Barkamol", 55)
kimdir.print()
kimdir.changeObject("Azamat", 47)
kimdir.print()
