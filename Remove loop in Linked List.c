/*   Given the head of a singly linked list, the task is to remove a cycle if present. A cycle exists when a node's next pointer points back to a previous node, forming a loop. Internally, a variable pos denotes the index of the node where the cycle starts, but it is not passed as a parameter. The terminal will print true if a cycle is removed otherwise, it will print false.

Examples:

Input: head = 1 -> 3 -> 4, pos = 2
Output: true
Explanation: The linked list looks like

A loop is present in the list, and it is removed.
Input: head = 1 -> 8 -> 3 -> 4, pos = 0
Output: true
Explanation: 

The Linked list does not contains any loop. 
Input: head = 1 -> 2 -> 3 -> 4, pos = 1
Output: true
Explanation: The linked list looks like 

A loop is present in the list, and it is removed.
Constraints:
1 ≤ size of linked list ≤ 105  */




/*
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    void removeLoop(Node* head) {
        // code here
        Node *fast = head;
        Node *slow = head;
        while(fast!= NULL && fast->next!=NULL) {
            slow = slow->next;
            fast=fast->next->next;
            if(slow == fast) {
                slow = head;
                while(slow!=fast) {
                    slow=slow->next;
                    fast = fast->next;
                }
                fast = fast->next;
                while(fast->next!=slow){
                    fast = fast -> next;
                }
                fast -> next=NULL;
            }
        }
        return;
    }
};