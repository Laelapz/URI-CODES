/*Codigo numero: 1079
Em: Python
Com titulo: Médias*/ 


val = int(input())

for i in range(val):
    n1,n2,n3 = input().split(" ")
    n1 = float(n1)
    n2 = float(n2)
    n3 = float(n3)

    print(round(((n1*2)+(n2*3)+(n3*5))/10, 1))

