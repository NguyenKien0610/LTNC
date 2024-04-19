#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int MAX_SIZE = 10;

void printBoard(char board[][MAX_SIZE], int rows, int cols) {
    cout << "  ";
    for (int j = 0; j < cols; ++j) {
        cout << j << " ";
    }
    cout << endl;
    for (int i = 0; i < rows; ++i) {
        cout << i << " ";
        for (int j = 0; j < cols; ++j) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

void placeMines(char board[][MAX_SIZE], int rows, int cols, int numMines) {
    srand(time(NULL));
    int count = 0;
    while (count < numMines) {
        int x = rand() % rows;
        int y = rand() % cols;
        if (board[x][y] != '*') {
            board[x][y] = '*';
            count++;
        }
    }
}

void generateBoard(char board[][MAX_SIZE], int rows, int cols, int numMines) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            board[i][j] = '.';
        }
    }
    placeMines(board, rows, cols, numMines);
}

int main(int argc, const char* argv[]) {
    if (argc != 4) {
        cout << "Usage: " << argv[0] << " <rows> <cols> <numMines>" << endl;
        return 1;
    }

    int rows = atoi(argv[1]);
    int cols = atoi(argv[2]);
    int numMines = atoi(argv[3]);

    if (rows <= 0 || rows > MAX_SIZE || cols <= 0 || cols > MAX_SIZE || numMines < 0 || numMines >= rows * cols) {
        cout << "Invalid input parameters." << endl;
        return 1;
    }

    char board[MAX_SIZE][MAX_SIZE];
    generateBoard(board, rows, cols, numMines);

    cout << "Welcome to Minesweeper!" << endl;
    printBoard(board, rows, cols);

    return 0;
}

