#include <iostream>

using namespace std;

bool isSymmetric(int mat[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] != mat[j][i]) {
                return false;
            }
        }
    }
    return true;
}

bool isSkewSymmetric(int mat[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] != -mat[j][i]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter the size of the square matrix: ";
    cin >> n;

    int mat[100][100];
    cout << "Enter the matrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    if (isSymmetric(mat, n)) {
        cout << "The matrix is symmetric." << endl;
    } else if (isSkewSymmetric(mat, n)) {
        cout << "The matrix is skew-symmetric." << endl;
    } else {
        cout << "The matrix is neither symmetric nor skew-symmetric." << endl;
    }

    return 0;
}

