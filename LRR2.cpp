#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
const double epsilon=1e-5;
double f(const double*c,int n,double r){
    double v=0;
    for(int i=0;i<=n;i++)
        v+=c[i]*pow(1+r,n-i);
        if(fabs(v)<epsilon) v=0;
        return v;
}

int main(){
    int T;cin>>T;
    for(int i=0;i<T;i++){
        cout<<"case #"<<i<<":\n";
        int n;cin>>n;double c[101];
        for(int j=0;j<=n;j++) cin>>c[j];
        c[0]*=-1;
        double upper=1,lower=-1,r,t;
        while(t=f(c,n,r)){
            if(t>0) lower=r;
            else upper=r;
            r=(upper+1)/2;
        }
        cout<<fixed<<setprecision(4)<<r*100<<"%\n";
    }
    return 0;
}
