import matplotlib.pyplot as plt
import numpy as np

path_file = 'path.txt'
x_vals = []
y_vals = []
with open(path_file, 'r') as file:
    lines = [line.strip() for line in file]
    for i in range(len(lines)):
        x, y = lines[i].split(" ")
        x_vals.append(int(x))
        y_vals.append(int(y))

x1 = np.array(x_vals)
y1 = np.array(y_vals)

plt.plot(x1, y1, marker="o")

plt.axis("equal")
plt.xlabel("x(t)")
plt.ylabel("y(t)")
plt.title("Random Walker's Path")

plt.show()
