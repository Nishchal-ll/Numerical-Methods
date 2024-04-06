#include<iostream>
#include<cmath>
#define f(x) exp(x)
using namespace std;
int main(){
    float a,b,x1,h,result;
    cout<<"Enter Lower Limit: ";
    cin>>a;
    cout<<"Enter Upper Limit: ";
    cin>>b;
    h=(b-a)/2;
    x1=a+h;
    result=(h/3)*(f(a)+4*f(x1)+f(b));
    cout<<"Final output: "<<result;
    return 0;
}
