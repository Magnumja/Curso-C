#include <iostream>
#define PausarTexto "PAUSE"
#define PuleLinha "\n"
#define Retorne return

using namespace std;

int main()
{
    typedef char caractere;
    caractere Letra = 'C';
    cout<< "Primeiro programa C++" << PuleLinha;
    system(PausarTexto);
    Retorne 0;
}