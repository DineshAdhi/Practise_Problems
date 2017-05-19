


n,m,k = map(int, raw_input().split())


mat = []

for i in range(n):
    mat.append([int(0)]*m)

while(k>0):
    r,a,b = map(int, raw_input().split())
    for i in range(a-1,b):
        mat[r-1][i] = int(1);
    k = k-1;

count = int(0);

for i in range(n):
    for j in range(m):
        if(mat[i][j]==int(0)):
            count = count + 1;

print count
