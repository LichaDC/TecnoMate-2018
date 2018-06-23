i, f = map( int, input( ).split( ))

if f>i:
    print('O JOGO DUROU {} HORA(S)'.format(f-i))
else:
    print('O JOGO DUROU {} HORA(S)'.format(24+f-i))

# Time: 0.016s
