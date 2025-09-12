/*  You are given the head of a Singly Linked List and a value x, insert that value x at the end of the LinkedList and return the head of the modified Linked List.

Examples :

Input: x = 6,
   
Output: 1 -> 2 -> 3 -> 4 -> 5 -> 6
Explanation: We can see that 6 is inserted at the end of the linkedlist.
   
Input: x = 1,
   
Output: 4 -> 5 -> 1
Explanation: We can see that 1 is inserted at the end of the linked list.
      
Constraints:
1 ≤ number of nodes ≤ 105
0 ≤ node->data , x ≤ 103  */



/*
class Node {
  public:
    int data;
    Node* next;

    // Default constructor
    Node() {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};
*/
class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
       Node *a =  new Node(x);
       Node *th = head;
       if(head == NULL){
           return a;
       }
       while(th -> next != NULL){
           th = th -> next;
       }
       th -> next = a;
       return head;
    
    }
};