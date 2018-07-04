cartas = []
palos = ('Oro', 'Copa', 'Basto', 'Espada' )
for palo in palos:
    for num in range (1, 12):
        cartas.append ('{} de {}'.format(num, palo))

for carta in cartas:
    print( carta )
