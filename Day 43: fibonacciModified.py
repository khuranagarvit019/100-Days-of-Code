def fib(t1,t2,n):
    for i in range(n-1):
        t1,t2 = t2,t1+t2**2
    return t1

t1,t2,n = map(int,input().split())
print(fib(t1,t2,n))
