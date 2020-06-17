#ifndef PERSONAJEPRINCIPAL_H_INCLUDED
#define PERSONAJEPRINCIPAL_H_INCLUDED

#include "personaje.h"
#pragma once

class personajePrincipal:public personaje{

public:
    //Funciones o metodos
    personaje::atacar(); //es ejemplo no sirve

private:
    int id;
    int vida,escudo;
    float evasion;
    bool escudoTerminado;




};


#endif // PERSONAJEPRINCIPAL_H_INCLUDED
