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
    int i = 1;
    string line;
    while(getline(a,line)){
        istringstream ss(line);
        string word;
        while(ss>>word){
            if(find(b.begin(),b.end(),word)!=b.end())out[word].push_back(i);
        }
        i++;
    }
    return out;
}

int main(int argc, char*argv[])
{
    /*ofstream file;
    file.open("123");
    file.close();*/
    char* keywords=argv[1];
    char* text2search=argv[2];
    char* result=argv[3];
    ifstream input_file1;
    ifstream input_file2;
    ofstream output_file;
    input_file1.open(keywords);
    input_file2.open(text2search);
    output_file.open(result);
    string a;
    vector<string>key;//存放keywords中的关键词
    while(input_file1>>a){
        key.push_back(a);
    }
    input_file1.close();
    map<string,vector<int> >out = f(input_file2,key);
    input_file2.close();
    for(int i=0;i<key.size();i++)
    {
        output_file << key[i] << " : { ";
        if(out[key[i]].size()!=0) {
            for (int j = 0; j < out[key[i]].size() - 1; j++) {
                output_file << out[key[i]][j] << ",";
            }
            output_file << out[key[i]][out[key[i]].size()-1];
        }
        output_file<<" }"<<"\n";
    }
    output_file.close();
    return 0;
}
