#include<iostream>
#include<math.h>
#define f(x) sin(x/2)+2*cos(x)
using namespace std;
int main(){
 float lower, upper, integration,h, k;
int n,i;
 cout<<"Enter lower limit ";
 cin>>lower;
 cout<<"Enter upper limit  ";
 cin>>upper;
 cout<<"Enter n ";
 cin>>n;
 cout<<"SIMPSON'S 3/8 RULE"<<endl;
 //formula=3h/8*[(y0+y8)+2(y3+y6)+3(y1+y2+y4+y5+y7)]
 h = (upper - lower)/n;
 integration = f(lower) + f(upper);
 for( i=1; i<n; i++)
 {
  if(i%3==0)
  {
    integration = integration + 2 * (f(lower + i*h));
  }
  else
  {
    integration = integration + 3 *  (f(lower + i*h));
  }
 }
 integration = integration * 3*h/8;
 cout<< endl<<"Required value of integration is: "<< integration;
 return 0;
}
