#include<stdio.h>
#include<string.h>

void Nhapmangchuoi(char str[][100],int n){ //n phan tu toi da 100 ki tu
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d cua mang ",i);
		scanf("%s",str[i]);
	}
}



void Xuatmangchuoi(char str[][100],int n){  //tham so truyen vao so phan tu cua mang
	for(int i=0;i<n;i++){
		printf("Phan tu thu %d la %s\t",i,str[i]);
	}
}

void Nhapchuoi(char str2[100]){
	printf("Nhap chuoi ");
	scanf("%s",str2);
}

bool Kiemtra(char str[][100],int n,char str2[100]){
	for(int i=0 ; i<n ; i++ ){
		if(strcmp(str[i],str2)==0){
				return true;
			}
	}
	return false;
}


int main(){
	
	int n;
	do{
		printf("Nhap so phan tu cua mang \n");
		scanf("%d",&n);
	} while(n<0);
	
	char str1[n][100];
	Nhapmangchuoi(str1,n);
	Xuatmangchuoi(str1,n);
	char str2[100];
	Nhapchuoi(str2);
	bool c=Kiemtra(str1,n,str2);
	if(c==true){
		printf("Co chuoi vua nhap trong mang ");
	} else{
		printf("Khong co chuoi vua nhap trong mang ");
	}
	
}
