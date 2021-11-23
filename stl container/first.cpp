


#include<bits/stdc++.h>
using namespace std;

int main()
{
  map<string ,int> ranklist;
  ranklist["alpha"]=1;
  ranklist["beta"]=2;
  cout<<ranklist.at("alpha")<<"-->"<<ranklist.at("beta")<<" "<< ranklist.size();
  cout<<endl;
  cout<< ranklist["alpha"];


}



