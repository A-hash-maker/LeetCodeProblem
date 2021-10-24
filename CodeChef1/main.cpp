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

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    
    long int index = 0;
    
    for(long int i=0; i<matrix.size(); i++) {
        long int last = matrix[i].size();
        if(matrix[i][0] <= target && matrix[i][last - 1] >= target) {
            index = i;
            break;
        }
    }
    
    for(long int j=0; j<matrix[index].size(); j++) {
        if(matrix[index][j] == target) {
            return true;
        }
    }
    
    
    return false;
}


int main()
{
    
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };
    
    int target = 10;
    
    cout << "Is Element is present in matrix " << searchMatrix(matrix, target) << endl;
    
    
    return 0;
}
