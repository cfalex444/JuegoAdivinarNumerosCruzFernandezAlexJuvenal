#include "Numero.h"

Numero::Numero()
{
}

int Numero::generarNumeroAleatorio(int _limiteInferior, int _limiteSuperior)
{
    int numero;
    srand(time(NULL));
    numero = _limiteInferior + rand() % (_limiteSuperior + 1 - _limiteInferior);
    return numero;
}
