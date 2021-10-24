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

int countNodes(TreeNode* root) {
    
    if(root == NULL) {
        return 0;
    }else {
        return countNodes(root->left) + countNodes(root->right) + 1;
    }
}
