#include<stdio.h> 
#include <stdlib.h>
int main(){
  int n;
  int searchValue;
  printf("Nhap so phan tu cua mang:");
  scanf("%d", &n);
  int numbers [n];
  printf("Nhap gia tri cac phan tu mang:\n");
  for (int i=0;i<n;i++){
    printf("numbers [%d]=",i);
    scanf("%d", &numbers[i]);
  }do{
    printf("**************MENU**************\n");
    printf("1. In gia tri cac phan tu cua mang.\n");
    printf("2. Nhap gia tri tim kiem và su dung thuat toan Linear Search tim tat ca cac phan tu trong mang co gia tri bang gia tri tim kiem.\n");
    printf("3. Nhap gia tri tim kiem và su dung thuat toan Binary Search tim phan tu trong mang.\n");
    printf("4. Thoat.\n");
	printf("Lua chon cua ban:");
	int choice;
	scanf("%d", &choice);
	switch(choice){
		case 1:
			printf("Gia tri cac phan tu trong mang dang quan ly:\n");
		    for(int i=0;i<n;i++){
			    printf("numbers[%d]=%d\t",i, numbers[i]);
			}
		    printf("\n");
			break;
		case 2:
		    printf("Nhap vao gia tri can tim kiem:");
			scanf("%d", &searchValue);
			printf("Tat ca ca gia tri tim thay trong mang la:\n");
			for(int i=0; i<n; i++){
				if(numbers[i]==searchValue){
					printf("numbers[%d]=%d\n", i, numbers[i]);
				}
			}
			printf("\n");
			break;
		case 3:
			printf("Nhap vao gia tri can tim kiem:");
			scanf("%d", &searchValue);
			printf("Gia tri tim thay trong mang la:\n");
			int start=0;
			int end=n;
			while(start<=end){
			    int mid = (start + end)/2;
				if(numbers[mid]==searchValue){
					printf("numbers[%d]=%d\n", mid, searchValue);
					break;
				}else if(numbers[mid]<searchValue){
					start = mid + 1;
				}else{
					end = mid - 1;
				}		
			}
			printf("\n");
			break;
		case 4:
			exit(0);
			break;
		default:
			printf("Vui long chon tu 1->4");
	} 
  }while(1==1); 
}
