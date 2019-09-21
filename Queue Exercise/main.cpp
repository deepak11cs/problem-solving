#include <bits/stdc++.h>

using namespace std;

struct inp{
    int start;
    int finish;
    int add;
};

int main()
{
    queue<inp> q;
    ifstream fin("input.in");
    int sz;
    int *arr;
    fin>>sz;
    arr=new int[sz];
    for(int i=0;i<sz;++i){
        fin>>arr[i];
    }
    while(!fin.eof()){
        inp x;
        fin>>x.start>>x.finish>>x.add;
        if(!fin.eof())
            q.push(x);
    }
    while(!q.empty()){
        inp p=q.front();
        for(int i=p.start-1;i<=p.finish-1;++i){
            arr[i]+=p.add;
        }
        q.pop();
    }
    for(int i=0;i<sz;++i){
        cout<<arr[i]<<" ";
    }
    return 0;
}
