#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int size,value,number;
    vector<int> vec;
    cout<<"Enter the Vector Size : "<<endl;
    cin>>size;
    cout<<"Enter the values to push into Vector : "<<endl;

    for(int i=0;i<size;i++)
    {
        cin>>value;
        vec.push_back(value);
    }

    cout<<"Enter the Number to check divisiblity : "<<endl;
    cin>>number;
    for_each(vec.begin(), vec.end(), [&](int i) 
    { 
        if(i%number==0) cout<<i<<" is divisible by "<<number<<endl;
        else cout<<i<<" is not divisible by "<<number<<endl;
    });
    return 0;
}