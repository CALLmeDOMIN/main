n = int(input())
tab = [0]*8
x = 0
while(n):
    tab[x] = n % 10
    n/=10
    n = int(n)
    x+=1
print("[", end = '')
for i in range(x):
    print(tab[i], end='')
    if(i != x-1):
        print(",", end = '')
print("]")