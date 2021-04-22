/*Codigo numero: 1172
Em: Python
Com titulo: Substituição*/ 


valores = []

for i in range(10):
    val = int(input())

    if(val>0):
        valores.append(val)
    else:
        valores.append(1)

for i in range(10):
    print("X[{}] = {}".format(i, valores[i]))
