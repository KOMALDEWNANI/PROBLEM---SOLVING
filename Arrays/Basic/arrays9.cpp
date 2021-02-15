#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> arr;
    int n,k;
    cout<<"Enter size of array";
    cin>>n;
    cout<<"Enter value of k";
    cin>>k;
    for(int i = 0 ; i < n ; i++){
        int ele;
        cin>>ele;
        arr.push_back(ele);
        
    }
    for(int i = 1; i<n ; i++){
        int temp;
        int key = arr[i];
        for(int j = i-1 ; j>=0 ; j--){
            if(key < arr[j]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                
                
            }
        }
    }
    int kmin = arr[k-1];
    int kmax = arr[n-k];
    cout<<"Max is "<<kmax<<endl;
    cout<<"Min is "<<kmin<<endl;
    
        
    }
  