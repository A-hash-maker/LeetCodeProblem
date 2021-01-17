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

int findKthPositive(vector<int>& arr, int k) {
    //int count = 0;
    
    int var = 1;
    
    for(long int i=0; i<arr.size();) {
        if(arr[i] == var) {
            i++;
        }else {
            k--;
        }
        if(k == 0) {
            break;
        }
        var++;
    }
    
    if(k != 1){
        while(k > 1){
            var++;
            k--;
        }
        
    }
    
    
    
    return var;
}

int main()
{
    vector<int> arr = {2, 3, 4, 7, 11};
    int k = 5;
    
    cout << findKthPositive(arr, k) << endl;
    
    
    return 0;
}
