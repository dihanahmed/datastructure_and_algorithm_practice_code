



#include<bits/stdc++.h>
using namespace std;

int main()
{
  map<string ,int> ranklist;
  ranklist["alpha"]=1;
  ranklist["beta"]=2;
  ranklist.insert({"code",6});
  cout<<ranklist["code"]<<endl;
  ranklist["beta"]=10;
  cout<<ranklist["beta"]<<endl;



  map<string,int> :: iterator itr;
  for(itr=ranklist.begin();itr!=ranklist.end();itr++){
  cout<<itr->first<<'\t'<<itr->second<<endl;}
}




