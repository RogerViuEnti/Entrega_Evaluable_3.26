#include <iostream>
#include <string>

int main() {
	std::string numero;
	std::cout << "Introduce numero entero positivo de 4 cifras: \n";
	std::cin >> numero;
	// Sustituir cada cifra por su resultado de sumar 7 y resto de dividir 10.
	for (int i = 0; i < 4; i++) {
		int cifra = numero[i] - '0'; // (Como es un char, '0' tiene el valor ASCII 48, por lo que convertimos restando y sumando)
		cifra = (cifra + 7) % 10;
		numero[i] = cifra + '0';
	}
	// 2. Intercambiar primer numero con tercero
	char temporal = numero[0];
	numero[0] = numero[2];
	numero[2] = temporal;
	// 3. Intercambiar segundo numero con cuarto
	char temp2 = numero[1];
	numero[1] = numero[3];
	numero[3] = temp2;
	std::cout << "El numero cifrado es: " << numero	 << std::endl;
	return 0;
}