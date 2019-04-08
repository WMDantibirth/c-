#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;



int main()
{
    ifstream fin;
    fin.open("ProgWithComments.cpp");
    string a,b;
    while(getline(fin,a)){
        //cout<<a<<endl;
        bool flag=false;
        bool star=false;
        for(int i = 0;i<a.size();i++){
            if(a[i]=='"')flag=true;
            if(a[i]=='/' and a[i+1]=='*')star = true;
        }
        if(flag==false){
            if(star==true){
                int star_start=a.find("/*");
                int star_end = a.find("*/");
                string another_a;
                for(int i=0;i<star_start;i++)another_a+=a[i];
                for(int i=star_end+2;i<a.size();i++)another_a+=a[i];
                a=another_a;
            }
            int place = a.find("//");
            cout<<a<<endl;
            cout<<"place="<<place<<endl;
            if(place==-1)b+=a;
            else {
                for(int i = 0;i<place;i++){
                    b+=a[i];
                }
            }
                b+="\n";
        }
        else{
            b+=a;
            b+="\n";
        }
    }
    cout<<b<<endl;;
    fin.close();


    return 0;
}
