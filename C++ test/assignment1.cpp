#include<stdio.h>


int main() {
	char o;
	int lent = 0;
	int n,k;
	int arr[1000]= {0};
	bool check = false;
	printf("--------------------------------------------------------------------------\n");
	printf("          MANAGE NUMBERS WITH ARRAYS PROGRAM\n");
	printf("--------------------------------------------------------------------------");
	printf("\nNhap 'c' de tao mang so nguyen (neu da co thi clear data mang cu)");
	printf("\nNhap 'p' de in day (neu cua co gia tri thi bao day trong)");
	printf("\nNhap 'd' de yeu cau xoa mot phan tu va nhap k la vi tri can xoa ");
	printf("\nNhap 's' de sap xep  theo thu tu tang dan");
	printf("\nNhap 'x' de sap xep theo chieu giam dan");
	printf("\nNhap 't' de tim kiem 1 so x trong day");
	printf("\nNhap 'e' de dung chuong trinh\n");
	printf("--------------------------------------------------------------------------\n\n");


	do {
		printf("Enter your choise: ");
		scanf("%c",&o);

		switch(o) {

			case 'e' :
				break;

			case 'c' :
				printf("\nNhap so phan tu :");
				scanf("%d",&n);
				if(arr[0]!=NULL) {
					printf("Mang co du lieu\n");
					for (int i = 0; i < n; i++) {
						arr[i]=0;
					}
					lent=0;

					printf("Nhap day moi :\n");
					for (int i = 0; i < n; i++) {
						printf("Phan tu arr[%d] = ",i);
						scanf("%d",&arr[i]);
					}
					lent++;
				} else {
					printf("Nhap day :\n");
					for (int i = 0; i < n; i++) {
						printf("Phan tu arr[%d] = ",i);
						scanf("%d",&arr[i]);
					}
					lent++;
				}

				break;

			case 'p' :
				if( lent == 0) {
					printf("\nDay trong\n");
				} else {
					printf("\nDay so :");
					for (int i = 0 ; i < n; i++) {
						printf("%d ",arr[i]);
					}
					printf("\n");
				}
				break;

			case 's':
				for(int i = 0 ; i < n; i++) {
					for(int j = i +1; j <n; j++) {
						if (arr[i] > arr[j]) {
							int temp = arr[i];
							arr[i] = arr[j];
							arr[j] = temp;
						}
					}
				}
				printf("\nDay so theo thu tu tang dan la:    ");
				for (int i = 0; i < n; i++) {
					printf("%d ",arr[i]);
				}
				printf("\n");
				break;

			case 'x' :
				for(int i = 0 ; i < n; i++) {
					for(int j = i +1; j <n; j++) {
						if (arr[i] < arr[j]) {
							int temp = arr[i];
							arr[i] = arr[j];
							arr[j] = temp;
						}
					}
				}
				printf("\nDay so theo thu tu giam dan la:    ");
				for (int i = 0; i < n; i++) {
					printf("%d ",arr[i]);
				}
				printf("\n");
				break;

			case 't' :
				printf("\nNhap so muon tim : ");
				scanf("%d",&k);
				for(int i=0; i<n; i++) {
					if(k==arr[i]) {
						printf("So %d o vi tri %d\n",k,i);
						check = true;
					}
				}
				if(check==false) {
					printf("so %d khong co trong day so\n",k);
				}
//				if (k <= n ) {
//
//					printf("So thu %d la : %d",k,arr[k - 1]);
//				} else {
//					printf("Error!!!");
//				}
				break;
			case 'd':
				printf("Nhap vi tri can xoa :");
				scanf("%d",&k);
				if(k>=n) {
					printf("Vi tri can xoa loi\n");
				} else {
				for(int i=k; i<n; i++)
				{
					arr[i] = arr[i+1];
				}
				n--;
				}
		}
		getchar();
	} while( o != 'e');
	return 0;
}
