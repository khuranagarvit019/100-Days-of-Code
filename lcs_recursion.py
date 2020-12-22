def lcs(A,B,i,j):
    if(i==0 or j==0):
        return 0
    elif(A[i -1] == B[j - 1]):
        return 1 + lcs(A,B,i-1, j-1)
    else:
        return max(lcs(A,B,i, j-1), lcs(A,B,i-1, j))
    
if __name__ =='__main__':
    A = "AABRAACAADAABRAA"
    B = "BDBAAD"
    
    i = len(A)
    j = len(B)
    
    print("Length of the LCS is", lcs(A, B, i, j))
