#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool rows[9][9] = {false};
        bool columns[9][9] = {false};
        bool boxes[9][9] = {false};

        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(board[i][j]!= '.'){
                    int number = board[i][j] - '1';
                    int box_index = (i/3)*3 + (j/3);
                    if(rows[i][number] || columns[j][number]|| boxes[box_index][number]){return false;}
                    rows[i][number] = columns[j][number] = boxes[box_index][number] = true;
                }
            }
        }
        return true;
    }
};