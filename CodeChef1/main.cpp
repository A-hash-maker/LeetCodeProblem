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

vector<int> findDuplicates(vector<int>& nums) {
    
    vector<int> duplicate;
    
    if(nums.size() > 0) {
        sort(nums.begin(), nums.end());
        long int counter = 0;
        
        for(long int i=1; i<nums.size(); i++) {
            if(nums[i-1] == nums[i]) {
                
                if(duplicate.size() == 0) {
                    duplicate.push_back(nums[i]);
                }else {
                    if(duplicate[counter] != nums[i]) {
                        duplicate.push_back(nums[i]);
                        counter += 1;
                    }
                }
                
                
            }
        }
    }
    
    cout << "Final Array " << endl;
    
    for(long int i=0; i<duplicate.size(); i++) {
        cout << duplicate[i] << " ";
    }
    cout << endl;
    
    return duplicate;
}


int main()
{
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
    
    findDuplicates(nums);
    
    return 0;
}
