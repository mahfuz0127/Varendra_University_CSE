#include <iostream>
using namespace std;

int** createMatrix(int rows, int cols) {
    int** mat = new int*[rows];
    for (int i = 0; i < rows; ++i)
        mat[i] = new int[cols];
    return mat;
}

void inputMatrix(int** mat, int rows, int cols, char name) {
    cout << "Enter elements of Matrix " << name << " (" << rows << "x" << cols << "):\n";
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            cin >> mat[i][j];
}

void printMatrix(int** mat, int rows, int cols) {
    cout << "Resultant Matrix:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j)
            cout << mat[i][j] << " ";
        cout << endl;
    }
}

void multiplyMatrices(int** A, int** B, int** C, int m, int n, int p) {
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < p; ++j)
            C[i][j] = 0;

    for (int i = 0; i < m; ++i)
        for (int j = 0; j < p; ++j)
            for (int k = 0; k < n; ++k)
                C[i][j] += A[i][k] * B[k][j];
}

int main() {
    int m, n, p;
    cout << "Enter rows of A (m): ";
    cin >> m;
    cout << "Enter columns of A / rows of B (n): ";
    cin >> n;
    cout << "Enter columns of B (p): ";
    cin >> p;

    int** A = createMatrix(m, n);
    int** B = createMatrix(n, p);
    int** C = createMatrix(m, p);

    inputMatrix(A, m, n, 'A');
    inputMatrix(B, n, p, 'B');

    multiplyMatrices(A, B, C, m, n, p);

    printMatrix(C, m, p);
    return 0;
}
