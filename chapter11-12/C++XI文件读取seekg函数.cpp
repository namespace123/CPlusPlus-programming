#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main(){

    int values[] = {3, 7, 0, 5, 4};
    ofstream os("integer", ios_base::out | ios_base::binary);
    os.write(reinterpret_cast<char *>(&values), sizeof(values));
    os.close();
    
    ifstream is("integer", ios_base::out | ios_base::binary);
    if(is){
        is.seekg(2 * sizeof(int));
        int v; 
        is.read(reinterpret_cast<char *>(&v), sizeof(int));
        cout<<v<<endl;
    }else{
        cout<<"error"<<endl;
    }
	return 0;
}

