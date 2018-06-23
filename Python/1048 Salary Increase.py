a = (0.15, 0.12, 0.10, 0.07, 0.04 )

s = float( input( ))
if   s<=400 :
    i = 0
elif s<=800 :
    i = 1
elif s<=1200:
    i = 2
elif s<=2000:
    i = 3
else       :
    i = 4

print ('Novo salario: {:.2f}'  .format(s*(1+a[i])     ))
print ('Reajuste ganho: {:.2f}'.format(s*(1+a[i]) - s ))
print ('Em percentual: {} %'   .format( int( a[i]*100)))

# Time: 0.016s
