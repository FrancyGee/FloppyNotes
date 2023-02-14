#%%
import numpy as np


x = np.array([[25, 2, 5]])              # Row Vector
#print(x)
#print(f'Shape of x is: {x.shape}')      # (1, 3)

xT = x.T                                # Trasposta
#print(xT)
#print(f'Shape of xT is {xT.shape}')     # (1, 3)


np.zeros(3)  # Zeros Vector


# SUM
x1 = np.array([[1],
               [2],
               [3]])

y1 = np.array([[1],
               [2],
               [3]])

z1 = x1 + y1
#print(z1)


# SCALAR PRODUCT
alpha = 2
z2 = alpha * x1
#print(z2)


# PRODUCT OF VECTORS

zp = x1.T @ y1
#print(zp)


# Linear Combination
a, b = 2, 3
zl = x1*a + y1 * b
#print(zl)