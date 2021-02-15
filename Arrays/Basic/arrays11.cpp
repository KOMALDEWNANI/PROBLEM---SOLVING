#include<iostream>
using namespace std;
int occurences(int *arr , int n , int k){
int i = 0;
int count = 0;
while(i<n){
if(*(arr+i)==k)
count++;
i++;




}
return count;

}
int main(){
int n;       //n is size of array 
cout<<"Enter the size of array";
cin>>n;
int *ptr = new int[n];    //dynamic array
printf("Enter %d elements",n);
for(int i = 0 ; i < n ; i++){
    cin>>*(ptr+i);
    
    }
int *ptr1 = new int[n];
int *temp = ptr1;
int count0 = occurences(ptr,n,0);
int count1 = occurences(ptr,n,1);
int count2 = n-count0-count1;
for(int i = 0 ; i < count0 ; i++){
    *temp = 0;
    temp++;
}
for(int i = 0 ; i < count1 ; i++){
    *temp = 1;
     temp++;
}
for(int i = 0 ; i < count2 ; i++){
    *temp = 2;
    temp++;
}
for(int i = 0 ; i < n ; i++){
    *(ptr+i)=*(ptr1+i);
    cout<<*(ptr+i);
    

}


return 0;
}