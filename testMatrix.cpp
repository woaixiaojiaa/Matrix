// testMatrix.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main(int argc, char* argv[])
{
	const int N  = 4;   
	int a[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	int i,j,k;  
	for(k = 0;k <= 2 * (N - 1); k ++)    
	{
	
		for(i = 0;i < N;i ++)    
        {
		
			for(j = 0;j < N;j ++)    
            {
			
				if(k == i + j)    
              {    
                     printf("%2d ",a[i][j]);  //a[j][i]  
                 } 

			}

		}

	}





	return 0;
}
