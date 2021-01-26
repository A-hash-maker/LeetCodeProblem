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

vector<int> sortArrayByParity(vector<int>& A) {
    
    vector<int> evenNumbers;
    vector<int> oddNumbers;
    
    for(long int i=0; i<A.size(); i++) {
        if(A[i] % 2 == 0) {
            evenNumbers.push_back(A[i]);
        }else {
            oddNumbers.push_back(A[i]);
        }
    }
    
    long int index = 0;
    
    for(long int i=0; i<evenNumbers.size(); i++) {
        A[index] = evenNumbers[i];
        index++;
    }
    
    for(long int i=0; i<oddNumbers.size(); i++) {
        A[index] = oddNumbers[i];
        index++;
    }
    
    for(long int i=0; i<A.size(); i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    
    return A;
}

int main()
{
    vector<int> A = {3, 1, 2, 4};
    
    sortArrayByParity(A);
    
    return 0;
}
