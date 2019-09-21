#include <bits/stdc++.h>

using namespace std;

int binarySearch(int *arr, int ele, int e,int x, int s=0){
    if(s<=e){
        int mid=(s+e)/2;
        if(ele<arr[mid])
            return binarySearch(arr,ele,mid-1,x,s);
        else if(ele>arr[mid])
            return binarySearch(arr,ele,e,x,mid+1);
        else{
            if(x==1){
                int a=binarySearch(arr,ele,mid-1,x,s);
                if(a>=0 && a<mid)
                    return a;
                return mid;
            }
            else{
                int a = binarySearch(arr,ele,e,x,mid+1);
                if(a<=e && a>mid)
                    return a;
                return mid;
            }
        }
    }
    else{
        return -1;
    }
}
int main()
{
    int sz,*arr;
    scanf("%d",&sz);
    for(int i=0;i<sz;++i){
        scanf("%d",&arr[i]);
    }
    int ele;
    scanf("%d",&ele);
    int first_occurence = binarySearch(arr,ele,sz-1,1);
    int last_occurence = binarySearch(arr,ele,sz-1,2);
    if(first_occurence!=-1)
        printf("%d occurs %d times",ele,last_occurence-first_occurence+1);
    else
        printf("%d doesn't occur in the list",ele);
    return 0;
}
