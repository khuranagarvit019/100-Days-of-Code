from fractions import Fraction
from functools import reduce

def product(fracs):
    # complete this line with a reduce statement
    result = reduce(lambda x, y : x * y, fracs)
    return result.numerator, result.denominator

if __name__ == '__main__':
    fracs = []
    for _ in range(int(input())):
        fracs.append(Fraction(*map(int, input().split())))
    result = product(fracs)
    print(*result)
