# day = int( input( ))
# a =  day          // 365
# m = (day - a*365) // 30
# d =  day - a*365 - m*30
# print(a, 'ano(s)')
# print(m, 'mes(es)')
# print(d, 'dia(s)')

# Time: 0.016s


# day = int( input( ))
# a =  day          // 365
# m = (day - a*365) // 30
# d =  day - a*365 - m*30
# print(
# '''{} ano(s)
# {} mes(es)
# {} dia(s)'''.format(a, m, d))

# Time: 0.016s

day = int( input( ))
print(day//365, 'ano(s)')
print((day-day//365*365)//30, 'mes(es)')
print(day-day//365*365-(day-day//365*365)//30*30, 'dia(s)')
