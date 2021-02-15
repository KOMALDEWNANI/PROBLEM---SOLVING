#include<iostream>
using namespace std;
void maxmin(int *arr, int *min , int *max , int n){
    int a = arr[0] , b = arr[0]; //a is maximum b is minimum
    
    
    for(int i = 0 ; i < n ; i++){
        if(a<arr[i])
        a=arr[i];
        if(b>arr[i])
        b=arr[i];
    }
    *max=a;
    *min=b;
    
}
int range(int *max,int *min){
    int r;
    int a =*max;
    int b=*min;
    r=a-b;
    return r;
}
int main(){
int n;       //n is size of array 
int max;
int min;
cout<<"Enter the size of array";
cin>>n;
int *ptr = new int[n];    //dynamic array
printf("Enter %d elements",n);
for(int i = 0 ; i < n ; i++){
    cin>>*(ptr+i);
    
    }
maxmin(ptr,&min,&max,n);
int r = range(&max,&min);
cout<<"Range is "<<r;
return 0;
}