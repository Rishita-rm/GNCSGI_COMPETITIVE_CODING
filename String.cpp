//Day 2: Problem Statement - DNA Storage
//Topic: String
#include <iostream>
using namespace std;
int main() 
{
int T,N;
cin>>T;
while(T--) 
{
cin>>N;
string s,str="";
cin>>s;
for(int i=0;i<N;i+2)
{
string S="";
S+=s[i]+s[i+1];
if(S== "00") 
str+='A';
else if(S== "01") 
str+= 'T';
else if(S=="10")
str+= 'C' ; 
else str+='G';
}
cout<<str<<endl;
}
return 0;
}
