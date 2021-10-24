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


int findMin(vector<int>& nums) {
        int minNumber = nums[0];
        for(long int i=0; i<nums.size(); i++) {
            if(minNumber > nums[i]) {
                minNumber = nums[i];
            }
        }
        return minNumber;
    }
