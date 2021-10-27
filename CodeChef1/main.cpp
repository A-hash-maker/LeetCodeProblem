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

void sortColors(vector<int>& nums) {
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    
    for(long int i=0; i<nums.size(); i++) {
        if(nums[i] == 0) {
            count0 += 1;
        }else if(nums[i] == 1) {
            count1 += 1;
        }else if(nums[i] == 2) {
            count2 += 1;
        }
    }
    
    int counter = 0;
    
    while(count0 > 0) {
        nums[counter] = 0;
        counter += 1;
        count0 -= 1;
    }
    
    while(count1 > 0) {
        nums[counter] = 1;
        count1 -= 1;
        counter += 1;
    }
    
    while(count2 > 0) {
        nums[counter] = 2;
        count2 -= 1;
        counter += 1;
    }
    
}
