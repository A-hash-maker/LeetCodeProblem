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

#define pii pair<int, int>
#define mp make_pair

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

void TreeTraversal(TreeNode* root, int index, vector<pair<int, int>> &finalRequiredMap) {
    
    if(root == NULL) {
        return;
    }
    
    pair<int, int> needed;
    needed.first = root->val;
    needed.second = index;
    finalRequiredMap.push_back(needed);
    
    if(root->right != NULL) {
        TreeTraversal(root->right, index+1, finalRequiredMap);
    }
    
    
    if(root->left != NULL) {
        TreeTraversal(root->left, index-1, finalRequiredMap);
    }
    
    
    
    
    
    
}

vector<vector<int>> verticalTraversal(TreeNode* root) {
    
    vector<vector<int>> returnVect;
    vector<pair<int, int>> finalRequiredMap;
    
    
    TreeNode* curr = root;
    int index = 0;
    TreeTraversal(curr, index, finalRequiredMap);
    
    for(long int i=0; i<finalRequiredMap.size(); i++) {
        cout << finalRequiredMap[i].first << " - " << finalRequiredMap[i].second << endl;
    }
    
    long int max = INT_MIN;
    long int min = INT_MAX;
    
    cout << "Value of original max is " << max << endl;
    cout << "Value of original min is " << min << endl;
    
    
    for(long int i=0; i<finalRequiredMap.size(); i++) {
        if(finalRequiredMap[i].second > max) {
            max = finalRequiredMap[i].second;
        }
        if(finalRequiredMap[i].second < min) {
            min = finalRequiredMap[i].second;
        }
    }
    
    cout << "Value of the max is " << max << endl;
    cout << "value of the min is " << min << endl;
    
    while(min <= max) {
        
        vector<int> returnVector;
        
        for(long int i=0; i<finalRequiredMap.size(); i++) {
            if(finalRequiredMap[i].second == min) {
                returnVector.push_back(finalRequiredMap[i].first);
            }
        }
        
        //sort(returnVector.begin(), returnVector.end());
        
        cout << "This is for the created returnVector" << endl;
        
        for(long int i=0; i<returnVector.size(); i++) {
            cout << returnVector[i] << " ";
        }
        cout << endl;
        
        
        returnVect.push_back(returnVector);
        min++;
    }
    
    printf("This is for the final resposne\n");
    
    for(long int i=0; i<returnVect.size(); i++)  {
        for(long int j=0; j<returnVect[i].size(); j++) {
            cout << returnVect[i][j] << " ";
        }
        cout << endl;
    }
    
    
    
    
    
    return returnVect;
    
}



int main()
{
    struct TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(6);
    root->right = new TreeNode(3);
    root->right->right = new TreeNode(7);
    root->right->left = new TreeNode(5);
    
    
    verticalTraversal(root);
    
    return 0;
}
