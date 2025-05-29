/* Problem Statement

You are given an array of integers. Your task is to:

Find the maximum and minimum elements of the array.
Compute the median of the array.
Check if the difference between the maximum and minimum element (i.e., the range) is greater than the median.

Input Format

A single line of input containing n integers: arr[0] arr[1] ... arr[n-1]

Constraints

1 ≤ n ≤ 10⁵

-10⁶ ≤ arr[i] ≤ 10⁶

Output Format

Print "True" if the difference between the maximum and minimum element is greater than the median, else print "False".

Sample Input 0

5
1
3
5
7
9
Sample Output 0

True
Explanation 0

Range = 8, Median = 5

Sample Input 1

4
4
4
4
4
Sample Output 1

False
Explanation 1

Range = 0, Median = 4  */




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
 * Complete the 'is_range_greater_than_median' function below.
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
char* is_range_greater_than_median(int arr_count, int* arr) {
    
    
    for(int i = 0 ; i < arr_count-1 ; i++){
        int min_index = i;
        for(int j = i+1 ; j <= arr_count-1 ; j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
                 
            }
        }
        int temp = arr[i];
                arr[i] = arr[min_index];
                arr[min_index] = temp;  
    }
    
    int min_Element = arr[0];
    
    int max_Element = arr[arr_count-1];
    
    int diff = max_Element - min_Element;
    
    float median;
       
    if (arr_count % 2 == 1) {
    median = arr[arr_count / 2];
    }
    else {
    median = (arr[arr_count / 2 - 1] + arr[arr_count / 2]) / 2.0;
    }
    
    if(median > diff){
        return "False";
    }
    else {
        return "True";
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

    char* result = is_range_greater_than_median(N, arr);

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
