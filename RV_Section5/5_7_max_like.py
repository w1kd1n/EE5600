import numpy as np
import matplotlib.pyplot as plt

import random

X=[]
P_e=[]
maxrange=25000

X=np.random.choice([-1,1], maxrange, p=[0.5, 0.5])

N=np.random.normal(0, 1, maxrange)
N=np.array(N)                   

for i in range(0,11):
    Y=pow(10,i/10)*X+N                        
    P_e0=sum(np.logical_and(Y<0,X>0))/sum(X>0)
    P_e1=sum(np.logical_and(Y>0,X<0))/sum(X<0)

    P_e.append(0.5*P_e0+0.5*P_e1)
    print(P_e[i])
    
plt.plot(np.arange(0,11),P_e)
plt.xlabel("A value")
plt.ylabel("P_e")
plt.show()
