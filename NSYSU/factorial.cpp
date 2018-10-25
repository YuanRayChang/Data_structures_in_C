#include <iostream>
using namespace std;
int fact(int n);

int main()
{
	int arr_num = 100;
	
	int input[100] = {0};
	int ind=0;
	int temp;
	while(1){
		cin >> temp;
		if(temp==0){
			break;
		}
		else{
			input[ind] = temp;
			ind++;
		}
	}

	ind = 0;
	while(input[ind]!=0){
		int array[arr_num] = {0};
		int quo, rem;
		int* pArr;
		array[0] = 1;

		for(int i=1; i<=input[ind]; i++){
			pArr = &array[arr_num-1];
			cout << i <<"!=";

			for(int j=0; j<arr_num; j++){
				array[j] *= i;
			}

			for(int j=0; j<arr_num; j++){
				if(array[j]>=10){
					quo = array[j]/10;
					rem = array[j]%10;
					array[j+1] += quo;
					array[j] = rem;
				}
			}
				
			int count = 0;
			while(*pArr == 0){
				count++;
				pArr--;

			}
			
			for(int j=arr_num-count-1; j>=0; j--)
			{
				cout << array[j];
			}

			cout << endl;
		}
		cout << endl;
		ind++;
	}

	system("pause");
	return 0;
}


int fact(int n){
	if(n==0){
		return 1;
	}
	else{
		return n*fact(n-1);
	}
}