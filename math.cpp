#include <iostream>
#include "math.h"

using namespace std;

float soma(float num1, float num2) {
    return num1 + num2;
}

float subtracao(float num1, float num2) {
    return num1 - num2;
}

float multiplicacao(float num1, float num2) {
    return num1 * num2;
}

float divisao(float num1, float num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        cout << "Erro: divisão por zero!" << endl;
        return 0;
    }
}

float calcularPerimetro(float lado) {
    return 4 * lado;
}

float calcularAreaTriangulo(float b, float h){
    return (b * h) / 2;
}

float calcularAreaQuadrado(float b, float h){
    return b * h;
}

float calcularAreaLosango(float diagonal_maior , float diagonal_menor){
    return (diagonal_maior * diagonal_menor) / 2;
}

float calcularAreaTrapezio(float baseMenor, float baseMaior, float h){
    return ((baseMaior + baseMenor ) * h / 2);
}
float calcularAreaCirculo(float raio){
    const float PI = 3.14;
    int area = PI * raio * raio;
    return area;
}


//  float calculo = (base + baseMenorDoTrapezio) * altura / 2;