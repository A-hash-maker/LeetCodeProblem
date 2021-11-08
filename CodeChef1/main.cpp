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

vector<int> singleNumber(vector<int>& nums) {
    
    sort(nums.begin(), nums.end());
    
    set<int> s1;
    vector<int> returnVect;
    
    for(long int i=1; i<nums.size(); i++) {
        if(nums[i-1] == nums[i]) {
            s1.insert(nums[i]);
        }
    }
    
    for(long int i=0; i<nums.size(); i++) {
        auto it = s1.find(nums[i]);
        if(it == s1.end()) {
            returnVect.push_back(nums[i]);
        }
    }
    
    cout << "Final array is" << endl;
    
    for(long int i=0; i<returnVect.size(); i++) {
        cout << returnVect[i] << " ";
    }
    cout << endl;
    
    
    return returnVect;
}

int main()
{
    vector<int> nums = {1, 2, 1, 3, 2, 5};
    
    singleNumber(nums);
    
    return 0;
}
