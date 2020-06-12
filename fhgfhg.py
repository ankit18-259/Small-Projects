import matplotlib.pyplot as plt
import numpy as np

g=9.8
theta_deg= float(input("Angle at which ball is thrown"))
theta_rad= theta_deg*(np.pi/180)
vel= float(input("Velocity at which ball is thrown"))
a= np.arange(0.0,5.0,0.1)

y= ((np.tan(theta_rad)*a)-((g*a*a)/2*vel*vel*np.cos(theta_rad)*np.cos(theta_rad)))

plt.plot(a,y)
plt.show()