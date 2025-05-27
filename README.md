# Floyd-Warshall Algorithm in C++

This repository contains an implementation of the **Floyd-Warshall Algorithm** for finding the shortest paths between all pairs of vertices in a directed graph.

## 📄 File

- `FloydWarshall.cpp`: C++ source code implementing the Floyd-Warshall algorithm.

## 📌 Algorithm Overview

The Floyd-Warshall algorithm is a dynamic programming method used to find the shortest distances between all pairs of vertices in a weighted graph. It can handle negative edge weights (but **no negative cycles**).

### Time Complexity
O(V³), where V is the number of vertices

## 🚀 How to Run

### 1. Compile the code:
```bash
g++ FloydWarshall.cpp -o FloydWarshall
./FloydWarshall

🛠 Features
Handles directed weighted graphs

Detects unreachable paths

Easy-to-read output

🔍 Notes
Uses INT_MAX to represent infinity

Matrix is 1-indexed for simplicity


