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

void deleteNode(ListNode* node) {
    int currentValue = node->val;
    node->val = node->next->val;
    node->next->val = currentValue;
    
    struct ListNode* nextNode = node->next->next;
    
    free(node->next);
    
    node->next = nextNode;
    
    
}

void push(ListNode** head_ref, int data) {
    ListNode* new_node = new ListNode;
    new_node->val = data;
    new_node->next = *(head_ref);
    *(head_ref) = new_node;
}

void printList(ListNode* head) {
    while(head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    ListNode* head = NULL;
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);
    
    cout << "Original LinkList is " << endl;
    printList(head);
    
    deleteNode(head->next->next);
    
    cout << "Linklist after deletion of the Node is " << endl;
    printList(head);
    
    return 0;
}
