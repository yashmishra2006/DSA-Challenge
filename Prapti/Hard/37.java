public class Solution {

    // Method to check if it's safe to place the digit at the given position
    public boolean isSafe(char[][] board, int row, int col, char digit) {
        // Column check
        for (int i = 0; i < 9; i++) {
            if (board[i][col] == digit) {
                return false;
            }
        }

        // Row check
        for (int j = 0; j < 9; j++) {
            if (board[row][j] == digit) {
                return false;
            }
        }

        // 3x3 Subgrid check
        int startRow = row - row % 3;
        int startCol = col - col % 3;
        for (int i = 0; i < 3; i++) {
            for (int k = 0; k < 3; k++) {
                if (board[startRow + i][startCol + k] == digit) {
                    return false;
                }
            }
        }

        return true;
    }

    // Modified solveSudoku method that only takes the board as a parameter
    public boolean solveSudoku(char[][] board) {
        return solve(board, 0, 0);
    }

    // Helper method that handles the recursive backtracking with row and column parameters
    private boolean solve(char[][] board, int row, int col) {
        if (row == 9) {
            return true; // Sudoku is solved
        }

        int nextRow = row, nextCol = col + 1;
        if (nextCol == 9) {
            nextRow = row + 1;
            nextCol = 0;
        }

        if (board[row][col] != '.') {
            return solve(board, nextRow, nextCol); // Skip pre-filled cells
        }

        for (char digit = '1'; digit <= '9'; digit++) {
            if (isSafe(board, row, col, digit)) {
                board[row][col] = digit; // Try placing the digit
                if (solve(board, nextRow, nextCol)) {
                    return true; // If we reach here, the Sudoku is solved
                }
                board[row][col] = '.'; // Backtrack if the digit doesn't work
            }
        }

        return false; // No solution found
    }

    // Print the board in a readable format
    public void printSudoku(char[][] board) {
        System.out.println("Sudoku Board:");
        for (int i = 0; i < 9; i++) {
            if (i % 3 == 0 && i != 0) {
                System.out.println("---------------------");
            }
            for (int j = 0; j < 9; j++) {
                if (j % 3 == 0 && j != 0) {
                    System.out.print("| ");
                }
                System.out.print(board[i][j] + " ");
            }
            System.out.println();
        }
    }
}