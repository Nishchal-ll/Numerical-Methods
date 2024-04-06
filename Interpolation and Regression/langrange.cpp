#include<iostream>
#include<math.h>
using namespace std;
class langrange{
    private:
    int i,j,n;
    float x[100],y[100],res,term,ip;
    public:
    
    void getdata(){
        cout<<"Enter the value of n"<<endl;
        cin>>n;
        for(i=0;i<n;i++){
            cout<<"Enter the value of x["<<i<<"]"<<endl;
            cin>>x[i];
            cout<<"Enter the value of y["<<i<<"]"<<endl;
            cin>>y[i];
        }
        cout<<"Enter the interpolation point"<<endl;
        cin>>ip;
    }
    
    void process(){
        for(i=0;i<n;i++){
            term=1;
            for(j=0;j<n;j++){
                if(i!=j){
                    term=term*(ip-x[j])/(x[i]-x[j]);
                }
            }
            res=res+term*y[i];
        }
        cout<<"The value at "<<ip<<" is "<<res<<endl;
    }
};
int main(){
    langrange l1;
    l1.getdata();
    l1.process();
    return 0;
}
