/* 
  You are given a Linked List. Sort the given Linked List using quicksort. 

Examples:

Input: Linked list: 1->6->2
Output: 1->2->6

Explanation:
After sorting the nodes, we have 1, 2 and 6.
Input: Linked list: 1->9->3->8
Output: 1->3->8->9

Explanation: After sorting the nodes, we have 1, 3, 8 and 9. 
Constraints:
1 ≤ size of linked list ≤ 105
*/



```cpp id="o3a9p2"
/* a node of the singly linked list
class Node
{
public:
    int data;
    Node *next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:

    // Get last node
    Node* getTail(Node* cur) {
        while(cur != NULL && cur->next != NULL) {
            cur = cur->next;
        }
        return cur;
    }

    // Partition function
    Node* partition(Node* head, Node* end,
                    Node** newHead, Node** newEnd) {

        Node* pivot = end;
        Node* prev = NULL;
        Node* cur = head;
        Node* tail = pivot;

        while(cur != pivot) {

            if(cur->data < pivot->data) {

                if((*newHead) == NULL)
                    (*newHead) = cur;

                prev = cur;
                cur = cur->next;
            }
            else {

                if(prev)
                    prev->next = cur->next;

                Node* temp = cur->next;
                cur->next = NULL;

                tail->next = cur;
                tail = cur;

                cur = temp;
            }
        }

        if((*newHead) == NULL)
            (*newHead) = pivot;

        (*newEnd) = tail;

        return pivot;
    }

    // Recursive QuickSort
    Node* quickSortRecur(Node* head, Node* end) {

        if(!head || head == end)
            return head;

        Node* newHead = NULL;
        Node* newEnd = NULL;

        Node* pivot = partition(head, end, &newHead, &newEnd);

        // Sort left part
        if(newHead != pivot) {

            Node* temp = newHead;

            while(temp->next != pivot)
                temp = temp->next;

            temp->next = NULL;

            newHead = quickSortRecur(newHead, temp);

            temp = getTail(newHead);
            temp->next = pivot;
        }

        // Sort right part
        pivot->next = quickSortRecur(pivot->next, newEnd);

        return newHead;
    }

    struct Node* quickSort(Node* head) {
        
        Node* tail = getTail(head);

        return quickSortRecur(head, tail);
    }
};
```
