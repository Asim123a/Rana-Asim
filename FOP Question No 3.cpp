#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter number of elements you want to enter in Array: ";
	cin>>n;
	
	int array[5+n]={1,2,3,4,5};
	cout<<"Enter additional elements: ";
	for(int i=5;i<n+5;i++){
		cin>>array[i];
		
		
	}
	for(int k=0;k<5+n;k++){
		cout<<array[k];
	}
}
