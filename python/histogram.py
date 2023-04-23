import matplotlib.pyplot as plt

# Sample data
data = [3, 4, 5, 6, 7, 8, 3, 4, 5, 6, 7, 8, 5, 6, 7, 8, 9, 10]

# Plot histogram
'''
plt.hist(data, bins=5, color='steelblue', alpha=0.8)  # bins specify the number of bins in the histogram
plt.xlabel('X-axis Label')  # Label for X-axis
plt.ylabel('Y-axis Label')  # Label for Y-axis
plt.title('Histogram Example')  # Title of the histogram
plt.grid(True)  # Show grid
plt.show()  # Show the histogram
'''
[x.show() for x in plt.hist(data, bins=5, color='steelblue', alpha=0.8)]
