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
		printf("Phan tu thu %d la %s\n",i,str[i]);
	}
}

void SapxepAlphabet(char str[][100],int n){
	char temp[20];
	for( int i= 0; i < n - 1; ++i){
        for(int j = i + 1; j < n; ++j){
                 if(strcmp(str[i], str[j]) > 0) //do bang ASCII nen so sanh dc 
                 {
                    //doi cho//
                    strcpy(temp, str[i]);
                    strcpy(str[i], str[j]);
                    strcpy(str[j], temp);
                  }
            }
    }
	Xuatmangchuoi(str,n);
}

int main(){
	int n;
	do{
		printf("Nhap so luong phan tu cua mang ");
		scanf("%d",&n);
	} while(n<0);
	char str1[n][100];
	printf("Nhap mang truoc khi sap xep \n");
	Nhapmangchuoi(str1,n);
	printf("Mang sau khi sap xep la ");
	SapxepAlphabet(str1,n);
	
	
	
	
}
