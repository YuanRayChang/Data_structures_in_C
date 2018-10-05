#include <iostream>
using namespace std;

struct Box
{
	double length;
	double breadth;
	double height;

	double volume();
};

int main()
{
	Box box1 = {2, 3, 4};
	cout<< "length = " << box1.length 
	<<	", breadth = " << box1.breadth
	<< ", height = " <<box1.height <<endl;
	cout<< "volume of box1 = " << box1.volume() <<endl;


	Box *pbox = 0;
	pbox = &box1; //set pointer to the address of box1
	(*pbox).length += 8;
	pbox ->breadth +=2;
	

	cout<< "length = " << box1.length 
	<<	", breadth = " << box1.breadth
	<< ", height = " <<box1.height <<endl;
	cout<< "volume of box1 = " << box1.volume() <<endl;


	system("pause");
	return 0;
}



double Box::volume()
{
	return length*breadth*height;
}