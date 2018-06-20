c1, u1, p1 = map( float, input( ).split( ))
c2, u2, p2 = map( float, input( ).split( ))

c1 = int(c1)
c2 = int(c2)
u1 = int(u1)
u2 = int(u2)

print ('VALOR A PAGAR: R$ {:.2f}'.format(u1*p1 + u2*p2))
