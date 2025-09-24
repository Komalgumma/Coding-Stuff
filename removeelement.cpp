#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> a;
        int n = nums.size();
        int i = 0;
        while(i < n){
            if(nums[i] == val){
                i++;
            }
            else if (nums[i]!= val){
                a.push_back(nums[i]);
                i++;
            }
        }
        nums = a;
        return nums.size();
    }
};