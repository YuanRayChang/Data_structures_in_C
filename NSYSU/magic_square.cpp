#include <iostream>
using namespace std;

int main()
{
	for(int n=1; n<=9; n+=2){
		int rowCount = n;
		int colCount = n;
		int max = rowCount*rowCount;
		
		int** magic_square = new int*[rowCount];
		for(int i = 0; i < rowCount; ++i){
			magic_square[i] = new int[colCount];
		}

		for(int i =0; i<rowCount; i++){
			for(int j=0; j<colCount; j++){
				magic_square[i][j] = 0;
			}
		}
	    
		int x, y, x_temp, y_temp;
		int i = 1;
		if(i==1){
			magic_square[0][(rowCount-1)/2] = i;
			x = 0;
			y = (rowCount-1)/2;
			i++;
	    }
	    while(i<=max){
	    	x_temp = x;
	    	y_temp = y;
	    	x = x - 1;
	    	y = y - 1;

	    	if(x<0){
	    		x += rowCount;
	    	}
	    	if(y<0){
	    		y += rowCount;
	    	}

	    	if(magic_square[x][y] == 0){
	    		magic_square[x][y] = i;
	    		i++;
	    	}
	    	else{
	    		x = x_temp + 1;
	    		y = y_temp;
	    		magic_square[x][y] = i;
	    		i++;
	    	}

    	}	


	    for(int i = 0; i < rowCount; i++){
	    	for (int j = 0; j < colCount; j++){
	    		cout << magic_square[i][j] << "  ";
	    		if(j==colCount-1){
	    			cout << endl;
	    		}
	    	}
	    }

	    cout << endl;
	    delete[] magic_square;
	}
	system("pause");
	return 0;
}