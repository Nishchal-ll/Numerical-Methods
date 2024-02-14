#include<iostream>
#include<math.h>
#include<stdlib.h>
#define f(x) sin(x)+x*x+5*x-9
#define g(x) (9-sin(x)-x*x)/5
using namespace std;
int main(){
	float x1,x2,err;
	int n;
	int step=1;
	cout<<"Enter the value of x1"<<endl;
	cin>>x1;
	cout<<"Enter the value of error"<<endl;
	cin>>err;
	cout<<"Enter the number of iterations"<<endl;
	cin>>n;
	do{
		x2=g(x1);
		cout<<"Iteration-"<<step<<"x= "<<x1<<" f(x)= "<<f(x1)<<endl;
		step=step+1;
		if(step>n){
			cout<<"Unable to find root"<<endl;
			exit(0);
		}
		x1=x2;
	}while(fabs(f(x2))>err);
	cout<<"Root is "<<x2;
	return 0;
	
}
