#include<iostream>
#include<set>
using namespace std;
int main()
{
    multiset<int>s {12,34,56,77};

    cout<<"the last element of the multiset is "<<(*s.end())<<endl;

    for(auto it = s.begin();it !=s.end();it++)
    cout<<*it<<" ";
    return 0;
}