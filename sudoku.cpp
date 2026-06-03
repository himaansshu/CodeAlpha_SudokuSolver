#include <iostream>
using namespace std;

const int N = 9;

// Check if safe to place number
bool isSafe(int grid[N][N], int row, int col, int num) {

    // Row check
    for (int x = 0; x < N; x++)
        if (grid[row][x] == num)
            return false;

    // Column check
    for (int x = 0; x < N; x++)
        if (grid[x][col] == num)
            return false;

    // 3x3 box check
    int startRow = row - row % 3;
    int startCol = col - col % 3;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (grid[i + startRow][j + startCol] == num)
                return false;

    return true;
}

// Backtracking solver
bool solveSudoku(int grid[N][N]) {

    int row = -1, col = -1;
    bool empty = false;

    for (int i = 0; i < N && !empty; i++) {
        for (int j = 0; j < N; j++) {
            if (grid[i][j] == 0) {
                row = i;
                col = j;
                empty = true;
                break;
            }
        }
    }

    // No empty cell = solved
    if (!empty)
        return true;

    // Try numbers
    for (int num = 1; num <= 9; num++) {

        if (isSafe(grid, row, col, num)) {

            grid[row][col] = num;

            if (solveSudoku(grid))
                return true;

            grid[row][col] = 0; // backtrack
        }
    }

    return false;
}

// Print Sudoku
void printGrid(int grid[N][N]) {

    cout << "\nSolved Sudoku:\n\n";

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {

    int grid[N][N];

    cout << "Enter Sudoku (9 rows, 9 numbers each, use 0 for empty):\n";

    // Input
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> grid[i][j];
        }
    }

    // Solve
    if (solveSudoku(grid))
        printGrid(grid);
    else
        cout << "No solution exists!";

    return 0;
}