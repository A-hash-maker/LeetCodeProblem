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

vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
    vector<vector<int>> returnVect;
    
    sort(arr.begin(), arr.end());
    
    int minDiff = INT_MAX;
    
    for(long int i=0; i<arr.size()-1; i++) {
        if(abs(arr[i+1] - arr[i]) < minDiff) {
            minDiff = abs(arr[i+1] - arr[i]);
        }
    }
    
    
    for(long int i=0; i<arr.size()-1; i++) {
        vector<int> vect;
        if(abs(arr[i+1] - arr[i]) == minDiff) {
            vect.push_back(arr[i]);
            vect.push_back(arr[i+1]);
        }
        returnVect.push_back(vect);
    }
    
    
    for(long int i=0; i<returnVect.size(); i++) {
        for(long int j=0; j<returnVect[i].size(); j++) {
            cout << returnVect[i][j] << " ";
        }
        cout << endl;
    }
    
    
    
    
    return returnVect;
}

int main()
{
    vector<int> arr = {3, 8, -10, 23, 19, -4, -14, 27};
    
    minimumAbsDifference(arr);
    
    return 0;
}
