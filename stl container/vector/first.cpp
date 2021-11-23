#include <iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> myvector;
    myvector.push_back(5);
    myvector.push_back(6);
    myvector.push_back(10);
    cout<<myvector[0];
    cout<<myvector.size();
    cout<<myvector.capacity();
}

