#include<stdio.h>
#include<string.h>

void Nhapchuoi(char str[100]){
	scanf("%s",str);
}

//void Xuat chuoi

bool check(char str1[100], char str2[100]){
    if(strstr(str1,str2)!=NULL){     //kiem tra chuoi s2 co nam trong s1 khong
    	return true;
	}
}

int main(){
    char str1[100];
    printf("Nhap vao chuoi 1 ");
	Nhapchuoi(str1);
	char str2[100];
	printf("Nhap vao chuoi 2 ");
	Nhapchuoi(str2);	
   	bool c=check(str1,str2);
   	if(c==false){
   		printf("Chuoi 1 khong chua chuoi 2");
	   } else{
	   	printf("Chuoi 1 co chua chuoi 2 ");
	   }
}
