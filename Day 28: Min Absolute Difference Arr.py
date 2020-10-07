def minimumAbsoluteDifference(arr):
    return min(arr[i+1]-arr[i] for i in range(len(arr)-1))


input()
arr = sorted(map(int,input().split()))
print(minimumAbsoluteDifference(arr))
