    #include <iostream>
    #include <vector>
    #include <algorithm>
    using namespace std;

    class Solution {
    public:
        void nextPermutation(vector<int>& nums) {
            int n = nums.size();
            int in = -1;
            for(int i = n-2; i>-1; i--){
                if(nums[i]<nums[i+1]){
                    in = i;
                    break;
                }
            }
            if(in == -1){
                reverse(nums.begin(), nums.end());
                return;
            }
            for(int j = n-1; j>in; j--){
                if(nums[j]>nums[in]){
                    swap(nums[in], nums[j]);
                    break;
                }
            }
            reverse(nums.begin()+in+1, nums.end());

        }
    };