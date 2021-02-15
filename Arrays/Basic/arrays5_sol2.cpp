//Time Complexity - O(N)
//Auxilary Space - O(1)

#include<iostream>
using namespace std;
int equi_index(int *arr, int n){
    int sum = 0;
    int left_sum = arr[0];
    for(int i = 0 ; i<n; i++)
        sum+=arr[i];
    sum-=left_sum;
    for(int i = 1 ; i < n ; i++){
        sum=sum-arr[i];
        if(left_sum == sum)
           return i;
        left_sum+=arr[i];


    }
    return -1;
}
int main(){
int arr[7] ={};


int n = 7;

for(int i = 0 ; i< n ; i++){
    cout<<"Enter element : ";
     cin>>arr[i];  
}
int equi_ind = equi_index(arr,n);
if(equi_ind == -1)
cout<<"No equilibrium index found";
else
cout<<"Equilibrium index is "<<equi_ind;



return 0;
}
