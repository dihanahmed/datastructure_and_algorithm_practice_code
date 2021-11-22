
#include<bits/stdc++.h>
using namespace std;

int main()
{
    deque<string> d;
     d.push_back("hello");
     d.push_back("astro");
     d.push_back("dihan");
     d.push_front("hello");
     d.insert(d.begin(),"NASA");
     d.insert(d.begin()+1,"Roscosmos");
     d.erase(d.begin()+1,d.begin()+3);

     //cout<<d.front()<<" "<<d.back();
     for(int i=0;i<d.size();i++){
        cout<<d[i]<<" ";
        cout<<d.at(i)<<" ";
     }


}
