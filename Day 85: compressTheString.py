# Enter your code here. Read input from STDIN. Print output to STDOUT
a=input()
s=''
for i in range(0,len(a)):
    if i!=0:
        if a[i]==a[i-1]:  
            continue
    p=0
    for j in range(i,len(a)):
        if a[i]==a[j]:
            p+=1
        else:
            break
    s+='('+str(p)+', '+a[i]+')'+' '
print(s)
