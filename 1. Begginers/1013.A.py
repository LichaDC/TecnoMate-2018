def mayor(x, y):
    return int( (x + y + abs(x-y)) / 2)

a, b, c = map(int, input().split())

print (mayor (mayor (a,b), c), 'eh o maior')
