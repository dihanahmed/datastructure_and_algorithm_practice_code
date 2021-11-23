

#include<bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> st;// can have multiple copies of a value
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


}



