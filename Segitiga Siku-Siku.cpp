//program menghitung segitiga siku-siku//
//MUHAMMAD KAMALUDDIN PRIMAJAYA(20051397035)//
#include <stdio.h>
#include<math.h>
#include <stdlib.h>
using namespace std;

main()
{
	int sisi_A,sisi_B,menu;
	float hasil;
	printf("MENGHITUNG SEGITIGA SIKU-SIKU");
	printf("\n");
	printf("alas segitiga(A)= ");
	scanf("%i",&sisi_A);
	printf("tinggi segitiga(B)= ");
	scanf("%i",&sisi_B);
	printf("\n");
	printf("menu segitiga siku-siku");
	printf("\n");
	printf("1.menu 1=hasil panjang sisimiring");
	printf("\n");
	printf("2.menu 2=hasil luas segitiga");
	printf("\n");
	printf("3. menu 3=hasil keliling segitiga");
	printf("\n");
	printf("menu segitiga yang dipilih= ");
	scanf("%i",&menu);
	printf("\n\n");
		//cek kondisi pilih menu//
	if(menu==1){
	    //hitung sisi miring
	    hasil = sqrt(pow(sisi_A,2) + pow(sisi_B,2));
	    printf("Hasil panjang sisi miring adalah %f", hasil);
	    
	}else if(menu==2){
	    //hitung luas
	    //hasil = masukkan rumus cari luas segitiga
	    hasil =0.5*sisi_A*sisi_B;
	    printf("Hasil luas segitiga adalah %f",hasil);
	}else if(menu==3){
	    //hitung keliling
	    hasil=sqrt(pow(sisi_A,2) + pow(sisi_B,2))+sisi_A+sisi_B;
	    printf("Hasil keliling segitiga adalah %f",hasil);
	    
	}else if(menu==4){
	    //keluar
	    exit(0);
	}
		
}
