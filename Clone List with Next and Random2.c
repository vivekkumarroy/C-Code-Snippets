/*  You are given a special linked list with n nodes where each node has two pointers a next pointer that points to the next node of the singly linked list, and a random pointer that points to the random node of the linked list.

Construct a copy of this linked list. The copy should consist of the same number of new nodes, where each new node has the value corresponding to its original node. Both the next and random pointer of the new nodes should point to new nodes in the copied list, such that it also represent the same list state. None of the pointers in the new list should point to nodes in the original list.

Return the head of the copied linked list.

NOTE : Original linked list should remain unchanged.
Each node of the linked list is represented as a pair of [val, random_index] where:

val represents node.data.
random_index (1-based index) represents the index of the node that the random pointer of the current node points to, or NULL if it does not point to any node.
Examples:

Input: head = [[1, 3], [3, 3], [5, NULL], [9, 3]] 
   
Output: [[1, 3], [3, 3], [5, NULL], [9, 3]]
Explanation: 
Node 1 points to Node 3 as its NEXT and Node 5 as its RANDOM.
Node 3 points to Node 5 as its NEXT and Node 5 as its RANDOM.
Node 5 points to Node 9 as its NEXT and NULL as its RANDOM.
Node 9 points to NULL as its NEXT and Node 5 as its RANDOM.
Input: head = [[1, 3], [2, 1], [3, 5], [4, 3], [5, 2]]
  
Output: [[1, 3], [2, 1], [3, 5], [4, 3], [5, 2]]
Explanation: 
Node 1 points to Node 2 as its NEXT and Node 3 as its RANDOM.
Node 2 points to Node 3 as its NEXT and Node 1 as its RANDOM.
Node 3 points to Node 4 as its NEXT and Node 5 as its RANDOM.
Node 4 points to Node 5 as its NEXT and Node 3 as its RANDOM.
Node 5 points to NULL as its NEXT and Node 2 as its RANDOM.
Input: head = [[7, NULL], [7, NULL]]
Output: head = [[7, NULL], [7, NULL]]
Explanation: 
Node 7 points to Node 7 as its NEXT and NULL as its RANDOM.
Node 7 points to NULL as its NEXT and NULL as its RANDOM.
Constraints:
1 ≤ n ≤ 100
0 ≤ node->data ≤ 1000  */


/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node * temp = head;
        if(head == NULL) return head;
        Node *copyHead = new Node(temp -> val);
         temp = temp -> next;
         Node *temptail = copyHead;
      while(temp){
            temptail -> next = new Node(temp -> val); 
            temp = temp -> next;
            temptail = temptail -> next; 
      }

    temptail = copyHead;
    temp = head;

    Node *front1 = NULL;
    Node *front2 = NULL;

    while(temp){
        front1 = temp -> next;
        front2 = temptail -> next;
        temp -> next = temptail;
        temptail -> next = front1;
        temptail = front2;
        temp = front1;
    }

    temp = head;
    while(temp){
       front1 = temp -> next;
       if(temp -> random)
       front1 -> random = temp -> random -> next;
       temp = front1 -> next;

    }
     
     temp = head;
     while(temp -> next){
        front1 = temp -> next;
        temp -> next = front1 -> next;
        temp = front1;

     }
    
    return copyHead;
        
    }
};