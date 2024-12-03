#include<stdio.h>
int main (){
	int numbers[] = {23, 78, 34, 12, 56};
	int n = sizeof(numbers)/sizeof(int);
	for(int i = 0; i < n;i++){
		int key = numbers[i];
		int j = i - 1;
		while(j >= 0 && numbers[j] > key){
			numbers[j + 1] = numbers[j];
			j = j - 1;	 
		}
		numbers[j + 1] = key;
		 
	}
	printf("Mang sau khi duoc sap xep la:\n");
	for(int i = 0; i < n; i++ ){
		printf("%d ", numbers[i]);
	}
	return 0; 
} 
