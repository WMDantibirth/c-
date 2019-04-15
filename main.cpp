#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <string>
#include <fstream>
#include <sstream>
#include <map>

using namespace std;

map<string,vector<int> >f(istream& a,const vector<string>& b)
{
    map<string,vector<int> >out;
    vector<int>aa;
    aa.push_back(1);
    out["a"]=aa;
    return out;
}

int main(/*int argc, char*argv[]*/)
{
    char keywords[]="keywords";
    char text2search[]="text2search";
    //string result=argc[3];
    ifstream input_file1;
    ifstream input_file2;
    //fstream out;
    input_file1.open(keywords);
    input_file2.open(text2search);
    //out.open(result, ios::out);
    cout<<input_file1<<endl;
    string a;
    vector<string>key;
    while(input_file1>>a){
        key.push_back(a);
    }
    input_file1.close();
    cout<<key.size();
    map<string,vector<int> >out = f(input_file2,key);
    input_file2.close();
    for(unsigned int i=0;i<key.size();i++){
        cout<<key[i]<<endl;
    }
    return 0;
}
