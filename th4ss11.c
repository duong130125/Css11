//tim kiem tuyen tinh
#include <stdio.h> 
int main(){
  int n;
  printf("Nhap so phan tu cua mang:");
  scanf("%d", &n);
  int numbers [n];
  printf("Nhap gia tri cac phan tu mang:\n");
  for (int i=0;i<n;i++){
    printf("numbers [%d]=",i);
    scanf("%d", &numbers[i]);
  }
  int searchValue;
  printf("Nhap vao gia tri can tim trong mang:");
  scanf("%d", &searchValue);
  int size = sizeof(numbers)/sizeof(int);
  int i;
  int cntFindNumber = 0;
  for(i=0;i<size;i++){ 
        if(numbers[i]==searchValue){
			cntFindNumber++;
			break;   
    }
  } 
  if(cntFindNumber>0){
		printf("Tim thay phan tu co chi so numbers[%d] trong mang co gia tri = %d\n",i,searchValue);
  }else{
		printf("Khong tim thay phan tu nao trong mang co gia tri la: %d\n",searchValue);
  }
}
