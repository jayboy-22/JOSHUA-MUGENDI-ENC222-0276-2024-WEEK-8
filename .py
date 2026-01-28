class Square:
    def __init__(self, side):
        self.side = side

    def getPeri(self):
        return 4 * self.side

    def getArea(self):
        return self.side ** 2


class Cube(Square):
    def getVolume(self):
        return self.side ** 3


c = Cube(4)
print("Area:", c.getArea())
print("Volume:", c.getVolume())
