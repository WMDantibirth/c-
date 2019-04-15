#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <string>
#include <fstream>
#include <sstream>
#include <map>
#include <algorithm>

using namespace std;

map<string,vector<int> >f(istream& a,const vector<string>& b)
{
    map<string,vector<int> >out;
    vector<int>aa;
    int i = 0;
    string line;
    while(getline(a,line)){
        istringstream ss(line);
        string word;
        while(ss>>word){
            if(find(b.begin(),b.end(),word)!=b.end())out[word].push_back(i);
        }
    }
    return out;
}

int main(/*int argc, char*argv[]*/)
{
    /*ofstream file;
    file.open("123");
    file.close();*/
    char keywords[]="keywords";
    char text2search[]="text2search";
    //string result=argc[3];
    ifstream input_file1;
    ifstream input_file2;
    //fstream out;
    input_file1.open(keywords);
    input_file2.open(text2search);
    //out.open(result, ios::out);
    string a;
    vector<string>key;
    while(input_file1>>a){
        key.push_back(a);
    }
    input_file1.close();
    map<string,vector<int> >out = f(input_file2,key);
    input_file2.close();
    for(int i=0;i<key.size();i++)
    {
        for(int j=0;j<out{i}.size();j++){
            cout<<out{i}[j]<<endl;
        }
    }
    return 0;
}
