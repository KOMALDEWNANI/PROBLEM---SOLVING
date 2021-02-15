#include<iostream>
#include<vector>
// Problem #1 : Range Sum Queries using Prefix Sum
// Description : We are given an Array of n integers, We are given q queries having indices l and r . We have to find out sum between the given range of indices.
// Input 
// [4, 5, 3, 2, 5]
// 3
// 0 3
// 2 4
// 1 3
// Output
// 14 (4+5+3+2)
// 10 (3+2+5)
// 10 (5+3+2)
using namespace std;
void prefix_sum(int *pr_sum,int *arr , int n){
    
    pr_sum[0] = arr[0];
    for(int i = 1 ; i<n ; i++){
        pr_sum[i] = pr_sum[i-1] + arr[i];
    }
}
int sum_range(int *arr,int *pr_sum,int n,int l,int r){
    int sum ;
    if(l!=0)
        sum = pr_sum[r]-pr_sum[l-1];
    else
        sum = pr_sum[r];

    return sum;
    
    
    }

int main(){
int n,l,r;
int arr[5] = {4 , 5 , 3 , 2,5};
int q;
int pr_sum[5];
n = 5;
cout<<"Enter number of queries";
cin>>q;
prefix_sum(pr_sum,arr,n);
for(int i = 0 ; i  < q ; i++){
cout<<"Enter value of l and r";
cin>>l>>r;
int sum = sum_range(arr,pr_sum,n,l,r);
cout<<"The sum is : "<<sum<<endl;}

// Time Complexity : - Max(O(n),O(q))
// Space Complexity : O(N)






return 0;
}