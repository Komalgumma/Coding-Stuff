#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> a;
        int n = nums.size();
        int i = 0;
        while(i<n-1){
            if(nums[i] == nums[i+1]){
                i++;
            }
            else if (nums[i]!=nums[i+1]){
                a.push_back(nums[i]);
                i++;
            }
        } 
        if (n>1 && nums[n-1]!=nums[n-2]){
            a.push_back(nums[n-1]);
        }
        if(n==1){a.push_back(nums[0]);}
        nums = a;
        return nums.size();
    }
};