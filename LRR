#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

double lrr(int n)
{
    vector<long long>a;
    for (int i=1;i<=n;i++){
        int t;cin>>t;a.push_back(t);
    }
    double up=1.0,down=0.0,r=0.5,out;
    while(1){
        out = 0.0;
        for(int i=0;i<=n;i++) out +=a[i]*pow(1+r,n-i);
        if(abs(out)<0.0001) return r;
        else if(out<0){
            down = r;r=(r+up)/2.0;
        }
        else{
            up = r;r = (down+r)/2.0;
        }
    }
}

int main()
{
    int T,t,n;
    cin>>T;t=T;
    while(t){
        cin>>n;
        double ans=lrr(n);
        printf("case #%d:\n%.4f%",T-t,100*ans);
        t--;
    }
    return 0;
}
