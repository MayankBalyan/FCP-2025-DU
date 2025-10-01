#include <stdio.h>
int main(){
	int n=5;
	int arr[]={1,2,3,4,5};
	int newArr[5];
	int k;
	printf("Enter the value of k : ");
	scanf("%d",&k);
	int index=0;
	for (int i = n-k; i <n;i++){
		newArr[index]=arr[i];
		index++;
	}
	for (int i=0; i<n-k;i++){
		newArr[index]=arr[i];
		index++;
	}
	for (int i=0;i<n;i++){
	arr[i]=newArr[i];

	}
	for (int i=0;i<n;i++){
	printf("%d",arr[i]);
	}

	




	return 0;
}
