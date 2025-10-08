#include <iostream>
#include <stack>
#include <vector>
using namespace std;


  struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> a ;
        helper(root, a);
        return a;
    }

private:
    void helper(TreeNode *root, vector<int> &a){
        if(root == nullptr){return;}
        helper(root->left, a);
        a.push_back(root->val);
        helper(root->right, a);
    }
};