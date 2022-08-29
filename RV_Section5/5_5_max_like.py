import numpy as np
import matplotlib.pyplot as plt
import scipy

maxrange=10000	

X=np.random.choice([-1,1], maxrange, p=[0.5, 0.5])

maxlim=10.0
x = np.linspace(-maxlim,maxlim,maxrange)#points on the x axis
Y=(10**0.5)*X+np.random.normal(0,1,maxrange)


err=0
err_hat =0

for i in range(maxrange):
	if((Y[i]<0) & (X[i]==1)):
		err=err+1
	elif((Y[i]>0) & (X[i]==-1)):
		err_hat+=1



print(err)
print(err_hat)


Pe_0 = err/maxrange
print(Pe_0)	

Pe_1 = err_hat/maxrange
print(Pe_1)	
