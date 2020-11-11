#include<bits/stdc++.h>
#include<iostream>
using namespace std;



void Set_back(int A[], int s){

    int j=s-1;

    for(int i=s-1;i>=0;i--){
        if(A[i]!=-1){
            A[j]=A[i];
            j--;
        }
    }

}

void Merge(int A[],int B[],int s1,int s2){

int i=0,j=s2,k=0;

while(k<s1){

   if(( j < s1 && A[j]<B[i])||(i==s1)){

    A[k]=A[j];
    j++;

   }
   else{
     A[k]=B[i];
     i++;
   }


    k++;
}



}

int main(){


int A[]={1,-1,1,-1,-1,-1,2,3,-1,7,};
int B[]={3,4,5,9,9};

int s1=sizeof(A)/sizeof(A[0]);
int s2 = sizeof(B)/sizeof(B[0]);

 Set_back(A,s1);

Merge(A,B,s1,s2);

for(int i=0;i<s1;i++){
    cout<<A[i]<<" ";
}


return 0;
}
