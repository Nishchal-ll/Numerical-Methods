#include<iostream>
#define f(x) pow(x,3)+1
#include<cmath>

using namespace std;
int main(){
    float a,b,h,result;
    cout<<"Enter Lower Limit: ";
    cin>>a;
    cout<<"Enter Upper Limit: ";
    cin>>b;
    h=b-a;
    result=(h/2)*(f(a)+f(b));
    cout<<"Final output: "<<result;
    return 0;
}
