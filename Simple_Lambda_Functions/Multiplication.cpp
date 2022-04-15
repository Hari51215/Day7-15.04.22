#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int size,a,n;
    vector<int> v1;
    cout<<"Enter the size of the Vector : "<<endl;
    cin>>size;
    cout<<"Enter the elements to be include in the Vector : "<<endl;

    for(int i=0;i<size;i++)
    {
        cin>>a;
        v1.push_back(a);
    }

    cout<<"Enter the Multiplication Table Number : "<<endl;
    cin>>n;
    for_each(v1.begin(), v1.end(), [&](int i) { cout << i << "*" << n << "=" << i*n << "\n"; });
    return 0;
}