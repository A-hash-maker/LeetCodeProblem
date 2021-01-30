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

int arrayPairSum(vector<int>& nums) {
    
    sort(nums.begin(), nums.end());
    long int sum = 0;
    
    for(long int i=0; i<nums.size(); i++) {
        if(i % 2 == 0) {
            sum = sum + nums[i];
        }
    }
    return int(sum);
}


int main()
{
    vector<int> nums = {6, 2, 6, 5, 1, 2};
    
    cout << arrayPairSum(nums) << endl;
    
    
    return 0;
}
