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

int largestAltitude(vector<int>& gain) {
    int value = 0;
    int maxValue = 0;
    
    for(long int i=0; i<gain.size(); i++) {
        value = value + gain[i];
        if(value > maxValue){
            maxValue = value;
        }
        
    }
    return maxValue;
}

int main()
{
    vector<int> gain = {-4, -3, -2, -1, 4, 3, 2};
    
    cout << largestAltitude(gain) << endl;
    
    return 0;
}
