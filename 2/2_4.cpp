#include <iostream.h>
#include <stdio.h>
#include <conio.h>

const int MAX_ROWS = 3;
const int MAX_COLS = 3;

class Matrix;  // Forward declaration

class SumMatrix {
private:
    int matrix[MAX_ROWS][MAX_COLS];

public:
    // Friend function declaration
    friend SumMatrix addMatrices(const Matrix& m1, const Matrix& m2);

    // Display the sum matrix
    void display();
};

class Matrix {
private:
    int matrix[MAX_ROWS][MAX_COLS];

public:
    // Friend function declaration
    friend SumMatrix addMatrices(const Matrix& m1, const Matrix& m2);

    // Input matrix elements
    void inputMatrix();

    // Display the matrix
    void display();
};

// Friend function definition for adding two matrices
SumMatrix addMatrices(const Matrix& m1, const Matrix& m2) {
    SumMatrix result;

    // Add the corresponding elements of matrices m1 and m2
    for (int i = 0; i < MAX_ROWS; ++i) {
        for (int j = 0; j < MAX_COLS; ++j) {
            result.matrix[i][j] = m1.matrix[i][j] + m2.matrix[i][j];
        }
    }

    return result;
}

// Display the sum matrix
void SumMatrix::display() {
    cout << "Sum Matrix:\n";
    for (int i = 0; i < MAX_ROWS; ++i) {
        for (int j = 0; j < MAX_COLS; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// Input matrix elements
void Matrix::inputMatrix() {
    cout << "Enter matrix elements (3x3):\n";
    for (int i = 0; i < MAX_ROWS; ++i) {
        for (int j = 0; j < MAX_COLS; ++j) {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}

// Display the matrix
void Matrix::display() {
    cout << "Matrix:\n";
    for (int i = 0; i < MAX_ROWS; ++i) {
        for (int j = 0; j < MAX_COLS; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    // Create two Matrix objects
    Matrix matrix1, matrix2;

    // Input matrix elements for both matrices
    clrscr(); // Clear the screen

    cout << "Hiral" << endl;
    cout << "239112" << endl;

    cout << "Matrix 1:\n";
    matrix1.inputMatrix();
    cout << "\nMatrix 2:\n";
    matrix2.inputMatrix();

    // Use the friend function to add matrices
    SumMatrix sum = addMatrices(matrix1, matrix2);

    // Display the original matrices
    cout << "\nOriginal Matrices:\n";
    matrix1.display();
    matrix2.display();

    // Display the sum of matrices
    cout << "\nSum of Matrices:\n";
    sum.display();

    getch(); // Wait for a key press
    return 0;
}