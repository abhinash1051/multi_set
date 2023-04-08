#include<iostream>
#include<set>
using namespace std;
int main()
{

    multiset<int>s{23,45,67,78,89};

    cout<<"the first element is :"<<*(s.begin())<<endl;

    for(auto it = s.begin(); it !=s.end();it++)
    cout<<*it<<" ";
    return 0;
}