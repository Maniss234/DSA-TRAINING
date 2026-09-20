#include <iostream>
#include <string>
using namespace std;

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    
    int start = 0;
    int end = s.length() - 1;
    bool isPalindrome = true;
    
    while (start < end) {
        if (s[start] != s[end]) {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }
    
    if (isPalindrome) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    
    return 0;
}
