#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        vector<vector<char>> a(numRows);
         if (numRows == 1 || numRows >= s.size()) return s; 
        for(int i = 0; i<s.size(); i++){
            if(i < numRows){a[i].push_back({s[i]});}
            else if (((i/(numRows-1))%2) == 1){
                a[(numRows-1)-(i%(numRows-1))].push_back(s[i]);
            }
            else if(((i/(numRows-1))%2) == 0){
                a[i - (i/(numRows-1))*(numRows-1)].push_back(s[i]);
            }
        }
        string result;
        for (const auto& row : a) {
            for (char c : row) {
                result += c;
            }
        }
        return result;
    }
};