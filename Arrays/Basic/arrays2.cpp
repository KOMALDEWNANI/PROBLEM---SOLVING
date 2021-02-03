#include<iostream>
using namespace std;
int *create_insert(int size){
int *ptr = new int[size];
int *temp = ptr;
printf("Enter %d elements" , size);
for(int i = 0 ; i < size ; i++){
    cin>>*(ptr+i);
    cout<<endl;
}
return temp;
}
int BinarySearch(int *arr , int start , int end , int  k){
    
    int mid = (start + end)/2;
    
    if(start <= end){
    if(*(arr+mid) == k){
        
        return 1;

    }
    else if(*(arr + mid) > k){
        return BinarySearch(arr,start, mid -1 , k);
    }
    else
        return BinarySearch(arr , mid + 1 , end , k ); 
}
    else
        return 0;
        }

    



int main(){
    int n , m;
    cout<<"Enter size of array"<<endl;
    cin>>m;
    cout<< "Enter element to search";
    cin>>n;
    int *ptr = create_insert(m);
    
    int res = BinarySearch(ptr , 0 , m-1 , n);
    
    if(res == 1)
       cout<<"True";
    else
       cout<<"False";
    

return 0;
}