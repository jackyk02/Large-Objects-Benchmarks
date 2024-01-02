import matplotlib.pyplot as plt
import seaborn as sns
import numpy as np

# Object sizes
object_sizes = ['1MB', '10MB', '25MB', '50MB']

# New data: mean values for each configuration in milliseconds
ros2_means = [x * 1000 for x in [0.1346, 1.1176, 2.73902439, 5.522666667]]
lf_means = [x * 1000 for x in [0.07683, 0.1928, 0.373, 0.736333333]]
lf_optimized_means = [x * 1000 for x in [0.02602, 0.0359, 0.0391, 0.0683]]

# Bar chart settings
bar_width = 0.2
index = np.arange(len(object_sizes))

# Set the style for the plot and the colors
sns.set_style("whitegrid")
color_ros2 = '#6699ff'
color_lf = '#ff6666'
color_lf_optimized = '#9999ff'

# Plot ROS2 mean values
plt.figure(figsize=(10, 6))

# Re-plotting the bar chart with the same data and settings
plt.bar(index, ros2_means, bar_width, label='ROS2 Humble', color=color_ros2)
plt.bar(index + bar_width, lf_means, bar_width,
        label='LF Centralized', color=color_lf)
plt.bar(index + 2 * bar_width, lf_optimized_means, bar_width,
        label='LF Centralized with Optimizations', color=color_lf_optimized)

plt.xlabel('Object Size')
plt.ylabel('Time (milliseconds)')
plt.title(
    'Mean Overhead of Broadcast and Gather on 4 actors \n with Different Object Sizes')
plt.xticks(index + bar_width, object_sizes)

# Adjusting the y-axis to logarithmic scale with custom ticks
plt.yticks([10, 100, 1000], ['10', '100', '1000'])

plt.legend()
plt.tight_layout()
plt.show()
