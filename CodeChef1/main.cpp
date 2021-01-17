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

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


void push(ListNode** root_ref, int data) {
    ListNode* new_node = new ListNode;
    new_node->val = data;
    new_node->next = (*root_ref);
    (*root_ref) = new_node;
}

int getDecimalValue(ListNode* head) {
    int count = 0;
    
    ListNode* headCount = head;
    
    while(headCount != NULL){
        count++;
        headCount = headCount->next;
    }
    count = count - 1;
    long int sum = 0;
    
    while(head != NULL) {
        if(head->val == 1) {
            sum = sum + pow(2, count);
        }
        head = head->next;
        count--;
    }
    
    return int(sum);
}

int main()
{
    ListNode* head = NULL;
    push(&head, 1);
    
    cout << getDecimalValue(head) << endl;
    
    return 0;
}
