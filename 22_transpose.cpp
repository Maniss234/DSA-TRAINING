#include <iostream>
#include <vector>
using namespace std;

void printTranspose(const vector<vector<int>>& mat, int r, int c) {

    vector<vector<int>> trans(c, vector<int>(r));
    
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            trans[j][i] = mat[i][j];
        }
    }
    
    
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            cout << trans[i][j] << " ";
        }
        cout << endl;
    }
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
    
    printTranspose(mat, r, c);
    
    return 0;
}
