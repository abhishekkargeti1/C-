#include<iostream>
#include<string>
using namespace std;
int main()
{
	string words ="HelloWorld";
	string word1="";
	for(char word : words)
	{
		if(word == tolower(word))
		{
			word1 +=toupper(word);
		}
		else{
			word1 +=tolower(word);					
		}
		
	}	
	cout<<word1;
}