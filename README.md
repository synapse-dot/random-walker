# Random Walker

A simple 2D random walk simulation written in C++ with Python-based path visualization.

## Features

- Simulates a 2D lattice random walk
- Stores walker position history
- Exports path data to `path.txt`
- Visualizes the walk using Python and matplotlib

## Project Structure

```text
.
├── main.cpp          # C++ simulation
├── path.txt          # Generated path data
├── plot.py           # Python visualization script
├── requirements.txt
└── README.md
```

## Requirements

### C++
- g++

### Python
Install dependencies:

```bash
pip install -r requirements.txt
```

## Build and Run

Compile:

```bash
g++ main.cpp -Wall -Wextra -o main
```

Run simulation:

```bash
./main
```

This generates:

```text
path.txt
```

## Visualize the Path

Run:

```bash
python plot.py
```

A matplotlib window will display the random walk path.

## Example Concepts Explored

- Random number generation
- 2D lattice random walks
- Dynamic arrays with `std::vector`
- File I/O
- Data visualization
- Simulation workflows

## Future Ideas

- Multiple walkers
- Statistical analysis
- Animated visualization
- Heatmaps
- Different movement rules
