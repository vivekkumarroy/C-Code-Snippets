/* You live on a long street, represented as an array, where each position on the street has a specific type:

1 → Red House (target)
-1 → Road Blockage (you cannot pass through)
0 → Normal House (walkable)
2 → Fast Road (you move twice as fast, meaning each step on a road counts as half a step)
Your task is to calculate the shortest distance from every position on the street to the nearest red house (1), considering these movement rules:

Allowed Moves: You can move left or right.
Road Blocks (-1) Cannot Be Crossed: You cannot pass through them.
Normal House (0) Can Be Crossed: Moving across a normal house counts as 1.0 step.
Fast Roads (2) Count as Half a Step: Moving onto a road speeds up movement, meaning each road step counts as 0.5 instead of 1.0.
If a Red House cannot be reached from any point, return -1.0 for that position.
Input Format

An integer n → The number of positions in the street.
An array arr of length n where:
1 represents a red house.
-1 represents a road block (impassable).
0 represents a normal house.
2 represents a road (fast movement).
Constraints

1 ≤ n ≤ 10⁶
arr[i] ϵ {-1,0,1,2}
The array always contains at least one 1 (red house).
There may be multiple obstacles (-1) and roads (2).
Output Format

An array of the same length, where each index contains:
The shortest distance to the nearest red house, formatted to 1 decimal place, considering the rules.
-1.0 if any red house cannot be reached by that position. Sample Testcases
Sample Input 0

9  
0 2 -1 1 0 2 1 -1 0  
Sample Output 0

-1.0 -1.0 -1.0 0.0 1.0 0.5 0.0 -1.0 -1.0
Sample Input 1

7  
1 0 2 0 -1 0 1
Sample Output 1

0.0 1.0 1.5 2.5 -1.0 1.0 0.0   */






#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

#define MAX 1000005

typedef struct {
    int pos;
    double dist;
} Node;

typedef struct {
    Node data[MAX];
    int size;
} MinHeap;

void swap(Node* a, Node* b) {
    Node temp = *a;
    *a = *b;
    *b = temp;
}

void heapifyUp(MinHeap* heap, int idx) {
    while (idx > 0) {
        int parent = (idx - 1) / 2;
        if (heap->data[parent].dist > heap->data[idx].dist) {
            swap(&heap->data[parent], &heap->data[idx]);
            idx = parent;
        } else break;
    }
}

void heapifyDown(MinHeap* heap, int idx) {
    int smallest = idx;
    int left = 2 * idx + 1, right = 2 * idx + 2;

    if (left < heap->size && heap->data[left].dist < heap->data[smallest].dist)
        smallest = left;
    if (right < heap->size && heap->data[right].dist < heap->data[smallest].dist)
        smallest = right;

    if (smallest != idx) {
        swap(&heap->data[smallest], &heap->data[idx]);
        heapifyDown(heap, smallest);
    }
}

void push(MinHeap* heap, int pos, double dist) {
    heap->data[heap->size].pos = pos;
    heap->data[heap->size].dist = dist;
    heapifyUp(heap, heap->size);
    heap->size++;
}

Node pop(MinHeap* heap) {
    Node top = heap->data[0];
    heap->data[0] = heap->data[--heap->size];
    heapifyDown(heap, 0);
    return top;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    double dist[n];

    MinHeap heap;
    heap.size = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] == 1) {
            dist[i] = 0.0;
            push(&heap, i, 0.0);
        } else {
            dist[i] = DBL_MAX;
        }
    }

    int dx[2] = {-1, 1}; // Left and Right directions

    while (heap.size > 0) {
        Node current = pop(&heap);
        int pos = current.pos;

        for (int i = 0; i < 2; i++) {
            int newPos = pos + dx[i];

            if (newPos >= 0 && newPos < n && arr[newPos] != -1) {
                double weight = (arr[newPos] == 2) ? 0.5 : 1.0;
                if (dist[pos] + weight < dist[newPos]) {
                    dist[newPos] = dist[pos] + weight;
                    push(&heap, newPos, dist[newPos]);
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] == -1 || dist[i] == DBL_MAX)
            printf("-1.0 ");
        else
            printf("%.1f ", dist[i]);
    }

    return 0;
}












