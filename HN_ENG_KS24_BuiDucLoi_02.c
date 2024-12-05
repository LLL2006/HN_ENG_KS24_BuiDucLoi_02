#include <stdio.h>
int main(){
	int choice;
	int arr[100];
	int size = 0;
	int chan;
	int le;
	int value;
	int index;
	int lonNhat;
	int lon2;
	int item;
	int start = 0;
	int end = size - 1;
	int mid;
	do{
		printf("MENU \n");
		printf("1.Nhap so phan tu va gia tri cho mang \n");
		printf("2.In ra gia tri cac phan tu trong mang \n");
		printf("3.Dem so luong cac phan tu chan le trong mang \n");
		printf("4.Tim gia tri lon thu hai trong mang \n");
		printf("5.Them mot phan tu vao dau mang \n");
		printf("6.Xoa phan tu tai mot vi tri cu the \n");
		printf("7.Sap xep mang theo thu tu giam dan \n");
		printf("8.Nhap mot phan tu de tim kiem trong mang \n");
		printf("9.In ra toan bo so nguyen to trong mang da duoc binh phuong \n");
		printf("10.Sap xep mang theo thu tu giam dan \n");
		printf("11.Thoat \n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Nhap so phan tu cua mang(toi da 100): ");
				scanf("%d",&size);
				if(size <= 0) {
					printf("So luong phan tu khong hop le\n");
					size = 0;
					return 1;
				}
				for(int i = 0; i < size; i++){
					printf("Nhap phan tu thu %d: ", i + 1);
					scanf("%d",&arr[i]);
				}
				break;
			case 2:
				if(size == 0){
					printf("Mang hien khong co phan tu \n");
					return 1;
				}
				printf("Cac phan tu trong mang la: \n");
				for(int i = 0; i < size; i++){
					printf("Phan tu thu %d: %d\n", i+1, arr[i]);
				}
				break;
			case 3:
				for(int i = 0; i < size; i++){
					if(arr[i] % 2 == 0) {
						chan++;
					}else{
						le++;
					}
				}
				printf("So luong phan tu chan trong mang la: %d\n",chan);
				printf("So luong phan tu le trong mang la: %d\n",le-1);
				break;
			case 4:
				if(size < 2){
					printf("Mang khong du 2 phan tu\n");
					return 1;
				}
				for(int i = 0; i < size; i++){
					if(arr[i] > lonNhat) {
						lon2 = lonNhat;
						lonNhat = arr[i];
					}else if(arr[i] > lon2 && arr[i] < lonNhat){
						lon2 = arr[i];
					}
				}
				printf("So lon thu hai trong mang la: %d\n",lon2);
				break;
			case 5:
				printf("Nhap gia tri muon them vao dau mang: ");
				scanf("%d", &value);
				
				for(int i = size; i >= 1; i--){
					arr[i] = arr[i - 1];
				}
				size++;
				arr[0] = value;
				
				break;
			case 6:
				printf("Nhap vi tri phan tu can xoa: ");
				scanf("%d",&index);
				for(int i = index - 1 ; i < size; i++){
					arr[i]=arr[i + 1];
				}
				size--;
				break;
			case 7:
				for(int i = 0; i < size; i++){
					int key = arr[i];
					int j = i - 1;
					
					while(j > 0 && arr[j] > key){
						arr[j + 1] = arr[j];
						j = j - 1;
					}
					arr[j + 1] = key;
				}
				printf("Mang sau khi sap xep: \n");
				for(int i = size - 1; i >= 0; i--){
					printf("%d ",arr[i]);
				}
				printf("\n");
				break;
			case 8:
				printf("Moi nhap gia tri can tim kiem: ");
				scanf("%d",&item);
				int start = 0;
				end = size - 1;
				while(start<=end){
						mid= (start+end)/2;
					if(arr[mid]>item){
						end= mid-1;
					}else if(arr[mid]<item){
						start= mid+1;
					}else{
						printf("Phan tu %d co vi tri la %d",item,mid);
						break;
					}
				}
				printf("\n");
			case 9:
				
				break;
			case 10:
				
				break;
			case 11:
				
				break;
		}
	}while(choice!=11);
	
	return 0;
}
