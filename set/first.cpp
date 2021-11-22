

#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int> st;
    int ar[]={10,20,30,50};
    st.insert(10);


    for(int element : st)
    {
        cout<<element<<" ";

    } cout<<endl;
    st.insert(ar,ar+4);
    for(int element :st)
    {
        cout<<element<<" ";
    }cout<<endl;

    //for vector set will be
    vector<int> v;
     v.push_back(1);
     v.push_back(2);
     v.push_back(3);
      st.insert(v.begin(),v.end());
      for(int component :st){

        cout<<component<<" ";//the output will be sorted
      }


}


