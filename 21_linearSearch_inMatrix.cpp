#include <iostream>
#include <vector>
using namespace std;

void linearSearch(const vector<vector<int>>& mat, int r, int c, int target) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (mat[i][j] == target) {
                cout << i << " " << j << endl;
                return;
            }
        }
    }
    cout << "-1 -1" << endl;
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
    
    int target;
    cin >> target;
    
    linearSearch(mat, r, c, target);
    
    return 0;
}
