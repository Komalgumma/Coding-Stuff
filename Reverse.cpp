#include <iostream>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        if (x >= INT_MAX || x <= INT_MIN){return 0;}
        long int y = 0;
        int z = (x > 0 && x != INT_MIN) ? x : -x;
        while(z>0){
            if(y*10>= INT_MAX){return 0;}
            y = y*10 + z%10;
            z /= 10;
        }
        y = (x > 0) ? y : -y ;
        return y;
    }
};