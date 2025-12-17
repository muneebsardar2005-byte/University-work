#include <iostream>
using namespace std;

void inputSales(int s[7][5]){
    for(int i=0;i<7;i++)
        for(int j=0;j<5;j++)
            cin>>s[i][j];
}

int main(){
    int s[7][5], maxP=0, maxRev=0, bestDay=0, daySum=0;
    inputSales(s);

    for(int j=0;j<5;j++){
        int sum=0;
        for(int i=0;i<7;i++) sum+=s[i][j];
        if(sum>maxRev){ maxRev=sum; maxP=j; }
    }

    for(int i=0;i<7;i++){
        int sum=0;
        for(int j=0;j<5;j++) sum+=s[i][j];
        if(sum>daySum){ daySum=sum; bestDay=i; }
    }

    cout<<"Best Product: "<<maxP+1<<"\nBest Day: "<<bestDay+1;
}
