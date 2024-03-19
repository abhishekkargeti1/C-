#include<iostream>
using namespace std;
class nokia
{
	int mic;
	int speaker;
	int cam;
public:
	void setValue(int x , int y, int z)
	{
		mic=x;	
		speaker =y;
		cam=z;
	}
	void display()
	{
		cout<<mic<<endl;
		cout<<speaker<<endl;
		cout<<cam<<endl;

	}
};
int main()
{
	nokia n1;   // object created
	n1.setValue(12,13,14);
	n1.display();

}