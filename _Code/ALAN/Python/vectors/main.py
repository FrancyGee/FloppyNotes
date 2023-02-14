#%%
import numpy as np
import matplotlib.pyplot as plt


t = np.linspace(0, 40, 1000)    # inizio, fine, n punti

robber_dist = 2.5 * t
police_dist = 3 * (t - 5)


# PLOT
fix, ax = plt.subplots()
plt.title('Robber Caught')
plt.xlabel('Time (in minutes)')
plt.ylabel('Distanza (in kilometers)')
ax.set_xlim([0, 40])
ax.set_ylim([0, 100])
ax.plot(t, robber_dist, c='green')
ax.plot(t, police_dist, c='blue')
plt.axvline(x=30, color='purple', linestyle='--')
_ = plt.axhline(y=75, color='purple', linestyle='--')