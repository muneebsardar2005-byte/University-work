#include <iostream>
#include <vector>
using namespace std;

class MyVector{
    int *arr, sz;
public:
    MyVector(){ sz=0; arr=new int[100]; }
    void push_back(int x){ arr[sz++]=x; }
    void pop_back(){ sz--; }
    int size(){ return sz; }
};

int main(){
    int n; cin>>n;
    vector<vector<int>> m(n, vector<int>(n));
}
