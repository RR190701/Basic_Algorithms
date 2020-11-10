#include<bits/stdc++.h>
#include<iostream>
using namespace std;



int MEX(int arr[], int n){

    int curpos;


    for(int i=0;i<n;i++){
         curpos = arr[i] - 1;

        while((arr[i]>0&&arr[i]<=n)&&(arr[i]!=i+1)){
            swap(arr[i],arr[curpos]);
            curpos=arr[i]-1;
        }
    }


    for(int i=0;i<n;i++){
        if(arr[i]!=i+1)
            return i+1;
    }

    return n+1;

}

int main(){


int arr[]={1,0,2,3,8,6,4,12};

int s = sizeof(arr)/sizeof(arr[0]);

int mex=MEX(arr,s);
cout<<mex;


return 0;
}
