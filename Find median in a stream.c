/*  Given a data stream arr[] where integers are read sequentially, the task is to determine the median of the elements encountered so far after each new integer is read.

The median is defined as follows:

1. Odd number of elements: The median is the middle element when the current set of numbers is sorted.
2. Even number of elements: The median is the arithmetic mean (average) of the two middle elements when the current set of numbers is sorted.

Examples:

Input: arr[] = [5, 15, 1, 3, 2, 8]
Output: [5.0, 10.0, 5.0, 4.0, 3.0, 4.0] 
Explanation: 
After reading 1st element of stream – 5 -> median = 5.0
After reading 2nd element of stream – 5, 15 -> median = (5+15)/2 = 10.0 
After reading 3rd element of stream – 5, 15, 1 -> median = 5.0
After reading 4th element of stream – 5, 15, 1, 3 ->  median = (3+5)/2 = 4.0
After reading 5th element of stream – 5, 15, 1, 3, 2 -> median = 3.0
After reading 6th element of stream – 5, 15, 1, 3, 2, 8 ->  median = (3+5)/2 = 4.0
Input: arr[] = [2, 2, 2, 2]
Output: [2.0, 2.0, 2.0, 2.0]
Explanation: 
After reading 1st element of stream – 2 -> median = 2.0
After reading 2nd element of stream – 2, 2 -> median = (2+2)/2 = 2.0
After reading 3rd element of stream – 2, 2, 2 -> median = 2.0
After reading 4th element of stream – 2, 2, 2, 2 ->  median = (2+2)/2 = 2.0
Constraints:
1 ≤ arr.size() ≤ 105
1 ≤ arr[i] ≤ 106  */



class Solution {
  public:
    vector<double> getMedian(vector<int> &arr) {
        // code here
        priority_queue<double>bx1;
        priority_queue<double,vector<double>,greater<double>>bx2;
        vector<double>ans;
        bx1.push(arr[0]);
        ans.push_back(bx1.top());
        
        for(int i = 1;i < arr.size();i++){
            if(bx1.top() < arr[i]){
                bx2.push(arr[i]);
            }
            else{
                bx1.push(arr[i]);
            }
            
            int d = bx1.size() - bx2.size();
            if( d == 2){
                bx2.push(bx1.top());
                bx1.pop();
            }
            else if(d == -1){
                bx1.push(bx2.top());
                bx2.pop();
            }
            
            int t = bx1.size() - bx2.size();
            if(t == 0){
                // double v =  ;
                ans.push_back((bx1.top() + bx2.top())/2);
            }
            else{
                ans.push_back(bx1.top());
            }
            
        }
        return ans;
    }
};
