def rotLeft(a, d):
    d = d%len(a)
    a = a[d:]+a[:d]
    b = list(a)
    return b

n,d = map(int,input().split())
a = list(map(int,input().split()))
print(*rotLeft(a, d))
