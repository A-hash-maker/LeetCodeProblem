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

int countStudents(vector<int>& students, vector<int>& sandwiches) {
    
    std::vector<int>::iterator it;
    
    for(long int i=0; i<sandwiches.size(); i++) {
        
        it = std::find(students.begin(), students.end(), sandwiches[i]);
        
        if(it != students.end()) {
            students.erase(students.begin() + (it - students.begin()));
        }else {
            break;
        }
    }
    return int(students.size());
}


int main()
{
    vector<int> students = {1, 1, 1, 0, 0, 1};
    vector<int> sandwiches = {1, 0, 0, 0, 1, 1};
    
    cout << countStudents(students, sandwiches) << endl;
    
    return 0;
}
