import random

cartas = []
palos = ('Oro', 'Copa', 'Basto', 'Espada' )
def generar():
    for palo in palos:
        for num in range (1, 12):
            if num < 10:
                cartas.append ('0{} de {}'.format(num, palo))
            else:
                cartas.append ('{} de {}'.format(num, palo))
def mostrar():
    for carta in cartas:
        print( carta )

def mezclar():
    return random.shuffle( lista )

def repartir():
    mezclar()
    j1 = [ cartas[0], cartas[1], cartas[2] ]
    pc = [ cartas[3], cartas[4], cartas[5] ]
# --- MAIN --- #

generar()
mostrar()
repartir()
print('\n' * 50)
mostrar()
