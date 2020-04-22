#include "StringUtils.h"


string StrToLower(string instr){
    string outstr=instr;
    transform(outstr.begin(),outstr.end(),outstr.begin(),
    [](unsigned char c){ return tolower(c);});
    return outstr;
}
string StrToUpper(string instr){
    string outstr=instr;
    transform(outstr.begin(),outstr.end(),outstr.begin(),
    [](unsigned char c){ return toupper(c);});
    return outstr;
}

// for string to number convert
vector<double> SplitStrNum(string &instr){
    vector<double> result;
    int i,n;
    n=instr.size();
    int start,end;
    start=-1;end=-2;

    result.clear();

    if(n==1){
        result.push_back(atof(instr.c_str()));
        return result;
    }
    for(i=0;i<n;i++){
        if(i==0){
            if(instr.at(i)=='-'&&(instr.at(i+1)>='0'&&instr.at(i+1)<='9')){
                start = i;
            }
            else if(instr.at(i)>='0'&&instr.at(i)<='9'){
                start=i;
            }

            if((instr.at(i)>='0'&&instr.at(i)<='9')&&(instr.at(i+1)==' '||instr.at(i+1)==',')){
                end=i;
            }
        }
        else if(i==n-1){
            if(instr.at(i)>='0'&&instr.at(i)<='9'){
                end=i;
                if((instr.at(i-1)<'0'||instr.at(i-1)>'9')&&instr.at(i-1)!='.'&&instr.at(i-1)!='e'&&instr.at(i-1)!='-'){
                    start=i;
                }
            }
        }
        else{
            if(instr.at(i)=='-'&&(instr.at(i+1)>='0'&&instr.at(i+1)<='9')){
                if(instr.at(i-1)==' '||instr.at(i-1)==','||instr.at(i-1)=='='||instr.at(i-1)=='<'||instr.at(i-1)=='>'||instr.at(i-1)==':'){
                    start=i;
                }
            }
            else if((instr.at(i)>='0'&&instr.at(i)<='9')&&((instr.at(i-1)<'0'||instr.at(i-1)>'9')&&instr.at(i-1)!='.'&&instr.at(i-1)!='e'&&instr.at(i-1)!='-')){
                start=i;
            }

            if((instr.at(i)>='0'&&instr.at(i)<='9')&&(instr.at(i+1)<'0'||instr.at(i+1)>'9')&&instr.at(i+1)!='.'&&instr.at(i+1)!='e'){
                end=i;
            }
        }
        //cout<<"i="<<i<<" start="<<start<<"<--->end="<<end<<endl;
        if(end>=start&&end==i&&start>=0){
            //cout<<"start="<<start<<"<--->end="<<end<<endl;
            result.push_back(atof(instr.substr(start,end+1-start).c_str()));
        }
    }
    return result;
}