#include <iostream>
using namespace std;

void some_function(int *data, const string &str="Hello"); //Because of using "&", remember to add "const" !!!

int main()
{
	int array[] = {1, 2, 5, 0};
	string hi = "Hi";

	some_function(array);
	cout<<endl;
	some_function(array,hi);



	system("pause");
	return 0;
}

void some_function(int *data, const string &str) //Because of using "&", remember to add "const" !!!
{
	cout<< str <<endl;

	for(int i=0; i<4; i++){
		cout<< *data++ <<endl;
	}
}