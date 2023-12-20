#include<iostream>
using namespace std;
int main(){
	int array[6]={3,4,6,1,2,5};
	
	for(int j=0;j<6;j++){
		for(int i=0;i<6;i++){
			if(array[i]>array[i+1]){
				int temp=array[i];
				array[i]=array[i+1];
				array[i+1]=temp;
			}
		}
	}
	cout<<"Ascending order "<<endl;
	for (int k=0;k<6;k++){
		cout<<array[k];
	}
	
	cout<<endl;

		for(int j=0;j<6;j++){
		for(int i=0;i<5;i++){
			if(array[i]<array[i+1]){
				int temp=array[i];
				array[i]=array[i+1];
				array[i+1]=temp;
			}
		}
	}
	cout<<"Descending order "<<endl;
	for (int z=0;z<6;z++){
		cout<<array[z];
	}
}
