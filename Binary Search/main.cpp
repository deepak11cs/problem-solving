#include <bits/stdc++.h>

using namespace std;

int binarySearch(int *arr,int sz,int ele,int s=0,int e=-5){
    if(e==-5)
        e=sz-1;
    if(s<=e){
        int mid=(int)((s+e)/2);
        if(arr[mid]>ele)
            return binarySearch(arr,sz,ele,s,mid-1);
        else if(arr[mid]<ele)
            return binarySearch(arr,sz,ele,mid+1,e);
        else
            return mid;
    }
    else{
        return -1;
    }
}
int main()
{
    int *arr,sz,*ele,cs;
    cin>>sz>>cs;
    arr=new int[sz];
    for(int i=0;i<sz;++i)
        cin>>arr[i];
    ele=new int[cs];
    for(int i=0;i<cs;++i){
        cin>>ele[i];
        cout<<binarySearch(arr,sz,ele[i])<<endl;
    }
    return 0;
}
