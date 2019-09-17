#include <bits/stdc++.h>

using namespace std;

int *sieve;

int main()
{
    int t;
    cin>>t;
    int *arr1,*arr2;
    arr1=new int[t];
    arr2=new int[t];
    int mx=0;
    for(int i=0;i<t;++i){
        cin>>arr1[i]>>arr2[i];
        if(arr2[i]>mx)
            mx = arr2[i];
    }
    mx=int(sqrt(mx));
    sieve = new int[mx];
    sieve[0]=1;
    sieve[1]=1;
    for(int i=2;i<=mx;++i){
        if(!sieve[i]){
            for(int j=i;j*i<=mx;++j){
                sieve[j*i]=1;
                //cout<<j*i<<endl;
            }
        }
    }
    for(int i=0;i<t;++i){
        for(int j=arr1[i];j<=arr2[i];++j){
            int flag=0;
            if(j<mx){
            	cout<<j<<endl;
            }
            else{
            	for(int k=2;k<=sqrt(j);++k){
            		if(!sieve[k]){
            			if(j%k==0){
            				flag=1;
            				break;
            			}
            		}
            	}
            	if(flag==0)
            		cout<<j<<endl;
            }
        }
    }
    //cout<<"finished";
    return 0;
}
