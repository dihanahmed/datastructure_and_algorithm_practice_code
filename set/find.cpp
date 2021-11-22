


#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int> st;
    int ar[]={10,20,30,50};

    st.insert(ar,ar+4);
    for(int element :st)
    {
        cout<<element<<" ";
    }cout<<endl;

    //using iterator it we can erase data
    //set<int> :: iterator =auto
    auto start= st.find(20);
    st.erase(start,st.end());

    for(int cosmos :st){
    cout<<cosmos<<" ";
    }cout<<endl;





}



