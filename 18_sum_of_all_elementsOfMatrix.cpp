#include <iostream>
#include <vector>
using namespace std;

int sumOfMatrix(const vector<vector<int>>& mat, int r, int c) {
    int total_sum = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            total_sum += mat[i][j];
        }
    }
    return total_sum;
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
    
    int result = sumOfMatrix(mat, r, c);
    cout << result << endl;
    
    return 0;
}
