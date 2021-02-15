// Problem #2 : Equilibrium index of an array
// Description - Equilibrium index of an array is an index such that the sum of elements at lower indexes is equal to the sum of elements at higher indexes. We are given an Array of integers, We have to find out the first index i from left such that -
// A[0] + A[1] + ... A[i-1] = A[i+1] + A[i+2] ... A[n-1]


#include<iostream>
#include<vector>
using namespace std;
void prefix_sum(int &arr[] , int &pr_sum[],int n ){ 
    
    pr_sum[0] = arr[0];
    for(int i = 1 ; i<n ; i++){
        pr_sum[i] = pr_sum[i-1] + arr[i];
    }
}
int equi_index(int &arr[] ,int &pr_sum[] ,int &n){

for(int i = 1; i< n ; i++){
    int post_sum = pr_sum[n-1] - pr_sum[i];
    if(pr_sum[i-1]==post_sum)
        return i;
}
return -1;
}
int main(){
int arr[7] ={};
int pr_sum[7]={};

int n = 7;

for(int i = 0 ; i< n ; i++){
    cout<<"Enter element : ";
     cin>>arr[i];  
}

prefix_sum(arr,pr_sum,n);
int equi = equi_index(arr,pr_sum,n);
if(equi == -1)
cout<<"No equilibrium index found";
else
cout<<"Equilibrium index is "<<equi;


return 0;
}
//Time Complexity  - O(N)
//Auxilary Space - O(N)