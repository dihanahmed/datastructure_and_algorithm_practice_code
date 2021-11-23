




#include<bits/stdc++.h>
using namespace std;

int main()
{
 vector<int> ar= { 1,1,2,2,2,4,7,10};
 int br[]={2,3,6,7};
cout<<binary_search(ar.begin(),ar.end(),2)<<endl;
cout<<binary_search(ar.begin(),ar.end(),4)<<endl;

cout<<binary_search(br,br+4,3)<<endl;
cout<<binary_search(br,br+4,4)<<endl;

}



