#include <iostream>
#include <vector>
#include <tuple>
#include <set>
#include <queue>
#include <stack>
#include <unordered_set>
#include <map>
#include <unordered_map>

using namespace std;

int findKthLargest(vector<int>& nums, int k) {
    make_heap(nums.begin(), nums.end());
    
    int var = 1;
    
    while (var != k) {
        pop_heap(nums.begin(), nums.end());
        nums.pop_back();
        
        var++;
    }
    return nums.front();
}

int main()
{
    
    vector<int> nums = {3, 2, 1, 5, 6, 4};
    int k = 2;
    cout << findKthLargest(nums, k) << endl;
    return 0;
}
