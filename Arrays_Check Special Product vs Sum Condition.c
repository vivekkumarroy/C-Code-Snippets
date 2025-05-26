/*  You are given an array of integers. Your task is to check if the product of the second largest and first smallest element is greater than the sum of the second smallest and first largest element.

Input Format

First line contains an integer n, the number of elements in the array.

Second line contains n space-separated integers.

Constraints

4 ≤ n ≤ 10⁵

-10⁶ ≤ arr[i] ≤ 10⁶

Output Format

Print "True" if (second_largest * smallest) > (second_smallest + largest), otherwise print "False".

Sample Input 0

5
3
5
1
9
2
Sample Output 0

False
Explanation 0

Explaination: (second_largest * smallest) is not greater than (second_smallest + largest)

Sample Input 1

6
10
20
30
5 
4
3
Sample Output 1

True  */






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
 * Complete the 'check_special_condition' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts INTEGER_ARRAY arr as parameter.
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
char* check_special_condition(int arr_count, int* arr) {
          for(int i=1;i<=arr_count-1;i++){
              for(int j=0;j<arr_count-i;j++){
                  if(arr[j]>arr[j+1]){
                      int temp=arr[j];
                      arr[j]=arr[j+1];
                      arr[j+1]=temp;
                  }
              }
          }
    
       if(arr[arr_count-1]== arr[0]){
           
           return "False";
       }
    int second_Largest=0;
    
    for(int i=1;i<=arr_count-1;i++){
        if(arr[arr_count-i]>arr[arr_count-i-1]){
             second_Largest=arr[arr_count-i-1];
            break;
        }
        arr_count--;
    }
    // printf(" second_Largest %d",second_Largest);
     
    int second_Smallest=0;
    for(int i=0;i < arr_count-1;i++){
        
         if(arr[i+1]>arr[i]){
             
              second_Smallest=arr[i+1];
                 break;
             
         }
    }
    // printf(" second_Smallest %d",second_Smallest);
    
    int smallest=arr[0],largest=arr[arr_count-1];
    
    int sum = largest + second_Smallest;
    int pro = smallest * second_Largest;
    
    if(sum < pro){
        
         
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

    int* arr = malloc(N * sizeof(int));

    for (int i = 0; i < N; i++) {
        int arr_item = parse_int(ltrim(rtrim(readline())));

        *(arr + i) = arr_item;
    }

    char* result = check_special_condition(N, arr);

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
