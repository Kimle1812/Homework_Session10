#include<stdio.h>
int main(){
	int numbers[] = {10, 45, 32, 12, 8};
	int n = sizeof(numbers)/sizeof(int);
	int min, temp; 
	for(int i = 0; i < n - 1; i++){
		min = i; 
		for(int j = i + 1; j < n; j++){
			if(numbers[j] < numbers[min]){
				min = j; 
			} 
		}
		temp = numbers[min];
		numbers[min] = numbers[i];
		numbers[i] = temp; 
	}
	printf("Mang sau khi duoc sap xep la:\n");
	for(int i = 0; i < n; i++ ){
		printf("%d ", numbers[i]);
	}
	return 0; 
} 
