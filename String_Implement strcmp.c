/*  You are given two strings. Your task is to compare these two strings lexicographically using logic similar to the strcmp() function in C.

The function compares the characters of the two strings one by one from left to right:

There are possible scenarios with a special case:

If the end of both strings has been reached without any mismatches then the function returns zero.
Return a positive integer if the ASCII value of the first non-matching character in the first string is greater than in the second, otherwise return a negative integer.
Special case can be determined by observing the sample test cases.
Input Format

Two lines, each containing a string s1 and s2.

Constraints

1 <= |s1|, |s2| <= 1000

Output Format

Print an integer based on comparison

Sample Input 0

SACHIN
SACHIN
Sample Output 0

0
Explanation 0

Explanation:

Here s1 == s2

Sample Input 1

VIRATKOHLI
VIRAT
Sample Output 1

5
Explanation 1

Explanation:

Special case:

When one string exhaust while comparing then the function returns the number of character left to compare.
Handle the positive and negative case.

 */








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

/*
 * Complete the 'strcmp' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. STRING s1
 *  2. STRING s2
 */

int strcmp( const char* s1, const char* s2) {
    
    // if()
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            return s1[i] - s2[i]; 
        }
        i++;
    }

    if (s1[i] == '\0' && s2[i] != '\0') {
       
        return  strlen(s1) - strlen(s2);
    } else if (s2[i] == '\0' && s1[i] != '\0') {
         
        return strlen(s1) - strlen(s2);
    }

    return 0;

}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* s1 = readline();

    char* s2 = readline();

    int result = strcmp(s1, s2);

    fprintf(fptr, "%d\n", result);

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
