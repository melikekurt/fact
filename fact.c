#include<stdio.h>
int main(){
	//faktoriyel hesaplama
	int n;
	
	int fact =1 ;
	printf("Lutfen faktoriyelini hesaplamak istediginiz sayiyi giriniz.\n");
	scanf("%d",&n);
	int n1 =n;
	while (n>0){
		fact=fact*n;
		n--;	
	}
			printf("\n %d faktoriyel %d dir.",n1,fact);
			
	return 0 ;
}
