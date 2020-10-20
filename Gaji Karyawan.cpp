//program upah perjam karyawan//
//MUHAMMAD KAMALUDDIN PRIMAJAYA(20051397035)//
#include <stdio.h>
#include <string>
using namespace std;

main()
{
char namakaryawan[50], gol[10];
int jumlahjam, 
	jamseminggu=48, 
	upahlembur=4000, 
	gol_a=5000, 
	gol_b=7000, 
	gol_c=8000, 
	gol_d=10000,
	gaji,
	gol_dipilih,
	jamlembur=0,
	jamkerja = 0;

printf("UpahKaryawan Mingguan");
printf("\n");
printf("Nama Karyawan : ");
scanf("%s",&namakaryawan);
printf("Golongan karyawan : ");
scanf("%s", &gol);
printf("Jumlah jam kerja dalam seminggu : ");
scanf("%i", &jumlahjam);
printf("\n \n");


//hitungannya//
if(gol[0]=='a'){
	gol_dipilih=gol_a;
}else if(gol[0]=='b'){
	gol_dipilih=gol_b;
}else if(gol[0]=='c'){
	gol_dipilih=gol_c;
}else if(gol[0]=='d'){
	gol_dipilih=gol_d;
}

if(jumlahjam>jamseminggu){
	jamlembur= jumlahjam - jamseminggu;
	jamkerja=jamseminggu;
}else if(jumlahjam<=jamseminggu){
	jamlembur=0;
	jamkerja=jumlahjam;
}

gaji = (jamkerja*gol_dipilih) + (jamlembur*upahlembur) ;

printf("Nama Karyawan : %s \n",namakaryawan);

printf("Gaji mingguan sebesar : %i",gaji);
printf("\n");
printf("Terima Kasih");
}
