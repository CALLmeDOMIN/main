x = int(input())
s = input()
var = 0
for i in range(x-1):
    if(s[i-1] == s[i]):
        var+=1
print(var)