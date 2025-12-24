/*   An ugly number is a positive integer whose prime factors are limited to 2, 3, and 5.

Given an integer n, return the nth ugly number.

 

Example 1:

Input: n = 10
Output: 12
Explanation: [1, 2, 3, 4, 5, 6, 8, 9, 10, 12] is the sequence of the first 10 ugly numbers.
Example 2:

Input: n = 1
Output: 1
Explanation: 1 has no prime factors, therefore all of its prime factors are limited to 2, 3, and 5.
 

Constraints:

1 <= n <= 1690  */




class Solution {
public:

int findUgly(int x){
int count = 0;
for(long i = 1; i<=x;i*=2){
    for(long j = i ;j<=x;j*=3){
        for(long k = j ;k<=x;k*=5){
            count++;
        }
    }
}
return count;
}
   int nthUglyNumber(int n) {
       int low = 1,high = INT_MAX;
       while(low <= high){
        int mid = low + (high - low)/2;
        if(findUgly(mid) >= n){
           high = mid - 1;
        }
        else{
            low = mid + 1;
        }
       }
       return low;
   }
};

