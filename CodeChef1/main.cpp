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

vector<int> finalPrices(vector<int>& prices) {
    vector<int> returnVector;
    
    for(long int i=0; i<prices.size(); i++) {
        int found = 0;
        
        while(found != 1) {
            for(long int j=i+1; j<prices.size(); j++) {
                if(prices[i] >= prices[j]) {
                    returnVector.push_back(prices[i] - prices[j]);
                    found = 1;
                    break;
                }
            }
            if(found == 0) {
                returnVector.push_back(prices[i]);
            }
            break;
        }
    }
    
//    for(long int i=0; i<returnVector.size(); i++) {
//        cout << returnVector[i] << " ";
//    }
//    cout << endl;
    
    
    return returnVector;
}

int main()
{
    vector<int> prices = {10, 1, 1, 6};
    
    finalPrices(prices);
    
    
    return 0;
}
