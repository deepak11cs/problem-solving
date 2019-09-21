#include <bits/stdc++.h>

using namespace std;

bool desc(int x,int y){
    return x>y;
}

int main()
{
    int arr[10]={23,6,3,6,1,7,4,17,11,2};
    cout<<"ascending order sort:"<<endl;
    sort(arr+0,arr+10);
    for(int i=0;i<10;++i)
        cout<<arr[i]<<" ";
    cout<<"\ndescending order sort:"<<endl;
    sort(arr+0,arr+10,desc);
    for(int i=0;i<10;++i)
        cout<<arr[i]<<" ";
    return 0;
}
