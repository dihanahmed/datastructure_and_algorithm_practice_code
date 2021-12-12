#include<bits/stdc++.h>
using namespace std;

int main()
{
    string cipher, key;
    cin>>cipher>>key;

    for(int i=0;i<cipher.size();i++)
    {
        int val = (cipher[i]-key[i]);
        if(val<0)
            val+=26;
        char ans= 'A'+val;
        cout<<ans;
    }
}
