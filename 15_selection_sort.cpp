#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int>& nums) {
    int n = nums.size();
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (nums[j] < nums[min_idx]) {
                min_idx = j;
            }
        }
        swap(nums[i], nums[min_idx]);
    }
}

int main() {
    vector<int> nums = {64, 25, 12, 22, 11};
    
    selectionSort(nums);
    
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
