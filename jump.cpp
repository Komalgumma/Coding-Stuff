#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
int jump(vector<int>& nums) {
    int n = nums.size();
    if (n <= 1) return 0;

    int farthest = 0;
    int end = 0;                // FIX: range starts at 0
    int jumps = 0;
    int i = 0;

    while (i < n - 1) {
        farthest = max(farthest, i + nums[i]);

        if (i == end) {         // when current range ends → jump
            jumps++;
            end = farthest;     // FIX: extend to farthest
            if (end >= n - 1) break;  // FIX: check against n-1
        }
        i++;
    }

    return jumps;               
}


};