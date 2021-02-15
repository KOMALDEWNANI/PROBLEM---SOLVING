#include<iostream>
using namespace std;
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
int *neg=new int[n];    //stores all the negative elements
int *pos=new int[n];    //stores all the positive elements

int i = 0 ; 
int j=0;
int k = 0;
while(i<n){
    if(*(ptr+i)<0){
    *(neg+j)=*(ptr+i);
    j++;}
    else if(*(ptr+i)>0){
        *(pos+k)=*(ptr+i);
        k++;
    }
    i++;
    

}
// printf("%d %d",j,k);
int m;
for(m = 0 ; m<j ; m++){

    *(ptr+m)=*(neg+m);
}
int a=0;
for(int s = j; s<n ; s++){

    *(ptr+s)=*(pos+a);
    a++;
}
for(int z = 0; z <n ; z++){
    cout<<*(ptr+z);
}
return 0;
}

