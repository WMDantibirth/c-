#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
    char* input_filename=argv[1];
    char* output_filename=argv[2];
    ifstream input_file;
    fstream output_file;
    input_file.open(input_filename);
    output_file.open(output_filename, ios::out);
    string a,b;
    while(getline(input_file,a)){
        b+=a;b+="\n";
    }
    input_file.close();
    int state=0;
    for(unsigned long long int i=0;i<b.size();i++){
        char c=b[i];

        switch(state){
            case 0:
                if(c=='/')
                    state=1;
                else if(c=='\'')
                    state=6;
                else if(c=='\"')
                    state=8;
                else
                    output_file<<c;
                break;
            case 1:
                if(c=='*')
                    state=2;
                else if(c=='/')
                    state=4;
                else{
                    output_file<<'/';
                    output_file<<c;
                    state=0;
                }
                break;
            case 2:
                if(c=='*')
                    state=3;
                else
                    state=2;
                break;
            case 3:
                if(c=='/')
                    state=0;
                else if(c=='*')
                    state=3;
                else
                    state=2;
                break;
            case 4:
                if(c=='\\')
                    state=5;
                else if(c=='\n')
                {
                    state=0;
                    output_file<<c;
                }
                break;
            case 5:
                if(c=='\\')
                    state=5;
                else
                    state=4;
                break;
            case 6:
                if(c=='\\')
                    state=7;
                else if(c=='\'')
                {
                    state=0;
                    output_file<<c;
                }
                break;
            case 7:
                state=6;
                break;
            case 8:
                if(c=='\\')
                    state=9;
                else if(c=='\"')
                {
                    state=0;
                    output_file<<c;
                }
                break;
            case 9:
                state=8;
                break;
        }
        if(state==6||state==7||state==8||state==9)
            output_file<<c;
    }
    output_file.close();
    return 0;

}
