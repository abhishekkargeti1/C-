#include <iostream>
#include <string> 
using namespace std;
int main() {
    string str [] = {"Abhishek"};
    cout<<sizeof(str);
    int length =sizeof(str)/ sizeof(str[0]);
    char Uppercasevowel[] ={'A','E','I','O','U'};
    char Lowercasevowel[] ={'a','e','i','o','u'};
	for(int i=0;i<length;i++)
	{
		string s=str[i];
	        string result;
			if(s == Uppercasevowel || s == Lowercasevowel)
			{
				cout<<"hi";
				result +=s;	
			}
	str[i]=result;
	
}		 	    
	for(int i=0;i<length;i++)
	{
		cout<<str[i]<<" ";

	}
}