
#include<iostream>
#include<cmath>
#define f(x) pow(x,3)
using namespace std;
int main(){
    float a,b,x1,x2,h,result;
    cout<<"Enter Lower Limit: ";
    cin>>a;
    cout<<"Enter Upper Limit: ";
    cin>>b;
    h=(b-a)/3;
    x1=a+h;
    x2=x1+h;
    result=(3*h/8)*(f(a)+3*f(x1)+3*f(x2)+f(b));
    cout<<"Final output: "<<result;
    return 0;
}
