#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& nums) {
    int n = nums.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                swap(nums[j], nums[j + 1]);
            }
        }
    }
}

int main() {
    vector<int> nums = {45, 12, 78, 34, 23, 9};
    
    bubbleSort(nums);
    
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
