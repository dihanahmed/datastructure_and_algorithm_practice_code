

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> d;
     d.push_back(1);
     d.push_back(2);
     d.push_back(3);

     vector<int> :: reverse_iterator it;
     for(it=d.rbegin();it!=d.rend();it++){

     cout<<*it<<" ";
     }



}

