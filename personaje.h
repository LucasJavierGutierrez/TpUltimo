#ifndef PERSONAJE_H_INCLUDED
#define PERSONAJE_H_INCLUDED

#pragma once

class personaje{
public:
    //Metodos
    int setAtaque();
    int setVida();
    int setEscudo();
    float setEvasion();
    int setId();

    int atacar();
protected:
    int id,ataque;
    int vida,escudo;
    float evasion;
    bool escudoTerminado;



};




#endif // PERSONAJE_H_INCLUDED
