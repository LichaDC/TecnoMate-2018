a, b, c = map(int, input().split())

if a > b and a > c:
    mayor = a
elif b > a  and b > c:
    mayor = b
else:
    mayor = c

print (mayor, 'eh o maior')
