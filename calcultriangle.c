#include<stdio.h>
#include<math.h>
int main(){
	float a1, a2, a3;
	float o1, o2, o3;
	float distance1, distance2, distance3;
	printf("nous sommes dans un repere orthonorme entrer les coordonnees du point\n");
	printf("entrer l'abscisse du point A\n");
	scanf("%f",&a1);
	printf("entrer l'ordonne\n");
	scanf("%f",&o1);
	printf("entrer les coordonnes du  point B \n");
	printf("entrer l'abscisse du point B\n");
	scanf("%f",&a2);
	printf("entrer l'ordonne\n");
	scanf("%f",&o2);
	printf("entrer les coordonnes du  point C \n");
	printf("entrer l'abscisse du point C\n");
	scanf("%f",&a3);
	printf("entrer l'ordonne\n");
	scanf("%f",&o3);
	distance1 = sqrt((a2-a1)*(a2-a1) + (o2-o1)*(o2-o1));
	distance2 = sqrt((a3-a1)*(a3-a1) + (o3-o1)*(o3-o1));
	distance3 = sqrt((a2-a3)*(a2-a3) + (o2-o3)*(o2-o3));
	printf("la distance AC est :%f",distance1);
	printf(" la distance AB est :%f",distance2);
	printf(" la distance CB est :%f",distance3);

	return 0;
}
