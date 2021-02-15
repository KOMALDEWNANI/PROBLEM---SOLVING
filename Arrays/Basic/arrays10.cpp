#include<iostream>
using namespace std;
int main(){
int n,k;       //n is size of array and k is the element whose no of occurences we need to find
cout<<"Enter the size of array";
cin>>n;
cout<<"Enter the element whose number of occurences you need to search";
cin>>k;
int *ptr = new int[n];    //dynamic array
printf("Enter %d elements",n);
for(int i = 0 ; i < n ; i++){
    cin>>*(ptr+i);
    
    

}
int i = 0;
int count = 0;
while(i<n){
if(*(ptr+i)==k)
count++;
i++;




}
printf("%d occured %d times",k,count);
return 0;
}