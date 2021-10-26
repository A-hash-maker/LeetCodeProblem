#include <iostream>
#include <vector>
#include <tuple>
#include <set>
#include <queue>
#include <stack>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <list>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode* invertTree(TreeNode* root) {
    
    invertTreeHere(root);
    
    return root;
}

void invertTreeHere(TreeNode* root) {
    if(root == NULL) {
        return;
    }else {
        
        struct TreeNode* temp;
        
        invertTreeHere(root->left);
        invertTreeHere(root->right);
        
        temp = root->left;
        root->left = root->right;
        root->right = temp;
    }
}
