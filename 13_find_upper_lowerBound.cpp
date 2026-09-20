#include <iostream>
#include<vector>
using namespace std;

    // 1. Lower Bound Function
    int lowerBound(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1;
        int ans = nums.size(); 
        
        while (start <= end) {
            int mid = start + (end - start) / 2;
            
            if (nums[mid] >= target) {
                ans = mid;     
                end = mid - 1; 
            } else {
                start = mid + 1; 
            }
        }
        return ans;
    }

    // 2. Upper Bound Function
    int upperBound(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1;
        int ans = nums.size();
        
        while (start <= end) {
            int mid = start + (end - start) / 2;
            
            if (nums[mid] > target) {
                ans = mid;     
                end = mid - 1; 
            } else {
                start = mid + 1; 
            }
        }
        return ans;
    }


    int main(){

    vector<int> nums = {1, 2, 4, 4, 5, 6, 7};
    int target = 4;
    
    int lb = lowerBound(nums, target);
    int ub = upperBound(nums, target);
    
    cout << lb << " " << ub << endl;
    return 0;
    }
