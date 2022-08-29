#include<stdio.h>
int main(){
	int a[5][5],i,j,r,c,value;
	printf("Enter the order of the array : ");
	scanf("%d%d",&r,&c);
	printf("Enter %d elements into the array : ",r*c);
	for(i=0;i<r;i++){
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);
	}
	
	for(i=0;i<r;i++){
		printf("\n");
		for(j=0;j<c;j++)
			printf("%d ",a[i][j]);
	}
	printf("\nEnter the element to be searched : ");
	scanf("%d",&value);
	printf("Array \n");
	for(i=0;i<c;i++){
		for(j=0;j<c;j++){
			if(a[i][j]==value){
				printf("%d found at a[%d][%d]",value,j,j);
			}
		}
	}
	if(a[i][j]!=value){
		printf("not found");
	}
	
}
