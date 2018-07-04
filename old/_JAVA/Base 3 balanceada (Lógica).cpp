#include <iostream>
using namespace std;

int resultado[1001]={0};
int i = 0;

//CONTADORES
int contador1 = 10;
int contador2 = 28;
int contador3 = 82;
int contador4 = 244;
int contador5 = 730;
int contador6 = 2188;
int contador7 = 6562;

//POTENCIAS
int p0 = 1;
int p1 = 3;
int p2 = 9;
int p3 = 27;
int p4 = 81;
int p5 = 243;
int p6 = 729;
int p7 = 2187;

//COMPARADORES
int c1;
int c2;
int c3;
int c4;
int c5;
int c6;

//ENTRADAS
int entrada1 = p0;
int entrada2 = p0 + p1;
int entrada3 = p0 + p1 + p2;
int entrada4 = p0 + p1 + p2 + p3;
int entrada5 = p0 + p1 + p2 + p3 + p4;
int entrada6 = p0 + p1 + p2 + p3 + p4 + p5;
	
int main(int argc, char *argv[]) {
	for (i=1; i<=1000; i++){
	
		// SUMA 3^0 (Empieza en 1)
		if (i % 3 == 1)
			resultado[i] = 1;
		if (i % 3 == 2)
			resultado[i] =- 1;
	
		//SUMA 3^1 (Empieza en 2)
		if (i > entrada1){
		c1 = contador1 % p2; //Comparador
			if (c1 > 0 && c1 <= p1)
				resultado[i] += p1;
			if (c1 > p1 && c1 <= p1 * 2)
				resultado[i] += -p1;
			contador1++;
		}		
		
		//SUMA 3^2 (Empieza en 4)
		if (i > entrada2){
		c2 = contador2 % p3; //Comparador
			if (c2 > 0 && c2 <= p2)
				resultado[i] += p2;
			if (c2 > p2 && c2 <= p2 * 2)
				resultado[i] += -p2;
			contador2++;
		}		
		
		//SUMA 3^3 (Empieza en 14)
		if (i > entrada3){
		c3 = contador3 % p4; //Comparador
			if (c3 > 0 && c3 <= p3)
				resultado[i] += p3;
			if (c3 > p3 && c3 <= p3 * 2)
				resultado[i] += -p3;
			contador3++;
		}		
		
		//SUMA 3^4 (Empieza en 40)
		if (i > entrada4){
		c4 = contador4 % p5; //Comparador
			if (c4 > 0 && c4 <= p4)
				resultado[i] += p4;
			if (c4 > p4 && c4 <= p4 * 2)
				resultado[i] += -p4;
			contador4++;
		}	
		
		//SUMA 3^5 (Empieza en 122)
		if (i > entrada5){
		c5 = contador5 % p6; //Comparador
			if (c5 > 0 && c5 <= p5)
				resultado[i] += p5;
			if (c5 > p5 && c5 <= p5 * 2)
				resultado[i] += -p5;
			contador5++;
		}
		
		//SUMA 3^6 (Empieza en 365)

		if (i > entrada6){
		c6 = contador6 % p7; //Comparador
			if (c6 > 0 && c6 <= p6)
				resultado[i] += p6;
			if (c6 > p6 && c6 <= p6 * 2)
				resultado[i] += -p6;
			contador6++;
		}			
		
		cout<< i<< " = "<< resultado[i]<< endl;
	}	
	return 0;
}

