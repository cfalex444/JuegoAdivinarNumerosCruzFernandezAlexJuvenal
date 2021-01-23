#include <iostream>
#include <cstdlib>

#include "Numero.h"
#include "Jugador.h"

using namespace std;

int main() {
	Numero objetoNumero;
	Jugador jugador_1;
	Jugador jugador_2;

	int numeroRamd = objetoNumero.generarNumeroAleatorio(1, 10);
	int opcion = 0;



	while (opcion != 4) {
		cout << endl << endl << endl << endl << endl;
		cout << "\t\t\t\t\t\t1) JUEGO 1 Jugador" << endl << endl;
		cout << "\t\t\t\t\t\t2) JUEGO 2 Jugadores" << endl << endl;
		cout << "\t\t\t\t\t\t3) Cambiar cantidad de intentos" << endl << endl;
		cout << "\t\t\t\t\t\t4) Salir" << endl << endl;
		cout << "\t\t\t\t\t\tIntroduzca opcion: "; cin >> opcion;
		int cantIntentos;
		int num_1;
		int num_2;

		switch (opcion) {
		case 1:
			for (int i = 1; i <= jugador_1.getCantidadIntento(); i++) {
				system("cls");
				cout << "\n\n\n\t\t\tIntroduzca un numero: "; cin >> num_1;
				if (num_1 > numeroRamd) {
					system("cls");
					cout << "\n\n\n\t\t\t\tMenos" << endl;
					system("pause");
					system("cls");
				}
				if (num_1 < numeroRamd) {
					system("cls");
					cout << "\n\n\n\t\t\t\tMas" << endl;
					system("pause");
					system("cls");
				}
				if (num_1 == numeroRamd) {
					system("cls");
					cout << "\n\n\n\t\t\t\tGanaste" << endl;
					system("pause");
					system("cls");
					break;
				}
				if (i == jugador_1.getCantidadIntento()) {
					system("cls");
					cout << "\n\n\n\t\t\t\tLo siento, perdiste" << endl;
					system("pause");
					system("cls");
				}
			}
			break;
		case 2:
			for (int i = 1; i <= jugador_1.getCantidadIntento(); i++) {
				system("cls");
				cout << "\n\n\n\t\t\tJugador 1 Introduzca un numero: "; cin >> num_1;
				cout << "\n\t\t\tJugador 2 Introduzca un numero: "; cin >> num_2;
				if (num_1 > numeroRamd) {
					system("cls");
					cout << "\n\n\n\t\t\t\tMenos Jugador 1" << endl;
					system("pause");
					system("cls");
				}
				if (num_1 < numeroRamd) {
					system("cls");
					cout << "\n\n\n\t\t\t\tMas Jugador 1" << endl;
					system("pause");
					system("cls");
				}
				if (num_1 == numeroRamd || num_2 == numeroRamd) {
					if (num_1 == num_2) {
						system("cls");
						cout << "\n\n\n\t\t\t\tAmbos Jugadores Ganaron-EMPATE" << endl;
						system("pause");
						system("cls");
						break;
					}
					if (num_1 == numeroRamd) {
						system("cls");
						cout << "\n\n\n\t\t\t\tGanaste Jugador 1" << endl;
						system("pause");
						system("cls");
						break;
					}
					if (num_2 == numeroRamd) {
						system("cls");
						cout << "\n\n\n\t\t\t\tGanaste Jugador 2" << endl;
						system("pause");
						system("cls");
						break;
					}
				}
				if (i == jugador_1.getCantidadIntento()) {
					system("cls");
					cout << "\n\n\n\t\t\t\tLo siento, perdiste Jugador 1" << endl;
					system("pause");
					system("cls");
				}


				if (num_2 > numeroRamd) {
					system("cls");
					cout << "\n\n\n\t\t\t\tMenos Jugador 2" << endl;
					system("pause");
					system("cls");
				}
				if (num_2 < numeroRamd) {
					system("cls");
					cout << "\n\n\n\t\t\t\tMas Jugador 2" << endl;
					system("pause");
					system("cls");
				}
				if (i == jugador_2.getCantidadIntento()) {
					system("cls");
					cout << "\n\n\n\t\t\t\tLo siento, perdiste Jugador 2" << endl;
					system("pause");
					system("cls");
				}
			}

			break;
		case 3:
			system("cls");
			cout << "\n\n\n\t\t\tIntroduzca cantidad de intentos: "; cin >> cantIntentos;

			jugador_1.setCantidadIntento(cantIntentos);
			jugador_2.setCantidadIntento(cantIntentos);
			system("cls");
			cout << "\n\n\n\t\t\tSe cambio la cantidad de intentos a: " << cantIntentos << endl;
			system("pause");
			system("cls");


			break;
		case 4:
			system("cls");
			cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t  NEND OF THE GAME!" << endl;
			cout << "\n\t\t\t\t\t\t   FIN DEL JUEGO!" << endl << endl << endl << endl;

			break;
		default:
			if (opcion < 1 || opcion > 4) {
				system("cls");
				cout << "\n\n\n\n\t\t\tOpcion Ivalida" << endl << endl;
				system("pause");
				system("cls");
			}
		}
	}










	return 0;
}