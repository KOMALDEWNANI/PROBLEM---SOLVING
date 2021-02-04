#include<iostream>
using namespace std;
int *create_insert(int size){
int *ptr = new int[size];
int *temp = ptr;
printf("Enter %d elements" , size);
for(int i = 0 ; i < size ; i++){
    cin>>*(ptr+i);
    
}
return temp;}
int main(){
        int m,max,min;
       
        cout<<"Enter size of array"<<endl;
        cin>>m;
       
        int *ptr = create_insert(m);
        max = *ptr;
        min = *ptr;
        for(int i = 1 ; i < m ; i++){
            if(max <= *(ptr+i))
                max = *(ptr+i);
            if(min >= *(ptr+i))
                min = *(ptr + i);

            
        }
        cout<<"Maximum is "<<max;
        cout<<"Minimum is "<<min;

return 0;
}