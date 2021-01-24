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

int rangeSumBST(TreeNode* root, int low, int high) {
    int sum = 0;
    
    stack<TreeNode*> s;
    TreeNode *curr = root;
    
    while(curr != NULL || s.empty() == false) {
        
        while(curr != NULL) {
            s.push(curr);
            curr = curr->left;
        }
        
        curr = s.top();
        s.pop();
        
        if(curr->val > low && curr->val < high) {
            sum = sum + curr->val;
        }
        
        curr = curr->right;
    }

    return sum;
}

int main()
{
    
    
    
    return 0;
}
