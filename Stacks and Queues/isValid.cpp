#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> a;
        int n = s.size();
        for(int i = 0; i<n; i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                a.push(s[i]);
            }
            else if (s[i] == ')' || s[i] == ']' || s[i]=='}'){
                if(!a.empty()){
                    char b = a.top();
                    if(b == '(' && s[i] == ')' || b == '[' && s[i] == ']' || b == '{' && s[i] == '}'){
                        a.pop();
                    }
                    else return false;
                }
                else if(a.empty()){return false;}
            }
        }
        return a.empty();
    }
};