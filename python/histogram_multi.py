import matplotlib.pyplot as plt
import random

# Sample data
data_list = [3, 4, 5, 6, 7, 8, 3, 4, 5, 6, 7, 8, 5, 6, 7, 8, 9, 10]

data = lambda : [random.randint(1,10) for i in range(50)]

ROWS = 5
COLS = 10
fit , ax = plt.subplots(ROWS, COLS)
# Plot histogram
#plt.hist(data, bins=5, color='steelblue', alpha=0.8)  # bins specify the number of bins in the histogram
#ax[0,0].hist(data(), bins=5, color='steelblue', alpha=0.8)  # bins specify the number of bins in the histogram

[ax[i, j].hist(data(), bins=5, color='steelblue', alpha=0.8) for i in range(ROWS) for j in range(COLS)] # bins specify the number of bins in the histogram
#plt.xlabel('X-axis Label')  # Label for X-axis
ax[0,0].set_xlabel('X-axis Label')  # Label for X-axis
#plt.ylabel('Y-axis Label')  # Label for Y-axis
ax[0, 0].set_ylabel('Y-axis Label')  # Label for Y-axis
#plt.title('Histogram Example')  # Title of the histogram
#plt.title('Histogram Example')  # Title of the histogram
ax[0, 0 ].set_title('Histogram Example')  # Title of the histogram
#plt.grid(True)  # Show grid
plt.show()  # Show the histogram

