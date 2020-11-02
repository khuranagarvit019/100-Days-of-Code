#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the bonAppetit function below.
def bonAppetit(n, k, b, bill):
    
    sum1 = 0
    for i in range(n):
        if (i != k):
            sum1 = sum1 + bill[i]
    b1 = sum1//2
    if b1 == b:
        print("Bon Appetit")
    else:
        print(b - b1)

if __name__ == '__main__':
    nk = input().rstrip().split()

    n = int(nk[0])

    k = int(nk[1])

    bill = list(map(int, input().rstrip().split()))

    b = int(input().strip())

    bonAppetit(n, k, b, bill)
