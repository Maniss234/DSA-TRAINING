#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    
    if (!s.empty()) {
        cout << s[0] << endl;
        cout << s[s.length() - 1] << endl;
    }
    
    return 0;
}
