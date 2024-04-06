#include <iostream> 
using namespace std; 
int main(){
    int coeff=5;
    //f(x)=x^5-6*x+15
    int eq[coeff+1]={1,0,0,0,-6,15};
    int n=5;
    int result=eq[0];
    for(int i=1;i<=coeff;i++){
        result=result*n+eq[i];
    }
    cout<<"Value of equation at x= "<<n <<" is "<<result<<endl;
    return 0;
}
