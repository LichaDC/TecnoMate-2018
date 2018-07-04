/*
	- BASE 3 BALANCEADA -
	
	Throughout history many different numbering systems have been developed. Some, like Roman numerals,
	have now been almost completely abandoned due to their lack of convenience.
	Other even more exotic numbering systems are only ever used in certain applications,
	such as the factoradic numbers in the context of permutation numbering.
	In this problem we will consider a numbering system known as balanced base-3,
	which naturally appears in the analysis of diverse mathematical problems related to balance scales.
	
	The balanced base-3 system is similar to the decimal or base-10 system we are familiar with in that it is positional.
	Positional numbering systems have digits whose relative order determines which power of the base accompanies them.
	For example, in base-10 we have
		
	123 = 1×102 + 2×101 + 3×100.
		
	In standard positional systems, the allowed digits are the numbers from 0 to B-1,
	where B is the base of the corresponding system.
	Therefore, the number 123 in base-10 is written in standard base-3 as "11120" because
		
	1×34 + 1×33 + 1×32 + 2×31 + 0×30 = 123.
		
	Balanced base-3 is different from standard base-3 only in the fact that the allowed digits are 0, 1 and -1,
	which we will respectively denote as '0', '+' and '-'.
	Then, the number 123 in base-10 is written as "+----0" in balanced base-3, for we have
		
	1×35 + (-1)×34 + (-1)×33 + (-1)×32 + (-1)×31 + 0×30 = 123.
	
	Conversion from numbers in base-10 to balanced base-3 is a mechanical and somewhat tedious process,
	so we require a program to do it for us. Can you help?
	

	INPUT
		The first line contains an integer number T, the number of test cases (1 = T = 200). T test cases follow.
		
		Each test case is described by a single line containing a positive integer number N,
		the number in base-10 that we want to write in balanced base-3 (1 = N = 1000).

	OUTPUT
		For each test case, print a single line containing a string composed solely of the characters
		'0', '+' and '-' and not beginning with '0', representing the digits of the number N in balanced base-3.
		Note that the restriction that the string does not start with a '0' ensures that this representation is unique.
*/


#include <iostream>
using namespace std;

string resultado[1001];

int i = 0;
int n = 0;

//CONTADORES
int contador0 = 1;
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
int c0;
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
	
//FUNCIONES
int Mas(int i){
	resultado[i] = resultado[i] + "+";
	return 0;
}
int Menos(int i){
	resultado[i] = resultado[i] + "-";
	return 0;
}
int Cero(int i){
	resultado[i] = resultado[i] + "0";
	return 0;
}


int main(int argc, char *argv[]) {
	for (i=1; i<=1000; i++){ //COMIENZO LÓGICA
		
		//IMPRIME 3^6 (Empieza en 365)
		if (i > entrada6){
			c6 = contador6 % p7; //Comparador
			if (c6 > 0 && c6 <= p6)
				Mas(i);
			if (c6 > p6 && c6 <= p6 * 2)
				Menos(i);
			if (c6 == 0 || c6 > p6 * 2)
				Cero(i);
			contador6++;
		}	
		
		//IMPRIME 3^5 (Empieza en 122)
		if (i > entrada5){
			c5 = contador5 % p6; //Comparador
			if (c5 > 0 && c5 <= p5)
				Mas(i);
			if (c5 > p5 && c5 <= p5 * 2)
				Menos(i);
			if (c5 == 0 || c5 > p5 * 2)
				Cero(i);
			contador5++;
		}
		
		//IMPRIME 3^4 (Empieza en 40)
		if (i > entrada4){
		c4 = contador4 % p5; //Comparador
			if (c4 > 0 && c4 <= p4)
				Mas(i);
			if (c4 > p4 && c4 <= p4 * 2)
				Menos(i);
			if (c4 == 0 || c4 > p4 * 2)
				Cero(i);
			contador4++;
		}	
		
		//IMPRIME 3^3 (Empieza en 14)
		if (i > entrada3){
			c3 = contador3 % p4; //Comparador
			if (c3 > 0 && c3 <= p3)
				Mas(i);
			if (c3 > p3 && c3 <= p3 * 2)
				Menos(i);
			if (c3 == 0 || c3 > p3 * 2)
				Cero(i);
			contador3++;
		}		
		
		//IMPRIME 3^2 (Empieza en 4)
		if (i > entrada2){
			c2 = contador2 % p3; //Comparador
			if (c2 > 0 && c2 <= p2)
				Mas(i);
			if (c2 > p2 && c2 <= p2 * 2)
				Menos(i);
			if (c2 == 0 || c2 > p2 * 2)
				Cero(i);
			contador2++;
		}		
		
		
		//IMPRIME 3^1 (Empieza en 2)
		if (i > entrada1){
			c1 = contador1 % p2; //Comparador
			if (c1 > 0 && c1 <= p1)
				Mas(i);
			if (c1 > p1 && c1 <= p1 * 2)
				Menos(i);
			if (c1 == 0 || c1 > p1 * 2)
				Cero(i);
			contador1++;
		}
		
		// IMPRIME 3^0 (Empieza en 1)
		if (i % 3 == 1)
			Mas(i);
		if (i % 3 == 2)
			Menos(i);
		if (i % 3 == 0)
			Cero(i);
	
	}	//FIN LÓGICA
	;
	
		cout<< "Dijite el número decimal [Entre 1 y 1000]\n";
		cin>> n;
		cout<< "El número escrito, se representa en base 3 balanceada así:\n";
		cout<< resultado[n];

	return 0;
}
