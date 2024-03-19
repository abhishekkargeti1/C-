#include<iostream>
using namespace std;
int main()
{
	bool found =false;
	char Uppercasevowel [] ={'A','E','I','O','U'};
	char Lowercasevowel [] ={'e','e','i','o','u'};
	char n;
	cin>>n;
	for(int i=0;i<5;i++)
	{
		if(Uppercasevowel[i] == n || Lowercasevowel[i] == n)
		{
			cout<<"This is vowel";
			found =true;
			break;

		}


	}
	if(!found)
	{
		cout<<"This is consonant";

	}
}	