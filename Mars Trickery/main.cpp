#include <bits/stdc++.h>

using namespace std;

int main()
{
    int sz;
    int *arr,*b,auxb=0;
    cin>>sz;
    arr=new int[sz];
    b=new int[sz]{0};
    for(int i=0;i<sz;++i){
        cin>>arr[i];
    }
    int t;
    cin>>t;
    for(int i=0;i<t;++i){
        int left;
        int right;
        int add;
        cin>>left>>right>>add;
        b[left-1]+=add;
        b[right]-=add;
    }
    for(int i=0;i<sz;++i){
        auxb+=b[i];
        arr[i]+=auxb;
        cout<<arr[i]<<" ";
    }
    return 0;
}
