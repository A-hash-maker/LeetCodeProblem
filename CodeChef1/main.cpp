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

bool kLengthApart(vector<int>& nums, int k) {
    
    vector<int> index;
    
    for(long int i=0; i<nums.size(); i++) {
        if(nums[i] == 1) {
            index.push_back(i);
        }
    }
    
    for(long int i=1; i<index.size(); i++) {
        if(abs(index[i] - index[i-1]) <= k) {
            //cout << index[i] << " " << index[i-1] << endl;
            return false;
        }
    }
    return true;
}

int main()
{
    vector<int> nums = {0,1,0,1};
    
    int k = 1;
    
    kLengthApart(nums, k) ? cout << "true" << endl : cout << "false" << endl;
    
    return 0;
}
