#include <iostream>
using namespace std;

class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int total_drank = numBottles;
        int empty_bottles = numBottles;
        while(empty_bottles>=numExchange){
            int new_full = empty_bottles / numExchange;  
            total_drank += new_full;                     
            empty_bottles = new_full + (empty_bottles % numExchange); 
        }
        return  total_drank;
    }
};