/*Codigo numero: 1065
Em: Python
Com titulo: Pares*/ 


contador = 0

for i in range(5):
    val = int(input())

    if(val%2==0):
        contador = contador + 1

print("{} valores pares".format(contador))
