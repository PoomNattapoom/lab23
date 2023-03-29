#include<iostream>
#include<cstdlib>
using namespace std;

int main(int argc, char* argv[]){
    float x;
    for(int i=1;i<argc;i++){
        x+=atof(argv[i]);
    }
    if(argc>1){
        cout<<"---------------------------------\n";
        cout<<"Average of "<<argc-1<<" numbers = "<<x/(argc-1)<<"\n";
        cout<<"---------------------------------\n";
    }else {
         cout<<"Please input numbers to find average.";
    }
    return 0;
}
