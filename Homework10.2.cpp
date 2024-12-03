#include<stdio.h>
int main (){
	int a, temp; 
	printf("Moi ban nhap so luong phan tu cua mang:");
	scanf("%d", &a);
	int numbers[a];
	printf("Moi ban nhap gia tri cua cac phan tu trong mang:\n");
	for(int i = 0; i < a; i++ ){
		printf("Numbers[%d] = ", i + 1);
		scanf("%d", &numbers[i]); 
	}
	for(int i = 0;i < a-1;i++){
		for(int j = 0;j < a - 1 - i; j++){
			if(numbers[j] > numbers[j + 1]){
				temp = numbers[j];
				numbers[j] = numbers[j + 1];
				numbers[j + 1] = temp; 
			} 
		} 
	}
	printf("Mang sau khi duoc sap xep la:\n");
	for(int i = 0; i < a; i++ ){
		printf("%d ", numbers[i]);
	}
	return 0; 
} 
