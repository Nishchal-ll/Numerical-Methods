#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main() {
    int deg,c;
    float x,result;
    cout<<"Enter the value of x:";
    cin>>x;
    cout << "Enter the highest degree: ";
    cin >> deg;
    c=deg;
    float m[deg],n[deg];
    for(int i=0;i<=deg;i++){
        cout<<"Enter a coffecient of degree "<<c<<" :";
        cin>>m[c];
        if(i==0){
            n[c]=m[c];          
            cout<<n[c]<<endl;
        } else{
            n[c]=m[c]+n[c+1]*x;
            cout<<n[c]<<endl;
        }
        c--;
    }
    result=n[0];
    cout << endl << "The result is " << result   ;
    return 0;
}
