import numpy as np
import matplotlib.pyplot as plt
import scipy

maxrange=10000

X=np.random.choice([-1,1], maxrange, p=[0.5, 0.5])
print(X)

maxlim=10.0
x = np.linspace(0,maxlim,maxrange)#points on the x axis


Y=(10**0.5)*X+np.random.normal(0,1,maxrange)

plt.scatter(x,Y)
plt.show()
