#%%
import numpy as np

x = np.array([[12, 4]])
normL2 = np.linalg.norm(x)
print(normL2)

normL1 = np.linalg.norm(x, 1)
print(normL1)


normMAX = np.linalg.norm(x, np.inf)
print(normMAX)
