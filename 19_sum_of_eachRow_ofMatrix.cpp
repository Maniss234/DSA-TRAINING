#include <iostream>
#include <vector>
using namespace std;

void printRowSums(const vector<vector<int>>& mat, int r, int c) {
    for (int i = 0; i < r; i++) {
        int row_sum = 0;
        for (int j = 0; j < c; j++) {
            row_sum += mat[i][j];
        }
        cout << row_sum << " ";
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
    
    printRowSums(mat, r, c);
    
    return 0;
}
