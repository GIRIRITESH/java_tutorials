#include<stdio.h>

int main(){
	
int n,i,temp[n],j=0,d=0;


printf("Enter the number of element : ");
scanf("%d",&n);
int arr[n];
printf("\nEnter the elements : ");
for(i = 0; i < n; i++){
	scanf("%d",&arr[i]);
}
for(i=0;i<n;i++){
	if(arr[i] != arr[i+1]){
		temp[j] = arr[i];
		j++;
	}
	else{
		d++;//implementing the next index
	}
}

for(i = 0; i < n-d; i++){
	printf("%d ",temp[i]);
}

return 0;
}

