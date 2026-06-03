# 🧩 Sudoku Solver (C++)

Sudoku Solver is a C++ based project that efficiently solves a 9x9 Sudoku puzzle using the Backtracking algorithm. It automatically fills empty cells while ensuring all Sudoku constraints are satisfied.

## ✨ Features
- ✔ Solves any valid 9x9 Sudoku puzzle  
- ✔ Optimized Backtracking algorithm  
- ✔ Clean and modular code structure  
- ✔ Console-based execution  
- ✔ Easy to understand and extend  

## 🛠️ Tech Stack
- **Language:** C++  
- **Concepts:** Recursion, Backtracking  
- **Libraries:** iostream, vector  

## 📥 Input Format
- 9x9 Sudoku grid  
- Empty cells represented by `0`  

```
5 3 0 0 7 0 0 0 0
6 0 0 1 9 5 0 0 0
0 9 8 0 0 0 0 6 0
...
```

## 📤 Output
- Fully solved Sudoku grid  

```
5 3 4 6 7 8 9 1 2
6 7 2 1 9 5 3 4 8
...
```

## 🧠 How It Works
The solver uses **Backtracking**:
1. Find an empty cell  
2. Try numbers (1–9)  
3. Validate row, column, and 3x3 grid  
4. Recursively solve remaining grid  
5. Backtrack if needed  

## ▶️ Run Locally
```bash
g++ sudoku.cpp -o sudoku
./sudoku
```

## 📂 Project Structure
```
📁 Sudoku-Solver
 ├── sudoku.cpp
 └── README.md
```

## 🚀 Future Improvements
- GUI version (Qt / Web)
- Speed optimization
- Difficulty level detection
- Input validation system

## 👨‍💻 Author
**Himanshu Kumar**

---

⭐ If you like this project, consider giving it a star!
