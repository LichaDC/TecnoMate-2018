list = list(map( float, input( ).split( )))
list.sort(reverse=True)
a=list[0]
b=list[1]
c=list[2]

if a >= b + c:
    print('NAO FORMA TRIANGULO')
elif a**2 == b**2 + c**2:
    print('TRIANGULO RETANGULO')
elif a**2 > b**2 + c**2:
    print('TRIANGULO OBTUSANGULO')
elif a**2 < b**2 + c**2:
    print('TRIANGULO ACUTANGULO')

if a==b and a==c:
    print('TRIANGULO EQUILATERO')
elif a==b or a==c or b==c:
    print('TRIANGULO ISOSCELES')

# Time: 0.020s
