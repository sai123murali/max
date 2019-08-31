def lcs(str1, str2):
    arr = [[0]* len(str1)]*len(str2)
    for i in range(len(str2)):
        for j in range(len(str1)):
            if i==0 or j==0:
                if str2[i]==str1[j]:
                    arr[i][j]=1
                else:
                    arr[i][j]=0
            else :
                if str2[i]==str1[j] :
                    arr[i][j] = arr[i-1][j-1]+1
                else :
                    arr[i][j] = max(arr[i-1][j], arr[i][j-1])
   
    return arr[-1][-1]

str1 = input().strip()
str2 = input().strip()
print(lcs(str1, str2))
