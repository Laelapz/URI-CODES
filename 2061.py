/*Codigo numero: 2061
Em: Python
Com titulo: As*/ 


n, m = input().split()

n = int(n)
m = int(m)

for i in range(m):
    palavra = input()

    if(palavra == "fechou"):
        n = n + 1
    elif(palavra == "clicou"):
        n = n - 1

print(n)


