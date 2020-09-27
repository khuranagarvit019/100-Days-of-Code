#!/bin/python3

import os

# Complete the pairs function below.
def pairs(k, arr):
    a = set(arr)
    # make a set of all a[i] + k
    b = set(x + k for x in arr)
    # return the length of the intersection set
    return len(a&b)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nk = input().split()

    n = int(nk[0])

    k = int(nk[1])

    arr = list(map(int, input().rstrip().split()))

    result = pairs(k, arr)

    fptr.write(str(result) + '\n')

    fptr.close()
