p = [100, 50, 20, 10, 5, 2, 1]
n = int( input( ))
c = []
print(n)

for i in range(0,7):
    c.append( int (n/p[i]))
    n -= c[i] * p[i]
    print('{} nota(s) de R$ {},00'.format(c[i], p[i]))

# Time: 0.016s
