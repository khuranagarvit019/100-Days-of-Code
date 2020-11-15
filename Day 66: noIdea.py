# Enter your code here. Read input from STDIN. Print output to STDOUT
nm = input()
array = input().split()
like = set(input().split())
dislike = set(input().split())
print(sum((i in like) - (i in dislike) for i in array))
