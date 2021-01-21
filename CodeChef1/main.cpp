#include <iostream>
#include <vector>
#include <tuple>
#include <set>
#include <queue>
#include <stack>
#include <unordered_set>
#include <map>
#include <unordered_map>

using namespace std;

bool isValid(string s) {
    bool valied = false;
    stack<char> paranthesis;
    
    for(long int i=0; i<s.length(); i++) {
        if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
            paranthesis.push(s[i]);
        }else if(s[i] == ')') {
            if(!paranthesis.empty()){
                if(paranthesis.top() == '(') {
                   paranthesis.pop();
                }else {
                    paranthesis.push(s[i]);
                }
            }else {
                paranthesis.push(s[i]);
            }
        }else if(s[i] == ']') {
            if(!paranthesis.empty()){
                if(paranthesis.top() == '[') {
                   paranthesis.pop();
                }else {
                    paranthesis.push(s[i]);
                }
            }else {
                paranthesis.push(s[i]);
            }
        }else if(s[i] == '}') {
            if(!paranthesis.empty()){
                if(paranthesis.top() == '{') {
                   paranthesis.pop();
                }else {
                    paranthesis.push(s[i]);
                }
            }else {
                paranthesis.push(s[i]);
            }
        }
    }
    
    if(paranthesis.empty() && s.length() > 1) {
        valied = true;
    }
    
    
    return valied;
}

int main()
{
    string s = "[)]";
    
    isValid(s) ? cout << "Valied paranthesis" << endl: cout << "Not Valied paranthesis" << endl;
    
    s = "()[]{}";
    
    isValid(s) ? cout << "Valied paranthesis" << endl: cout << "Not Valied paranthesis" << endl;
    
    s = "(]";
    
    isValid(s) ? cout << "Valied paranthesis" << endl: cout << "Not Valied paranthesis" << endl;
    s = "{[]}";
    
    isValid(s) ? cout << "Valied paranthesis" << endl: cout << "Not Valied paranthesis" << endl;
    
    
    
    
    
    return 0;
}
