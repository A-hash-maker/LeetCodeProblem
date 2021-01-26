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

int search(vector<int>& nums, int target) {
    
    for(long int i=0; i<nums.size(); i++) {
        if(nums[i] == target) {
            return i;
        }
    }
    
    return -1;
}
