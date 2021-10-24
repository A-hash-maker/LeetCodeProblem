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

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    
    long int counter1 = 0;
    long int counter2 = 0;
    
    vector<int> returnVect;
    
    while(counter1 < nums1.size() && counter2 < nums2.size()) {
        
        if(nums1[counter1] == nums2[counter2]) {
            returnVect.push_back(nums1[counter1]);
            counter1 += 1;
            counter2 += 1;
        }else if(nums1[counter1] < nums2[counter2]) {
            counter1 += 1;
        }else {
            counter2 += 1;
        }
    }
    
    for(long int i=0; i<returnVect.size(); i++) {
        cout << returnVect[i] << " ";
    }
    cout << endl;
    
    return returnVect;
    
}

int main()
{
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2,2};
    
    intersect(nums1, nums2);
    
    return 0;
}
