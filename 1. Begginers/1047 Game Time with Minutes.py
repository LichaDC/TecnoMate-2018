ih,im, fh, fm = map( int, input( ).split( ))

hs  = fh - ih
min = fm - im

if ih+im/60 > fh+fm/60:
    hs += 24
if im>fm:
    min += 60
    hs -= 1

print('O JOGO DUROU {} HORA(S) E {} MINUTO(S)'.format(hs, min))

# Wrong answer (20%)
