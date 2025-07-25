/*  You are given a number n. Find the total count of set bits for all numbers from 1 to n (both inclusive).

Input Format

A long long integer n

Constraints

1 ≤ n ≤ 10^18

Output Format

An single long long integer representing the total number of set bits for all number from 1 to n

Sample Input 0

4
Sample Output 0

5
Explanation 0

For numbers from 1 to 4. For 1: 0 0 1 = 1 set bits For 2: 0 1 0 = 1 set bits For 3: 0 1 1 = 2 set bits For 4: 1 0 0 = 1 set bits Therefore, the total set bits is 5.

Sample Input 1

17
Sample Output 1

35
Explanation 1

From numbers 1 to 17(both inclusive), the total number of set bits is 35.  */



#include <iostream>
using namespace std;
long long max(long long n) {
    long long c = 0;
    while ((1LL<<c)<=n) {
        c++;
    }
    return c - 1;
}

long long countsetbits(long long n) {
    if (n == 0) return 0;
    long long x = max(n);
    long long res = x*(1LL << (x-1))+(n-(1LL << x))+1+countsetbits(n-(1LL<<x));
    return res;
}

int main() {
    long long n;
    cin >> n;
    cout << countsetbits(n) << endl;
    return 0;
}
