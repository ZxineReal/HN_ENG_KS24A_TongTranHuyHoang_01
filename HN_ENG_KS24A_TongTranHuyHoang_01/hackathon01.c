#include<stdio.h>

int main(){
	int arr[100];
	int menu;
	int count=0;
	int num;
	int min=1;
	int max=1;
	int sum=0;
	int item;
	int del;
	int find;
	int flag=-1;
	int index=0;
	int prime[100];
	int minIndex;
	
	do{
		printf("Menu\n");
		printf("1. Nhap so phan tu va gia tri cho mang\n");
		printf("2. In ra cac phan tu trong mang\n");
		printf("3. Tim gia tri nho nhat va lon nhat trong mang\n");
		printf("4. In ra tong cua tat ca cac phan tu\n");
		printf("5. Them mot phan tu vao cuoi mang\n");
		printf("6. Xoa phan tu tai mot vi tri cu the\n");
		printf("7. Sap xep mang theo thu tu giam dan(Bubble sort)\n");
		printf("8. Tim kiem phan tu tai vi tri cu the\n");
		printf("9. In ra toan bo so nguyen to trong mang\n");
		printf("10. Sap xem mang theo thu tu tang dan (Selection sort)\n");
		printf("11. Thoat\n");
		printf("Lua chon cua ban: ");
		scanf("%d",&menu);
		printf("\n");
		
		if(count==0&&menu!=1&&menu!=11){
			printf("Mang rong, hay chon 1 de nhap cac phan tu vao trong mang!\n");
			continue;
		}
		
		switch(menu){
			case 1:
				printf("Moi ban nhap vao so luong phan tu: ");
				scanf("%d",&num);
				printf("\n");
				if(num<=0){
					printf("Khong hop le!\n");
				}else{
					for(int i=0;i<num;i++){
						printf("Moi ban nhap vao phan tu tai vi tri index %d: ",i);
						scanf("%d",&arr[i]);
						printf("\n");
					}
					count++;
				}
				break;
			case 2:
				printf("Cac phan tu trong mang la: \n");
				for(int i=0;i<num;i++){
					printf("arr[%d]: %d,\t",i,arr[i]);
				}
				printf("\n");
				break;
			case 3:
				printf("Phan tu nho nhat trong mang la: ");
				min=arr[1];
				for(int i=0;i<num;i++){
					if(arr[i]<min){
						min=arr[i];
				}
			}
				printf("%d",min);
				printf("\n");
				printf("Phan tu lon nhat trong mang la: ");
				for(int i=0;i<num;i++){
					if(arr[i]>max){
						max=arr[i];
					}
				}
				printf("%d",max);
				printf("\n");
				break;
			case 4:
				printf("Tong cua tat ca cac phan tu la: ");
				for(int i=0;i<num;i++){
					sum+=arr[i];
				}
				printf("%d",sum);
				printf("\n");
				break;
			case 5:
				printf("Moi ban nhap vao phan tu de them vao cuoi mang: ");
				scanf("%d",&item);
				arr[num]=item;
				num++;
				printf("\n");
				printf("Mang sau khi them phan tu la:\n");
				for(int i=0;i<num;i++){
					printf("arr[%d]: %d\t",i,arr[i]);
				}
				printf("\n");
				break;
			case 6:
				printf("Moi ban nhap vao vi tri can xoa: ");
				scanf("%d",&del);
				
				for(int i=del;i<num;i++){
					arr[i]=arr[i+1];
				}
				num--;
				printf("Mang sau khi xoa phan tu la: \n");
				for(int i=0;i<num;i++){
					printf("arr[%d]: %d\t",i,arr[i]);
				}
				printf("\n");
				break;
			case 7:
				printf("Cac phan tu theo thu tu giam dan la: \n");
				
				for(int i=0;i<num;i++){
					for(int j=0;j<num-i-1;j++){
						if(arr[j]<arr[j+1]){
							int temp=arr[j];
							arr[j]=arr[j+1];
							arr[j+1]=temp;
						}
					}
				}
				for(int i=0;i<num;i++){
					printf("arr[%d]: %d\t",i,arr[i]);
				}
				printf("\n");
				break;
			case 8:
				printf("Moi ban nhap vao mot phan tu de tim kiem: ");
				scanf("%d",&find);
				flag=-1;
				
				for(int i=0;i<num;i++){
					if(find==arr[i]){
						flag=1;
						printf("Phan tu %d co vi tri trong mang la: %d",find,i);
						printf("\n");
					}
				}
				if(flag==-1){
					printf("Khong tim thay phan tu %d trong mang",find);
				}
				printf("\n");
				break;
			case 9:
                for (int i = 0; i < num; i++) {
                    int prime = 1;
                    index=1;
                    if (arr[i] <= 1) {
                        prime = 0;
                        index=0;
                    } else {
                        for (int j = 2; j * j <= arr[i]; j++) {
                            if (arr[i] % j == 0) {
                                prime = 0;
                                index=0;
                                break;
                            }
                        }
                    }
                    if (prime) {
                        printf("So nguyen to trong mang la: %d\n", arr[i]);
                    }
                }
                if(index==0){
                	printf("Khong ton tai so nguyen to trong mang\n");
				}
				break;
			case 10:
				printf("Mang theo thu tu tang dan la: \n");
				for(int i=0;i<num;i++){
					minIndex=i;
					for(int j=0;j<num;j++){
						if(arr[j]<arr[minIndex]){
							minIndex=j;
							}
						}			
					}
				for(int i=0;i<num;i++){
	
				if(minIndex!=i){
					int temp;
					temp=arr[minIndex];
					arr[minIndex]=arr[i];
					arr[i]=temp;
					}			
				}
				for(int i=0;i<num;i++){
					printf("%d\t",arr[i]);
					}
					printf("\n");
				break;
			case 11:
				printf("Thoat");
				break;
			default:
				printf("Khong hop le!!\n");
				
		}
	}
	while(menu!=11);
	
	return 0;
}