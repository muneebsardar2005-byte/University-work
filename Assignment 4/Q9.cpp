#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(){
    vector<int> v={1,2,3,4,5,6};
    for(int i=0;i<v.size();i++)
        if(v[i]%2==0) v.erase(v.begin()+i--);

    vector<int>a={1,2,3}, b={1,3};
    int sum=0;
    for(int x:a) sum+=x;
    for(int x:b) sum-=x;
    cout<<"Missing: "<<sum;

    set<int>s(a.begin(),a.end());
    if(s.size()!=a.size()) cout<<"Duplicates found";
}
