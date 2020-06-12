import matplotlib.pyplot as plt
import numpy as np

g=9.8
theta=float(input("Enter degrees in Degrees: "))
theta=float(theta*(np.pi/180))
u=float(input("Initial Velocity: "))
ux= u*np.cos(theta)
uy= u*np.sin(theta)
r= ((u*u*np.sin(2*theta))/(2*g))
x=np.arange(0,2*r,0.01)
y= (((np.tan(theta)*x))-((g*x*x)/(2*ux*ux)))
plt.plot(x,y, label="line1")
plt.show()

