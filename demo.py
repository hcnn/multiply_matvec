
import numpy as np 

n=3
m=4

y = np.matrix([1,2,3,4]).reshape((m,1)) 
print("\ny =\n", y)

A = np.matrix([1, 2, 3, 4, 5, 6, 7, 8, 9,10,11,12]).reshape((n,m))
print("\nA =\n", A)

z = A*y
print("\nz =\n", z)
