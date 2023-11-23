#include<stdio.h>
int main(){
    int row, col;
    printf("Nhap so dong va so cot cua ma tran:");
    scanf(" %d %d", &row, &col);
    int numbers[row][col];
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            printf("numbers[%d][%d]=", i, j);
            scanf("%d", &numbers[i][j]);
        }
    }
	do{
		printf("\n*************MENU**************\n");
        printf("1. In gia tri mang theo ma tran.\n");
        printf("2. Sap xep mang co gia tri cac phan tu theo dong tang dan.\n");
        printf("3. sap xep mang co gia tri cac phan tu theo cot giam dan.\n");
        printf("4. Thoát.\n");
        printf("Lua chon cua ban: ");
        int choice;
        scanf("%d", &choice);
        switch (choice){
	        case 1:
	        	printf("Gia tri cac phan tu trong mang:\n");
	            for (int i = 0; i < row; i++){
	                for (int j = 0; j < col; j++){
	                    printf("%d\t", numbers[i][j]);
	                }
	                printf("\n");
	            }
	            printf("\n");
	            break;
	        case 2:
	            for (int i = 0 ; i < row; i++){
	                for (int j = 1; j < col; j++){
	                    int key = numbers[i][j];
	                    int d = j-1;
	                    while (d>=0 && key<numbers[i][d]){
	                        numbers[i][d+1] = numbers[i][d];
	                        d-=1;
	                    }
	                    numbers[i][d+1] = key;
	                } 
	            }
	            printf("\n");
	            break;
	        case 3:
	            for (int i = 0 ; i < col; i++){
	                for (int j = 1; j < row; j++){
	                    int key = numbers[j][i];
	                    int d = j-1;
	                    while (d>=0 && key>numbers[d][i]){
	                    numbers[d+1][i]=numbers[d][i];
	                    d-=1;
	                    }
	                    numbers[d+1][i] = key;
	                }
	            }
	            printf("\n");
	            break;
	        case 4:
			    exit(0);
			    break;
	        default:
	            printf("Vui long chon tu 1->4.");
        }
    } while (1 == 1);
}

