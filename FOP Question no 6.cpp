#include<iostream>
using namespace std;
int main(){
	cout<<"One of the problem in aerospace is to find the coefficient of lift: "<<endl;
	
	cout<<"Enter Data: "<<endl;
	int wing_span;
	cout<<"Enter Wing span of Airfoil: "<<endl;
	cin>>wing_span;
	int lift;
	cout<<"Enter lift of Airfoil: "<<endl;
	cin>>lift;
	int dynamic_pressure;
	cout<<"Enter dynamin pressure of Airfoil: "<<endl;
	cin>>dynamic_pressure;
	
	int coefficient_of_lift;
	
	cout<<"Coefficient of lift is = "<<lift/(dynamic_pressure*wing_span);
}

