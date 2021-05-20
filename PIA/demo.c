#include<stdio.h>

int main(){
	int op, opc;
	double n, num;
	printf("=============== CONVERSOR DE UNIDADES ===============\n");
	printf("~~~~~~~~~~~~~~~~~~ De:JuanitoNito7 ~~~~~~~~~~~~~~~~~~\n");
	printf("\n~~~~~~~~~~~~~~~~ Magnitudes Fisicas: ~~~~~~~~~~~~~~~~\n");
	printf(" 1. Magnitud: Velocidad\n 2. Magnitud: Longitud\n 3. Magnitud: Tiempo\n");
	printf("Introduzca opcion (1-3): ");
	scanf("%i",&op);
	switch(op){
		case 1:/*Magnitud: velocidad*/
		printf("\n-------------------- Magnitud: 1 --------------------\n");
			printf(" 1. Unidad: Kilometro por hora (km/h)\n 2. Unidad: Metro por segundo (m/s)\n 3. Unidad: Milla por hora (mi/h)\n 4. Unidad: Pie por segundo (ft/s)\n");
			printf("Elija la opcion de la unidad a convertir (1-4): ");
			scanf("%i",&opc);
			switch(opc){
			case 1:/*Unidad: kilometro por hora (km/h)*/
			printf("\n--------------------- Unidad: 1 ---------------------\nEscriba la cantidad deseada a convertir: ");
			scanf("%lf",&n);
            printf(" Metro por segundo(m/s): ");
			printf("%lf", num = n / 3.6);
			printf("\n Milla por hora (mi/h): ");
			printf("%lf", num = n / 1.609);
			printf("\n Pie por segundo (ft/s): ");
			printf("%lf", num = n / 1.097);
			printf("\n~~~~~~~~~~~~~~~~ CALCULOS APROXIMADOS ~~~~~~~~~~~~~~~\n\n================== FIN DEL PROGRAMA =================");
			break;
			case 2:/*Unidad: metro por segundo (m/s)*/
			printf("\n--------------------- Unidad: 2 ---------------------\nEscriba la cantidad deseada a convertir: ");
			scanf("%lf",&n);
            printf(" Kilometro por hora (km/h): ");
			printf("%lf", num = n * 3.6);
			printf("\n Milla por hora (mi/h): ");
			printf("%lf", num = n * 2.237);
			printf("\n Pie por segundo (ft/s): ");
			printf("%lf", num = n * 3.281);
			printf("\n~~~~~~~~~~~~~~~~ CALCULOS APROXIMADOS ~~~~~~~~~~~~~~~\n\n================== FIN DEL PROGRAMA =================");
			break;
			case 3:/*Unidad: milla por hora (mi/h)*/
			printf("\n--------------------- Unidad: 3 ---------------------\nEscriba la cantidad deseada a convertir: ");
			scanf("%lf",&n);
            printf(" Kilometro por hora (km/h): ");
			printf("%lf", num = n * 1.609);
			printf("\n Metro por segundo (m/s): ");
			printf("%lf", num = n / 2.237);
			printf("\n Pie por segundo (ft/s): ");
			printf("%lf", num = n * 1.467);
			printf("\n~~~~~~~~~~~~~~~~ CALCULOS APROXIMADOS ~~~~~~~~~~~~~~~\n\n================== FIN DEL PROGRAMA =================");
			break;
			case 4:/*Unidad: pie por segundo (ft/s)*/
			printf("\n--------------------- Unidad: 4 ---------------------\nEscriba la cantidad deseada a convertir: ");
			scanf("%lf",&n);
            printf(" Kilometro por hora (km/h): ");
			printf("%lf", num = n * 1.097);
			printf("\n Metro por segundo (m/s): ");
			printf("%lf", num = n / 3.281);
			printf("\n Milla por hora (mi/h): ");
			printf("%lf", num = n / 1.467);
			printf("\n~~~~~~~~~~~~~~~~ CALCULOS APROXIMADOS ~~~~~~~~~~~~~~~\n\n================== FIN DEL PROGRAMA =================");
			break;
			default:
			printf("\n============= ERROR, intentelo de nuevo =============");
			}
		break;

		case 2:/*Magnitud: longitud*/
		printf("\n-------------------- Magnitud: 2 --------------------\n");
			printf(" 1. Unidad: Kilometro (km)\n 2. Unidad: Metro (m)\n 3. Unidad: Centimetro (cm)\n 4. Unidad: Milla (mi)\n 5. Unidad: Yarda (yd)\n 6. Unidad: Pie (ft)\n 7. Unidad: Pulgada (inch)\n");
			printf("Elija la opcion de la unidad a convertir (1-6): ");
			scanf("%i",&opc);
			switch(opc){
			case 1:/*Unidad: kilometro (km)*/
			printf("\n--------------------- Unidad: 1 ---------------------\nEscriba la cantidad deseada a convertir: ");
			scanf("%lf",&n);
			printf(" Metro (m): ");
			printf("%lf", num = n * 1000);
			printf("\n Centimetro (cm): ");
			printf("%lf", num = n * 100000);
			printf("\n Milla (mi): ");
			printf("%lf", num = n / 1.609);
			printf("\n Yarda (yd): ");
			printf("%lf", num = n * 1094);
			printf("\n Pie (ft): ");
			printf("%lf", num = n * 3281);
			printf("\n Pulgada (inch): ");
			printf("%lf", num = n * 39370);
			printf("\n~~~~~~~~~~~~~~~~ CALCULOS APROXIMADOS ~~~~~~~~~~~~~~~\n\n================== FIN DEL PROGRAMA =================");
			break;
			case 2:/*Unidad: metro (m)*/
			printf("\n--------------------- Unidad: 2 ---------------------\nEscriba la cantidad deseada a convertir: ");
			scanf("%lf",&n);
			printf(" Kilometro (km): ");
			printf("%lf", num = n / 1000);
			printf("\n Centimetro (cm): ");
			printf("%lf", num = n * 100);
			printf("\n Milla (mi): ");
			printf("%lf", num = n / 1609);
			printf("\n Yarda (yd): ");
			printf("%lf", num = n * 1.094);
			printf("\n Pie (ft): ");
			printf("%lf", num = n * 3.281);
			printf("\n Pulgada (inch): ");
			printf("%lf", num = n * 39.37);
			printf("\n~~~~~~~~~~~~~~~~ CALCULOS APROXIMADOS ~~~~~~~~~~~~~~~\n\n================== FIN DEL PROGRAMA =================");
			break;
			case 3:/*Unidad: centimetro (cm)*/
			printf("\n--------------------- Unidad: 3 ---------------------\nEscriba la cantidad deseada a convertir: ");
			scanf("%lf",&n);
			printf(" Kilometro (km): ");
			printf("%lf", num = n / 100000);
			printf("\n Metro (m): ");
			printf("%lf", num = n / 100);
			printf("\n Milla (mi): ");
			printf("%lf", num = n / 160934);
			printf("\n Yarda (yd): ");
			printf("%lf", num = n / 91.44);
			printf("\n Pie (ft): ");
			printf("%lf", num = n / 30.48);
			printf("\n Pulgada (inch): ");
			printf("%lf", num = n / 2.54);
			printf("\n~~~~~~~~~~~~~~~~ CALCULOS APROXIMADOS ~~~~~~~~~~~~~~~\n\n================== FIN DEL PROGRAMA =================");
			break;
			case 4:/*Unidad: milla (mi)*/
			printf("\n--------------------- Unidad: 4 ---------------------\nEscriba la cantidad deseada a convertir: ");
			scanf("%lf",&n);
			printf(" Kilometro (km): ");
			printf("%lf", num = n * 1.609);
			printf("\n Metro (m): ");
			printf("%lf", num = n * 1609);
			printf("\n Centimetro (cm): ");
			printf("%lf", num = n * 160934);
			printf("\n Yarda (yd): ");
			printf("%lf", num = n * 1760);
			printf("\n Pie (ft): ");
			printf("%lf", num = n * 5280);
			printf("\n Pulgada (inch): ");
			printf("%lf", num = n * 63360);
			printf("\n~~~~~~~~~~~~~~~~ CALCULOS APROXIMADOS ~~~~~~~~~~~~~~~\n\n================== FIN DEL PROGRAMA =================");
			break;
			case 5:/*Unidad: Yarda (yd)*/
			printf("\n--------------------- Unidad: 5 ---------------------\nEscriba la cantidad deseada a convertir: ");
			scanf("%lf",&n);
			printf(" Kilometro (km): ");
			printf("%lf", num = n / 1094);
			printf("\n Metro (m): ");
			printf("%lf", num = n / 1.094);
			printf("\n Centimetro (cm): ");
			printf("%lf", num = n * 91.44);
			printf("\n Milla (mi): ");
			printf("%lf", num = n / 1760);
			printf("\n Pie (ft): ");
			printf("%lf", num = n * 3);
			printf("\n Pulgada (inch): ");
			printf("%lf", num = n * 36);
			printf("\n~~~~~~~~~~~~~~~~ CALCULOS APROXIMADOS ~~~~~~~~~~~~~~~\n\n================== FIN DEL PROGRAMA =================");
			break;
			case 6:/*Unidad: pie (ft)*/
			printf("\n--------------------- Unidad: 6 ---------------------\nEscriba la cantidad deseada a convertir: ");
			scanf("%lf",&n);
			printf(" Kilometro (km): ");
			printf("%lf", num = n / 3281);
			printf("\n Metro (m): ");
			printf("%lf", num = n / 3.281);
			printf("\n Centimetro (cm): ");
			printf("%lf", num = n * 30.48);
			printf("\n Milla (mi): ");
			printf("%lf", num = n / 5280);
			printf("\n Yarda (yd): ");
			printf("%lf", num = n / 3);
			printf("\n Pulgada (inch): ");
			printf("%lf", num = n * 3);
			printf("\n~~~~~~~~~~~~~~~~ CALCULOS APROXIMADOS ~~~~~~~~~~~~~~~\n\n================== FIN DEL PROGRAMA =================");
			break;
			case 7:/*Unidad: pulgada (inch)*/
            printf("\n--------------------- Unidad: 7 ---------------------\nEscriba la cantidad deseada a convertir: ");
			scanf("%lf",&n);
			printf(" Kilometro (km): ");
			printf("%lf", num = n / 39370);
			printf("\n Metro (m): ");
			printf("%lf", num = n / 39.37);
			printf("\n Centimetro (cm): ");
			printf("%lf", num = n * 2.54);
			printf("\n Milla (mi): ");
			printf("%lf", num = n / 63360);
			printf("\n Yarda (yd): ");
			printf("%lf", num = n / 36);
			printf("\n Pie (ft): ");
			printf("%lf", num = n / 12);
			printf("\n~~~~~~~~~~~~~~~~ CALCULOS APROXIMADOS ~~~~~~~~~~~~~~~\n\n================== FIN DEL PROGRAMA =================");
            break;
			default:
			printf("\n============= ERROR, intentelo de nuevo =============");
			}
		break;

		case 3:/*Magnitud: tiempo*/
		printf("\n-------------------- Magnitud: 3 --------------------\n");
			printf(" 1. Unidad: Dia (dia)\n 2. Unidad: Hora (h)\n 3. Unidad: Minuto (m)\n 4. Unidad: Segundo (s)\n 5. Unidad: Milisegundo (ms)\n");
			printf("Elija la opcion de la unidad a convertir (1-5): ");
			scanf("%i",&opc);
			switch(opc){
			case 1:/*Unidad: dia (dia)*/
			printf("\n--------------------- Unidad: 1 ---------------------\nEscriba la cantidad deseada a convertir: ");
			scanf("%lf",&n);
            printf(" Hora (h): ");
			printf("%lf", num = n * 24);
			printf("\n Minuto (min): ");
			printf("%lf", num = n * 1440);
			printf("\n Segundo (s): ");
			printf("%lf", num = n * 86400);
			printf("\n Milisegundo (ms): ");
			printf("%lf", num = n * 86400000);
			printf("\n~~~~~~~~~~~~~~~~ CALCULOS APROXIMADOS ~~~~~~~~~~~~~~~\n\n================== FIN DEL PROGRAMA =================");
			break;
			case 2:/*Unidad: hora (h)*/
			printf("\n--------------------- Unidad: 2 ---------------------\nEscriba la cantidad deseada a convertir: ");
			scanf("%lf",&n);
            printf(" Dia (dia): ");
			printf("%lf", num = n / 24);
			printf("\n Minuto (min): ");
			printf("%lf", num = n * 60);
			printf("\n Segundo (s): ");
			printf("%lf", num = n * 3600);
			printf("\n Milisegundo (ms): ");
			printf("%lf", num = n * 3600000);
			printf("\n~~~~~~~~~~~~~~~~ CALCULOS APROXIMADOS ~~~~~~~~~~~~~~~\n\n================== FIN DEL PROGRAMA =================");
			break;
			case 3:/*Unidad: minuto (m)*/
			printf("\n--------------------- Unidad: 3 ---------------------\nEscriba la cantidad deseada a convertir: ");
			scanf("%lf",&n);
            printf(" Dia (dia): ");
			printf("%lf", num = n / 1444);
			printf("\n Hora (h): ");
			printf("%lf", num = n / 60);
			printf("\n Segundo (s): ");
			printf("%lf", num = n * 60);
			printf("\n Milisegundo (ms): ");
			printf("%lf", num = n * 60000);
			printf("\n~~~~~~~~~~~~~~~~ CALCULOS APROXIMADOS ~~~~~~~~~~~~~~~\n\n================== FIN DEL PROGRAMA =================");
			break;
			case 4:/*Unidad: segundo (s)*/
			printf("\n--------------------- Unidad: 4 ---------------------\nEscriba la cantidad deseada a convertir: ");
			scanf("%lf",&n);
            printf(" Dia (dia): ");
			printf("%lf", num = n / 86400);
			printf("\n Hora (h): ");
			printf("%lf", num = n / 3600);
			printf("\n Minuto (m): ");
			printf("%lf", num = n / 60);
			printf("\n Milisegundo (ms): ");
			printf("%lf", num = n * 1000);
			printf("\n~~~~~~~~~~~~~~~~ CALCULOS APROXIMADOS ~~~~~~~~~~~~~~~\n\n================== FIN DEL PROGRAMA =================");
			break;
			case 5:/*Unidad: microsegundo (ms)*/
			printf("\n--------------------- Unidad: 5 ---------------------\nEscriba la cantidad deseada a convertir: ");
			scanf("%lf",&n);
            printf(" Dia (dia): ");
			printf("%lf", num = n / 86400);
			printf("\n Hora (h): ");
			printf("%lf", num = n / 3600);
			printf("\n Minuto (m): ");
			printf("%lf", num = n / 60);
			printf("\n Milisegundo (ms): ");
			printf("%lf", num = n * 1000);
			printf("\n~~~~~~~~~~~~~~~~ CALCULOS APROXIMADOS ~~~~~~~~~~~~~~~\n\n================== FIN DEL PROGRAMA =================");
			break;
			default:
			printf("\n============= ERROR, intentelo de nuevo =============");
			}
		break;
		default:
		printf("\n============= ERROR, intentelo de nuevo =============");
	}
	return 0;
}
