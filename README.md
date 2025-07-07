# 🚀 Parallel Dijkstra's Algorithm – Shortest Path Finder

This project implements the **parallelized version of Dijkstra’s algorithm** in C++ to compute the shortest path between nodes in a network graph.  
Developed as a **mini project** under the **Computer Networks** course during the **5th semester** at **SRM Institute of Science and Technology (2023)**.

---

## 🧠 Key Concepts

- Graph Theory (Adjacency Matrix)  
- Dijkstra’s Algorithm  
- Multi-threading using C++ (`std::thread`)  
- Optimization for Parallel Execution  

---

## 📁 Project Structure

| File / Folder               | Description                          |
|-----------------------------|--------------------------------------|
| `src/parallel_dijkstra.cpp` | Main C++ source code                 |
| `input/graph.txt`           | Adjacency matrix input               |
| `output/sample-output.txt`  | Output showing shortest distances    |

---

## 📥 Sample Input (`graph.txt`)

```text
0 3 0 0 0 0  
3 0 1 0 0 0  
0 1 0 7 0 2  
0 0 7 0 6 3  
0 0 0 6 0 1  
0 0 2 3 1 0
```

---

## 📤 Sample Output

```text
Source Node: 0

Shortest Distances to all nodes:
Node 0: 0  
Node 1: 3  
Node 2: 4  
Node 3: 11  
Node 4: 12  
Node 5: 6  
```

---

## 🛠️ Compile & Run (macOS/Linux)

```bash
# Navigate to project directory
cd parallel-dijkstra

# Compile the program
g++ src/parallel_dijkstra.cpp -o dijkstra -pthread

# Run the program
./dijkstra
```

> ✅ Ensure `graph.txt` is placed inside the `input` folder  
> ✅ The program reads from the input file and displays output in the terminal or optionally saves to `output/sample-output.txt`

---

## 📄 Disclaimer

This project was developed during **Semester 5** for the **Computer Networks** course at **SRM Institute of Science and Technology**.  
It demonstrates parallel processing using threads to improve the performance of Dijkstra’s algorithm in a simulated network environment.

This code is intended **strictly for academic and educational purposes**.  
It is **not production-ready**, **not optimized for critical systems**, and should not be deployed in real-world applications without formal testing and validation.

© 2023 **Venkat Aditya Vellanki**. All rights reserved.
