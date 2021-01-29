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

vector<int> sortArrayByParityII(vector<int>& A) {
    
    vector<int> oddNumbers;
    vector<int> evenNumbers;
    
    for(long int i=0; i<A.size(); i++) {
        if(A[i] % 2 == 0) {
            evenNumbers.push_back(A[i]);
        }else {
            oddNumbers.push_back(A[i]);
        }
    }
    
    long int index1 = 0;
    long int index2 = 0;
    
    for(long int i=0; i<A.size(); i++) {
        if(i % 2 == 0) {
            A[i] = evenNumbers[index1];
            index1++;
        }else {
            A[i] = oddNumbers[index2];
            index2++;
        }
    }
    
    cout << "required Array is as follow" << endl;
    
    for(long int i=0; i<A.size(); i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    
    return A;
}

int main()
{
    vector<int> A = {4, 2, 5, 7};
    
    sortArrayByParityII(A);
    
    return 0;
}
