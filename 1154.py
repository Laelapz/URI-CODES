/*Codigo numero: 1154
Em: Python
Com titulo: Idades*/ 


val = int(input())
cont=0
tot = 0


while(val>=0):
    cont = cont + 1
    tot = tot + val
    val = int(input())

tot = float(tot)
print("%.2f" %(tot/cont))
