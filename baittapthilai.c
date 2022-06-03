#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int tongsobuoihoc;
	int sobuoihoc;
	int diemlt;
	int diemthuchanh;
	int diembaitap;
	
	printf("Nhap vao tong so buoi hoc :");
	scanf("%d",&tongsobuoihoc);
	
	printf("Nhap vao so buoi hoc :");
	scanf("%d",&sobuoihoc);
	
	if(sobuoihoc>0.75*tongsobuoihoc){
		  printf("Duoc thi\n");			
   }
   else {
     	printf("HOC LAI\n");
     	
	}
	printf("Nhap diem ly thuyet :");
	scanf("%d",&diemlt);
	
	if(diemlt>=8){
		printf("QUA MON\n");
		}
	else{
			printf("HOC LAI/n");
		}
		printf("Nhap diem thuc hanh :");
	    scanf("%d",&diemthuchanh);
	if(diemthuchanh>=6){
	    	printf("QUA MON\n");
	    	}
	else{
	    		printf("HOC LAI/n");
	    		}
	    printf("Nhap diem bai tap :");
	    scanf("%d",&diembaitap);
	if(diembaitap>=4){
		printf("QUA MON/n");	
		}
	else{
			printf("HOC LAI/n");
		}
		
		
}
