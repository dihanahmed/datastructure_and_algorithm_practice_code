

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> d;
     d.push_back(1);
     d.push_back(2);
     d.push_back(3);

     vector<int> :: const_iterator it;
     for(it=d.cbegin();it!=d.cend();it++){
        *it=*it+1;//it won't work because constant operator
     cout<<*it<<" ";
     }



}

