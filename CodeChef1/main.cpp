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

vector<int> decode(vector<int>& encoded, int first) {
   
    
    
    vector<int> decoded;
    int requiredValue = 0;
    decoded.push_back(first);
    for(int i=0; i<encoded.size(); i++){
        requiredValue = encoded[i]^first;
        first = requiredValue;
        decoded.push_back(requiredValue);
    }
    
//    for(long int i=0; i<decoded.size(); i++) {
//        cout << decoded[i] << " ";
//    }
//    cout << endl;
    
    
    return decoded;
}

int main()
{
    
    vector<int> encoded = {6, 2, 7, 3};
    int first = 4;
    
    decode(encoded, first);
    
    return 0;
}
