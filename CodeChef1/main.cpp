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

int arrangeCoins(int n) {
    
    long int var = 1;
    int starCounts = 0;
    
    while(n > 0) {
        
        if((n - var) >= 0) {
            n -= var;
            starCounts++;
            var += 1;
        }else {
            break;
        }
    }
    
    return starCounts;
}

int main()
{
    int n = 5;
    
    cout << arrangeCoins(n) << endl;
    
    return 0;
}
