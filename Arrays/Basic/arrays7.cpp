#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int> &v1 , int start , int end){
    int temp;
    
    
    if(start>=end){
        return;
        
    }
    temp = v1[start];
    v1[start] = v1[end];
    v1[end] = temp;
    reverse(v1 , start + 1 , end - 1);
    
    
    
}

int main() {
	//code
	int N;
	vector<int> v1;
	
	cin>>N;
	cout<<endl;
	
	for(int i = 0 ; i < N ; i++){
	    int ele;
        cin>>ele;
        v1.push_back(ele);
	}
	reverse(v1 , 0 , N-1);
	for(int i = 0 ; i < N ; i++){
	    cout<<v1.at(i);
	    
	}
	
	return 0;
}
