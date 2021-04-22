/*Codigo numero: 2936
Em: Python
Com titulo: Quanta*/ 


porcoes = []
soma = 0

porcoes.append(300)
porcoes.append(1500)
porcoes.append(600)
porcoes.append(1000)
porcoes.append(150)

for i in range(5):
    val = int(input())
    soma = soma + val*porcoes[i]

print(soma+225)
