/*  You are given two arrays A and B, both of the same length. Your task is to determine whether every element of array A is a multiple of the corresponding element in array B, after sorting both arrays in non-decreasing order.

Input Format

First line contains an integer n — the size of the arrays.

Second line contains n space-separated integers denoting array A.

Third line contains n space-separated integers denoting array B.

Constraints

1 ≤ n ≤ 10⁵

-10⁶ ≤ A[i], B[i] ≤ 10⁶

B[i] ≠ 0 (division by zero is not allowed)

Output Format

Print "True" if every element in A is a multiple of the corresponding element in B (after sorting), otherwise print "False".

Sample Input 0

4
3
6
9
12
1
2
3
4
Sample Output 0

True
Explanation 0

Explanation:

After sorting:

A = [3, 6, 9, 12]

B = [1, 2, 3, 4]

A is the multiple of B

Sample Input 1

3
5
10
15
2
3
4
Sample Output 1

False
Explanation 1

Explanation:

After sorting:

A = [5, 10, 15]

B = [2, 3, 4]

A is not the mupltiple of B  */



#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);

int parse_int(char*);

/*
 * Complete the 'are_all_multiples' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY A
 *  2. INTEGER_ARRAY B
 */

/*
 * To return the string from the function, you should either do static allocation or dynamic allocation
 *
 * For example,
 * char* return_string_using_static_allocation() {
 *     static char s[] = "static allocation of string";
 *
 *     return s;
 * }
 *
 * char* return_string_using_dynamic_allocation() {
 *     char* s = malloc(100 * sizeof(char));
 *
 *     s = "dynamic allocation of string";
 *
 *     return s;
 * }
 *
 */
char* are_all_multiples(int A_count, int* A, int B_count, int* B) {
    
     for(int i=1;i<=B_count-1;i++){
              for(int j=0;j<B_count-i;j++){
                  if(B[j]>B[j+1]){
                      int temp=B[j];
                      B[j]=B[j+1];
                      B[j+1]=temp;
                  }
              }
          }
    
    int i=0,j=0;     
    while( i < A_count){
        
        if((A[i] % B[j]) == 0){
            i++;
            j++;
            continue ;
            
        }
        else{
            break ;
        }
    }
    
    if(i == A_count ){
        return "True";
    }
    else{
        return "False";
    }
    
        

}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    int N = parse_int(ltrim(rtrim(readline())));

    int* A = malloc(N * sizeof(int));

    for (int i = 0; i < N; i++) {
        int A_item = parse_int(ltrim(rtrim(readline())));

        *(A + i) = A_item;
    }

    int* B = malloc(N * sizeof(int));

    for (int i = 0; i < N; i++) {
        int B_item = parse_int(ltrim(rtrim(readline())));

        *(B + i) = B_item;
    }

    char* result = are_all_multiples(N, A, N, B);

    fprintf(fptr, "%s\n", result);

    fclose(fptr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;

    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) {
            break;
        }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') {
            break;
        }

        alloc_length <<= 1;

        data = realloc(data, alloc_length);

        if (!data) {
            data = '\0';

            break;
        }
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';

        data = realloc(data, data_length);

        if (!data) {
            data = '\0';
        }
    } else {
        data = realloc(data, data_length + 1);

        if (!data) {
            data = '\0';
        } else {
            data[data_length] = '\0';
        }
    }

    return data;
}

char* ltrim(char* str) {
    if (!str) {
        return '\0';
    }

    if (!*str) {
        return str;
    }

    while (*str != '\0' && isspace(*str)) {
        str++;
    }

    return str;
}

char* rtrim(char* str) {
    if (!str) {
        return '\0';
    }

    if (!*str) {
        return str;
    }

    char* end = str + strlen(str) - 1;

    while (end >= str && isspace(*end)) {
        end--;
    }

    *(end + 1) = '\0';

    return str;
}

int parse_int(char* str) {
    char* endptr;
    int value = strtol(str, &endptr, 10);

    if (endptr == str || *endptr != '\0') {
        exit(EXIT_FAILURE);
    }

    return value;
}
