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

string toLowerCase(string str) {
    
    for(long int i=0; i<str.length(); i++) {
        char req = tolower(str[i]);
        str[i] = req;
    }
    
    return str;
}

int main()
{
    
    string str = "Hello";
    
    
    cout << toLowerCase(str) << endl;
    
    return 0;
}
