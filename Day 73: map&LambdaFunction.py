cube = lambda x: pow(x,3)# complete the lambda function 
def fibonacci(n):     # return a list of fibonacci numbers
    l1 = [0,1]
    for i in range(2,n):
        l1.append(l1[i-2] + l1[i-1])
    return(l1[0:n])


if __name__ == '__main__':
    n = int(input())
    print(list(map(cube, fibonacci(n))))
