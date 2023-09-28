#include<iostream>
#include<fstream>
#include<string>
#include<map> 
using namespace std;

int main(){
    
    locale loc(".936");
    wcout.imbue(loc);
    wifstream in("output.out2");
    wofstream out("output.out3");
    in.imbue(loc);
    out.imbue(loc);
    
    wstring line;
    map<wchar_t, int> counter;
    while(getline(in, line)){
        for(int i = 0; i < line.length(); i++){
            counter[line[i]]++;
        }
    }
    
    map<wchar_t, int>::iterator iter;
    int i = 1;
    for(iter = counter.begin(); iter != counter.end(); ++iter, ++i){
        out<<iter->first<<"\t"<<iter->second<<"\t";
        if(i % 4 == 0){
             out<<endl;
        }
    }
    in.close();
    out.close();
	return 0;
}

