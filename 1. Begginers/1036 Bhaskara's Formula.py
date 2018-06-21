import math

a, b, c = map( float, input( ).split( ))

if a!=0 and (b**2 - 4*a*c) > 0:
    print( 'R1 = {:.5F}'.format((-b + math.sqrt( b**2 - 4*a*c ) ) / (2*a)))
    print( 'R2 = {:.5F}'.format((-b - math.sqrt( b**2 - 4*a*c ) ) / (2*a)))
else:
    print('Impossivel calcular')

# Time: 0.016s
