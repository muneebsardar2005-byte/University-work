#include <iostream>
using namespace std;

int main(){
    char g[5][5];
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
            cin>>g[i][j];

    int count=0;
    for(int i=0;i<5;i++){
        int len=0;
        for(int j=0;j<5;j++){
            if(g[i][j]!='#') len++;
            else{ if(len>=3) count++; len=0; }
        }
        if(len>=3) count++;
    }
    cout<<"Horizontal words: "<<count;
}
