#include <bits/stdc++.h>

using namespace std;

int* countingSort(int *arr, int sz){
    int mx = *max_element(arr,arr+sz);
    int mn = *min_element(arr,arr+sz);
    int *res = new int[mx-mn];
    for(int i=0; i<mx-mn; ++i){
        res[i]=0;
    }
    for(int i=0;i<sz;++i){
        res[arr[i]-1]++;
    }
    int *arr1 = new int[sz];
    for(int i=0,j=0; i<sz;){
        if(res[i]>0){
            arr1[j++]=i+1;
            res[i]--;
        }
        else{
            i++;
        }
    }
    return arr1;
}

int main()
{
    int *arr;
    ifstream fin("input.in");
    ofstream fout("output.out");
    int sz;
    fin>>sz;
    arr = new int[sz];
    for(int i=0;i<sz;++i){
        fin>>arr[i];
    }
    int *res = countingSort(arr,sz);
    for(int i=0;i<sz;++i){
        fout<<res[i]<<" ";
    }
    return 0;
}
