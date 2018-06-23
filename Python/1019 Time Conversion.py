seg = int( input( ))
h =  seg           // 3600
m = (seg - h*3600) // 60
s =  seg - h*3600 - m*60
print('{}:{}:{}'.format(h, m, s))

# Time: 0.020s


s = int( input( ))
print('{}:{}:{}'.format(
      s//3600,
(s  -   s//3600  *3600)  //60,
 s  -  (s//3600) *3600  -  (s - s//3600 *3600) //60 *60
 ))

# Time: 0.016s
