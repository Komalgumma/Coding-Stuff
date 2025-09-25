#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:  
    vector<int> searchRange(vector<int>& nums, int target) {

        vector<int> a; a.push_back(-1); a.push_back(-1);

        int left = 0, right = nums.size()-1;
        while(left<=right){
            int mid = left+(right-left)/2;
            if(target > nums[mid]){left = mid+1;}
            else if(target < nums[mid]){right = mid-1;}
            else if (target == nums[mid]){
                if(mid == 0 || nums[mid-1]!= target){a[0] = mid;}
                right = mid-1;
            }
        }

        left = 0, right = nums.size()-1;
        while(left<=right){
            int mid = left+(right-left)/2;
            if(target > nums[mid]){left = mid+1;}
            else if(target < nums[mid]){right = mid-1;}
            else if (target == nums[mid]){
                if(mid == nums.size()-1 || nums[mid+1]!= target){a[1] = mid;}
                left = mid+1;
            }
        }

        return a;
    }
}; 