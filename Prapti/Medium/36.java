public class Solution {

    // Method to check if the current board is valid
    public boolean isValidSudoku(char[][] board) {
        // Check each row and each column for duplicates
        for (int i = 0; i < 9; i++) {
            boolean[] rowCheck = new boolean[9];
            boolean[] colCheck = new boolean[9];
            for (int j = 0; j < 9; j++) {
                // Check if the number in the row is valid
                if (board[i][j] != '.' && rowCheck[board[i][j] - '1']) {
                    return false; // Duplicate found in row
                }
                if (board[i][j] != '.') {
                    rowCheck[board[i][j] - '1'] = true;
                }

                // Check if the number in the column is valid
                if (board[j][i] != '.' && colCheck[board[j][i] - '1']) {
                    return false; // Duplicate found in column
                }
                if (board[j][i] != '.') {
                    colCheck[board[j][i] - '1'] = true;
                }
            }
        }

        // Check each 3x3 subgrid for duplicates
        for (int i = 0; i < 9; i++) {
            boolean[] gridCheck = new boolean[9];
            for (int j = 0; j < 9; j++) {
                int rowIndex = 3 * (i / 3) + j / 3;
                int colIndex = 3 * (i % 3) + j % 3;

                if (board[rowIndex][colIndex] != '.' && gridCheck[board[rowIndex][colIndex] - '1']) {
                    return false; // Duplicate found in the 3x3 grid
                }
                if (board[rowIndex][colIndex] != '.') {
                    gridCheck[board[rowIndex][colIndex] - '1'] = true;
                }
            }
        }

        return true; // No duplicates found, the board is valid
    }
}