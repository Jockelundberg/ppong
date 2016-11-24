#include <stdio.h>
#include "grafik.h"
#include "spelet.h"

int main()
{
    starta_grafik();

    initiera_spelet();
    starta_spelet();
    stada_upp_spelet();

    stada_upp_grafik();    
}

