#include <iostream>
#include <vector>
using namespace std;

void printMaxDiagonal(const vector<vector<int>>& mat, int n) {
    int primary_sum = 0;
    int secondary_sum = 0;
    
    for (int i = 0; i < n; i++) {
        primary_sum += mat[i][i];
        secondary_sum += mat[i][n - 1 - i];
    }
    
    if (primary_sum >= secondary_sum) {
        for (int i = 0; i < n; i++) {
            cout << mat[i][i] << " ";
        }
    } else {
        for (int i = 0; i < n; i++) {
            cout << mat[i][n - 1 - i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n; 
    
    vector<vector<int>> mat(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }
    
    printMaxDiagonal(mat, n);
    
    return 0;
}
