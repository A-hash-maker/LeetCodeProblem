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

double trimMean(vector<int>& arr) {
    
    sort(arr.begin(), arr.end());
    
    long int len = arr.size();
    
    long int len5 = len * 5;
    len5 = len5 /100;
    
    //cout << "current value of len5 is " << len5 << endl;
    
    for(long int i=0; i<len5; i++) {
        arr[i] = -1;
        //cout << "Current Index of i is " << i << endl;
    }
    
    for(long int i=len; i>(arr.size() - len5); i--) {
        arr[i-1] = -1;
        //cout << "Current Index of i is " << i << endl;
    }
    
    double mean = 0.00000;
    double countValue = 0;
    
    for(long int i=0; i<arr.size(); i++) {
        if(arr[i] != -1) {
            mean = mean + arr[i];
            countValue++;
        }
    }
    
    mean = mean / countValue;
    
    
    return mean;
}


int main()
{
    vector<int> arr = {6,2,7,5,1,2,0,3,10,2,5,0,5,5,0,8,7,6,8,0};
    
    cout << trimMean(arr) << endl;
    
    return 0;
}
