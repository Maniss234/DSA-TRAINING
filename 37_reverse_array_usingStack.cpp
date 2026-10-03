#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void reverseArray(vector<int>& nums) {
    stack<int> st;
    for (int num : nums) {
        st.push(num);
    }
    for (int i = 0; i < nums.size(); i++) {
        nums[i] = st.top();
        st.pop();
    }
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    
    reverseArray(nums);
    
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
