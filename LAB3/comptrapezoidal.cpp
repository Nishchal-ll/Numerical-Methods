#include<iostream>
#include<math.h>
#define f(x) sin(x/2)+2*cos(x)
using namespace std;
int main(){
 float lower, upper, integration,h, k;
int n;
 cout<<"Enter lower limit ";
 cin>>lower;
 cout<<"Enter upper limit ";
 cin>>upper;
 cout<<"Enter value of n ";
 cin>>n;
 cout<<"TRAPEZOIDAL RULE"<<endl;
 h = (upper - lower)/n;
 integration = f(lower) + f(upper);
 for( int i=1; i<n; i++)
 {
  integration = integration + 2 * (f(lower + i*h));
 }
 integration = integration * h/2;
 cout<< endl<<"The value of integration is: "<< integration;
 return 0;
}
