def jumpingOnClouds(c):
    x,y = 0,0
    while x<len(c)-2:
        x = x+1 if c[x+2] else x+2
        y+=1
    if x<len(c)-1:
        y+=1
    return y
input()
c = list(map(int,input().split()))
print(jumpingOnClouds(c))


