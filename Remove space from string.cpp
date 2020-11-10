#include<bits/stdc++.h>
#include<iostream>
using namespace std;



void Remove_space(char s[
                  ]){

int c=0;

for(int i=0;s[i];i++){

    if(s[i] != ' ')
        s[c++]=s[i];
}

s[c]='\0';

}

int main(){


char s[20];
cin.getline(s,20);

Remove_space(s);

cout<<"\n Entered string :"<<s;


return 0;
}
