#include <iostream>
#include <vector>
using namespace std;

void printColumnMajor(const vector<vector<int>>& mat, int r, int c) {
    for (int j = 0; j < c; j++) {
        for (int i = 0; i < r; i++) {
            cout << mat[i][j] << " ";
        }
    }
    cout << endl;
}

int main() {
    int r, c;
    cin >> r >> c;
    
    
    vector<vector<int>> mat(r, vector<int>(c));
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> mat[i][j];
        }
    }
    
    printColumnMajor(mat, r, c);
    
    return 0;
}

