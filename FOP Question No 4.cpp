#include<iostream>
using namespace std;
int main(){
	
	int max=0;
	int i=6;
	int n;
	cout<<"Enter number upto which you want to find the prime number: ";
	cin>>n;
	cout<<"Prime numbers upto "<<n<<" are"<<endl;
	while(i<=n){
		if(i%2!=0 && i%3!=0 && i%5!=0){
			cout<<i<<endl;
			if(max<i){max=i;
			}
			i++;
		}
		i++;
	}
	cout<<"Max no is "<<max;
}
