#include<iostream>
#include<math.h>
#define f(x) sin(x/2)+2*cos(x)
using namespace std;
int main(){
 float lower, upper, integration,h, k;
int n,i;
 cout<<"Enter lower limit ";
 cin>>lower;
 cout<<"Enter upper limit ";
 cin>>upper;
 cout<<"Enter n ";
 cin>>n;
 cout<<"SIMPSON'S 1/3 RULE"<<endl;
//formula=3h/8*[(y0+y8)+4(y1+y3+y5+y7)+2(y2+y4+y6)]
 h = (upper - lower)/n;
 integration = f(lower) + f(upper);
 for( i=1; i<n; i++)
 {
  if(i%2==0)
  {
    integration = integration + 2 * (f(lower + i*h));
  }
  else
  {
    integration = integration + 4 *  (f(lower + i*h));
  }
 }
 integration = integration * h/3;
 cout<< endl<<"The value of integration is: "<< integration;
 return 0;
}
