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

int findSpecialInteger(vector<int>& arr) {
    
    long int len = arr.size();
    long int len5 = len * 25;
    len5 = len5 / 100;
    
    int count = 1;
    
    if(len > 1) {
        for(long int i=1; i<arr.size(); i++) {
            if(arr[i-1] == arr[i]) {
                count++;
            }else {
                count = 1;
            }
            
            if(count > len5) {
                return arr[i-1];
            }
        }
    }
    
    return arr[0];
}


int main()
{
    vector<int> arr = {1};
    
    cout << findSpecialInteger(arr) << endl;
    
    return 0;
}
