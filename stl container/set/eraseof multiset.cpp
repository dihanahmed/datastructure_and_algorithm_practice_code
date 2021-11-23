

#include<bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> st;
    int ar[]={10,20,30,50,50,50,20,30};
    st.insert(10);


    for(int element : st)
    {
        cout<<element<<" ";

    } cout<<endl;
    st.insert(ar,ar+8);
    for(int element :st)
    {
        cout<<element<<" ";
    }cout<<endl;

    //using iterator it we can erase data
    //set<int> :: iterator =auto
    auto it= st.begin();
    st.erase(it);

    for(int cosmos :st){
    cout<<cosmos<<" ";
    }cout<<endl;


    st.erase(30);//if you pass the value , all the copy will be deleted
    for(int ros :st){
    cout<<ros<<" ";
    }


}




