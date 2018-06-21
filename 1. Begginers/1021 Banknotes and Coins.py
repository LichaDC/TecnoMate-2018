p = [100, 50, 20, 10, 5, 2, 1, 0.50, 0.25, 0.10, 0.05, 0.01]
c = []

n = float( input( ))

print('NOTAS:')
for i in range(0,6):
    c.append( int (n//p[i]))
    print('{} nota(s) de R$ {:.2f}'.format(c[i], p[i]))
    n -= c[i] * p[i]


print('MOEDAS:')
for i in range(6,12):
    c.append( int (n//p[i]))
    print('{} moeda(s) de R$ {:.2f}'.format(c[i], p[i]))
    n -= c[i] * p[i]

# Problemas con los decimales del float






p = (100, 50, 20, 10, 5, 2, 1, 0.50, 0.25, 0.10, 0.05, 0.01)

n = float( input( ))
print('NOTAS:')
for i in range(0,6):
    print('{} nota(s) de R$ {:.2f}'.format(int (n//p[i]), p[i]))
    n = round (n - int(n//p[i]) * p[i], 2)

print('MOEDAS:')
for i in range(6,12):
    print('{} moeda(s) de R$ {:.2f}'.format(int (n//p[i]), p[i]))
    n = round (n - int(n//p[i]) * p[i], 2)

# Wrong answer (10%)
