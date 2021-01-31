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

bool validMountainArray(vector<int>& arr) {
    
    int max = 0;
    int index = 0;
    
    for(int i=0; i<arr.size(); i++) {
        if(arr[i] > max) {
            max = arr[i];
            index = i;
        }
    }
    
    if(index == 0 || index == arr.size() - 1) {
        return false;
    }
    
    for(long int i=0; i<index; i++) {
        if(arr[i] >= arr[i+1]) {
            return false;
        }
    }
    
    for(long int i=index; i<arr.size()-1; i++) {
        if(arr[i] <= arr[i+1]) {
            return false;
        }
    }
    return true;
}

int main()
{
    vector<int> arr = {2, 1};
    
    validMountainArray(arr) ? cout << "Valid Mountain" << endl: cout << "Invalid Mountain" << endl;
    
    return 0;
}
