#include<stdio.h>
int main (){
	int a [3][5] = {{1,2,3,4,5},
	                {6,7,8,9,10},
	                {11,12,13,14,15}};
	int *p = &a[0][0];
	
//for(int i =0; i<3;i++){
//	for(int j=0;j<5;j++){
//		printf("%2d ",a[i][j]);
//	}
//	printf("\n");
//}

printf("%d",*(p+2*5+3));



return 0;
}
