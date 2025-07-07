# 🚀 Parallel Dijkstra's Algorithm – Shortest Path Finder

This project implements the parallelized version of Dijkstra’s algorithm in C++ to compute the shortest path between nodes in a network graph.  
Developed as a mini project under the Computer Networks course during the 5th semester at SRM Institute of Science and Technology (2023).

## 🧠 Key Concepts

- Graph Theory (Adjacency Matrix)
- Dijkstra’s Algorithm
- Multi-threading using C++ (std::thread)
- Optimization for parallel execution

## 📁 Project Structure

- `src/parallel_dijkstra.cpp` – Main C++ program
- `input/graph.txt` – Input adjacency matrix
- `output/sample-output.txt` – Shortest path result

## 📥 Sample Input (`graph.txt`)

0 3 0 0 0 0
3 0 1 0 0 0
0 1 0 7 0 2
0 0 7 0 6 3
0 0 0 6 0 1
0 0 2 3 1 0


## 📤 Sample Output

Source Node: 0

Shortest Distances to all nodes:
Node 0: 0
Node 1: 3
Node 2: 4
Node 3: 11
Node 4: 12
Node 5: 6


## 🛠 Compile & Run (macOS/Linux)

```bash
g++ src/parallel_dijkstra.cpp -o dijkstra -pthread
./dijkstra

---

## 📄 Disclaimer

This project was created during Semester 5 for the **Computer Networks** course. It demonstrates the concept of parallelization of Dijkstra’s shortest path algorithm using C++.

The code and algorithmic model are meant **only for academic understanding and simulation**. They are not optimized for deployment in critical network infrastructure or large-scale systems.

© 2023 **Venkat Aditya Vellanki**. All rights reserved.

