import numpy as np
import matplotlib.pyplot as plt
from scipy.interpolate import CubicSpline

time_values = np.array([120,240,360,480,600,720,840,960,1080,1200,1320,1440,1560,1680,1800,1920,2040,2160,2280,2400,2520,2640,2760,2880,3000,3120,3240])
temperature1_values = np.array([20.9,21.5,22.7,24.4,26.4,28.6,30.8,32.7,34.5,35.9,36.9,37.8,38.8,39.8,40.7,41.7,42.7,43.6,44.6,45.5,46.4,47.3,48.0,48.1,48.1,48.0,48.1])
temperature2_values = np.array([30.5,38.0,45.1,51.4,57,60.2,59.3,59.1,59.1,59.1,59.1,59.1,59.1,59.1,59.1,59.1,59.1,59.1,59.1,59.1,59.1,59.1,59.5,59.1,59.1,59.1,59.1])

# Cubic spline interpolation
cs_temp1 = CubicSpline(time_values, temperature1_values)
cs_temp2 = CubicSpline(time_values, temperature2_values)

# Plotting
plt.figure(figsize=(10, 6))
plt.plot(time_values, temperature1_values, 'o', label='Temperature 1 Data')
plt.plot(time_values, temperature2_values, 'o', label='Temperature 2 Data')
plt.plot(time_values, cs_temp1(time_values), '-', label='Temperature 1 Interpolation')
plt.plot(time_values, cs_temp2(time_values), '-', label='Temperature 2 Interpolation')
plt.xlabel('Time')
plt.ylabel('Temperature')
plt.title('Temperature Variation over Time')
plt.legend()
plt.grid(True)
plt.show()
