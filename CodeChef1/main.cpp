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

int singleNumber(vector<int>& nums) {
    int number = 0;
    sort(nums.begin(), nums.end());
    
    set<int> s1;
    
    for(long int i=1; i<nums.size(); i++) {
        if(nums[i-1] == nums[i]) {
            s1.insert(nums[i]);
        }
    }
    
    for(long int i=0; i<nums.size(); i++) {
        auto it = s1.find(nums[i]);
        if(it == s1.end()) {
            return nums[i];
        }
    }
    
    
    return number;
}

int main()
{
    vector<int> nums = {2, 2, 3, 2};
    
    cout << singleNumber(nums) << endl;
    
    return 0;
}
