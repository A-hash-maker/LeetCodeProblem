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

#define pii pair<int, int>
#define mp make_pair

using namespace std;

vector<vector<int>> transpose(vector<vector<int>>& A) {
    vector<vector<int>> B;
    
    cout << "Original matrix" << endl;
    
    long int col = A[0].size();
    long int row = A.size();
    
    for(long int i=0; i<A.size(); i++) {
        for(long int j=0; j<A[0].size(); j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    
    
    
    for(long int i=0; i<col; i++) {
        vector<int> returnVect;
        for(long int j=0; j<row; j++) {
            returnVect.push_back(A[j][i]);
        }
        B.push_back(returnVect);
    }
    
    cout << "Transpose matrix" << endl;
    
    for(long int i=0; i<B.size(); i++) {
        for(long int j=0; j<B[i].size(); j++) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
    
    
    return B;
}

int main()
{
    vector<vector<int>> A = {{1, 2, 3}, {4, 5, 6}};
    
    transpose(A);
    
    return 0;
}
