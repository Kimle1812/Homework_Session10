#include<stdio.h>
int main(){
	int a, flag = -1; 
	printf("Moi ban nhap so luong phan tu cua mang:");
	scanf("%d", &a); 
	int numbers[a], search;
	printf("Moi ban nhap gia tri cua cac phan tu trong mang:\n");
	for(int i = 0; i < a; i++ ){
		printf("Numbers[%d] = ", i + 1);
		scanf("%d", &numbers[i]); 
	}
	printf("Moi ban nhap phan tu muon tim kiem: ");
	scanf("%d", &search);
	for(int i = 0; i < a; i++ ){
		if(numbers[i] == search){
			flag = i; 
			break; 
		} 
	}
	if(flag != -1){
		printf("Vi tri cua phan tu ban tim la: %d", flag + 1); 
	}else{
		printf("Phan tu ban tim khong ton tai"); 
	} 
	return 0; 
	
} 
