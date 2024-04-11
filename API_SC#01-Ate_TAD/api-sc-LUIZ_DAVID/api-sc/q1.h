#pragma once
#define Q1

typedef struct
{   
    float divReal;
    int divInteira;
    float resto;
}  Div;

void computaExibeResposta(float n1, float n2, Div *div);