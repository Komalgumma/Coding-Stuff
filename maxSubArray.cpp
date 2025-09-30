#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int result = nums[0];
        int currentMax = nums[0];
        int n  = nums.size();
        for(int i = 1; i<n; i++){
            currentMax = max(nums[i], currentMax+nums[i]);
            result  = max(result, currentMax);
        }
        return result;
    }
};