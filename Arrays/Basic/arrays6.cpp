#include<iostream>
// Problem #3 : Largest Sum Subarray(contiguous)
// Description : We are given an array of positive and negative integers. We have to find the subarray having maximum sum.
// Input
// [-3, 4, -1, -2, 1, 5]
// Output
// 7
// (4+(-1)+(-2)+1+5)

//Solution : - Applying Kadane's Algorithm(This algorithm is used to keep a track 
// of positive segments of array(max_ending_here) is used for that and find maximum 
// sum among all the positive segments(max_so_far) used for that)

//Initialize max_ending_here and max_so_far with 0
// traverse through the elements in array
//1. max_ending_here+=a[i]
//2. if max_ending_here is negative
//           max_ending here = 0
// 3. else if(max_ending_here > max_so_far)
//       max_so_far = max_ending_here
// 4.return max_so_far

// Time Complexity - O(N)
//*****************INVALID IF ALL ELEMENTS IN ARRAY ARE NEGATIVE*********************
              
using namespace std;
int LargestSum(int *arr , int n){
    int max_so_far = 0 , max_ending_here = 0;
    for(int i = 0 ; i < n ; i++)
    {
        max_ending_here += arr[i];
        if(max_ending_here  < 0)
              max_ending_here = 0;
        else if(max_ending_here > max_so_far){
            max_so_far = max_ending_here;
        }
    }
    return max_so_far;


}
int main(){
    int arr[7] = {1,-2,5,-6,8,4,9};
    int max_so_far = LargestSum(arr,7);
    cout<<max_so_far<<endl;
}
    