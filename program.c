#include "stdio.h"
int main(){
	/*int x;
	printf("sayi giriniz\n");
	scanf("%d",&x);
	if(x%2 == 0){ 
		printf("sayi cifttir"); 
		if(x > 10) printf("\nsayi 10dan buyuktur");
	}
	else {
		printf("sayi tektir");
	}*/
	
	int finalNotu;
	printf("Final Notunuzu girin: ");
	scanf("%d",&finalNotu);
	if(finalNotu >= 90) printf("AA");
	else if(finalNotu >= 80) printf("BA");
	else if(finalNotu >= 70) printf("BB");
	else if(finalNotu >= 60) printf("CB");
	else if(finalNotu >= 50) printf("CC");
	else if(finalNotu >= 45) printf("DC");
	else if(finalNotu >= 40) printf("DD");
	else if(finalNotu >= 30) printf("FD");
	else printf("FF");
	
	
	return 0;
}