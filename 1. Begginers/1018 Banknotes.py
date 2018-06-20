p = [100, 50, 20, 10, 5, 2, 1]
n = int( input( ))
c = []
print(n)
i = 0
for i in range(7):
    c.append( int (n/p[i]))
    n -= c[i] * p[i]
    print('{} nota(s) de R$ {},00'.format(c[i], p[i]))

# Time: 0.016s
