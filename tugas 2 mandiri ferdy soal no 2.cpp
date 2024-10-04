#include <stdio.h>

int main()
 {
	float diameter=15.0;
	float r = diameter/2.0;
	float volume;
	
	printf("Diketahui : bangun ruang berdiameter 15 cm.\n");
	printf("Ditanyakan : isi volume bangun tersebut\n");
	
	r=diameter/2.0;
	volume=(4.0/3.0)*3.14*(r*r*r);
	
	printf("Jawab : volume bangun ruang tersebut adalah %2.fcm^3", volume);
	
	return 0;
}
