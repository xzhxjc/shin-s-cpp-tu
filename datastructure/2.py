import numpy as np

time_values = np.array([360,390,420,450,480,510,540,570,600,630,660])
temperature_values = np.array([49.8,49.4,49.0,48.6,48.4,48.0,47.6,47.2,46.9,46.5,46.1])

# Calculate time differences and temperature differences
time_diff = np.diff(time_values)
temp_diff = np.diff(temperature_values)

# Calculate cooling rates
cooling_rate = temp_diff / time_diff

# Calculate average cooling rate
average_cooling_rate = np.mean(cooling_rate)

# Print average cooling rate
print("Average cooling rate:", average_cooling_rate, "degrees per second")
