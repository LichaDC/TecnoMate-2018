def mayor(x, y):
    return int( (x + y + abs(x-y)) / 2)

a, b, c = map(int, input().split())

print (mayor (mayor (a,b), c), 'eh o maior')

# Time: 0.024s


a, b, c = map(int, input().split())

if a > b and a > c:
    mayor = a
elif b > a  and b > c:
    mayor = b
else:
    mayor = c

print (mayor, 'eh o maior')

# Time: 0.016s
