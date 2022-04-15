#include<iostream>
using namespace std;

int main()
{
    int n1,n2;
    double num1,num2;
    string str1,str2;
    
	auto concatenation = [](auto a, auto b) 
	{
		return a+b;
	};
	
	cout<<"Enter the two integer numbers : "<<endl;
	cin>>n1;
    cin>>n2;
	cout<<"Enter the two numbers in floating point : "<<endl;
	cin>>num1;
    cin>>num2;
	cout<<"Enter the two strings to concatenate : "<<endl;
	cin>>str1;
    cin>>str2;

    cout<<"After the concatenation : "<<endl;
	cout << concatenation(n1,n2) << endl;
	cout << concatenation(num1,num2) << endl;
	cout << concatenation(str1,str2) << endl;
	return 0;
}