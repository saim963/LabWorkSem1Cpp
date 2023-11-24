#include <iostream>
using namespace std;

// Function to compute the transpose of a matrix
void transposeMatrix(int original[][100], int transposed[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposed[j][i] = original[i][j];
        }
    }
}

int main() {
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int originalMatrix[100][100];
    int transposedMatrix[100][100];


    if ((rows < 0) || (cols < 0)){
        return -1;
    }

    // Input the original matrix
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> originalMatrix[i][j];
        }
    }

    // Compute the transpose of the matrix
    transposeMatrix(originalMatrix, transposedMatrix, rows, cols);

    // Print the transpose matrix
    cout << "Transpose of the matrix:" << endl;
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transposedMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}