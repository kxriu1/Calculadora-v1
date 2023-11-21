#include <iostream>
#include "math.h"

#ifdef _WIN32
    #define CLEAR_SCREEN "cls"
#else
    #define CLEAR_SCREEN "clear"
#endif

using namespace std;

int main() {
    int opcao;
    float baseMenor, baseMaior, altura, base, raio;
    float num1, num2, resposta;

do {
    system(CLEAR_SCREEN); 

    cout << "----- CALCULADORA v1 -----" << endl;
    cout << "Selecione a operacao:" << endl;
    cout << "1. Operacoes matematicas" << endl;
    cout << "2. Geometria" << endl;
    cout << "3. Equacoes" << endl;
    cout << "0. Sair" << endl;
    cout << "Opcao: ";
    cin >> opcao;

    switch (opcao) {
        case 1:
            do {
                system(CLEAR_SCREEN); 

                cout << "----- OPERACOES MATEMATICAS -----" << endl;
                cout << "Selecione a operacao:" << endl;
                cout << "1. Soma" << endl;
                cout << "2. Subtracao" << endl;
                cout << "3. Multiplicacao" << endl;
                cout << "4. Divisao" << endl;
                cout << "0. Voltar" << endl;
                cout << "Opcao: ";
                cin >> opcao;

                switch (opcao) {
                    case 1:
                     
                        cout << "Digite o primeiro numero: ";
                        cin >> num1;
                        cout << "Digite o segundo numero: ";
                        cin >> num2;
                        cout << "Resultado: " << soma(num1, num2) << endl;
                        break;
                    case 2:
                   
                        cout << "Digite o primeiro numero: ";
                        cin >> num1;
                        cout << "Digite o segundo numero: ";
                        cin >> num2;
                        cout << "Resultado: " << subtracao(num1, num2) << endl;
                        break;
                    case 3:
                        
                        cout << "Digite o primeiro numero: ";
                        cin >> num1;
                        cout << "Digite o segundo numero: ";
                        cin >> num2;
                        cout << "Resultado: " << multiplicacao(num1, num2) << endl;
                        break;
                    case 4:
                        
                        cout << "Digite o primeiro numero: ";
                        cin >> num1;
                        cout << "Digite o segundo numero: ";
                        cin >> num2;
                        cout << "Resultado: " << divisao(num1, num2) << endl;
                        break;
                    case 0:
                        cout << "Voltando ao menu principal... " << endl;
                        break;
                    default:
                        cout << "Opcao invalida! Tente novamente." << endl;
                        break;
                }

                cout << endl;
                system("pause"); 
            } while (opcao != 0);
            break;
        
        case 2:
            do {
                system(CLEAR_SCREEN);

                cout << "----- GEOMETRIA -----" << endl;
                cout << "Selecione a operacao:" << endl;
                cout << "1. Calculo do perimetro" << endl;
                cout << "2. Calculo area do triangulo" << endl;
                cout << "3. Calculo area do quadrado" << endl;
                cout << "4. Calculo area do losango" << endl;
                cout << "5. Calculo area do trapezio" << endl;
                cout << "6. Calculo do circulo " << endl;
                cout << "0. Voltar" << endl;
                cout << "Opcao: ";
                cin >> opcao;

                switch (opcao) {
                    case 1:
                      
                        cout << "Digite o valor do lado: ";
                        cin >> num1;
                        cout << "Resultado: " << calcularPerimetro(num1) << endl;
                        break;
                    case 2:
                      
                        cout << "Digite o valor da base: ";
                        cin >> num1;
                        cout << "Digite o valor da altura: ";
                        cin >> num2;
                        cout << "Resultado: " << calcularAreaTriangulo(num1, num2) << endl;
                        break;
                    case 3:
                        cout << "Digite o valor da base: ";
                        cin >> num1;
                        cout << "Digite o valor da altura: ";
                        cin >> num2;
                        cout << "Resultado: " << calcularAreaQuadrado(num1, num2) << endl;
                        break;
                    case 4:
                        cout << "Digite o valor da diagonal maior: ";
                        cin >> num1;
                        cout << "Digite o valor da diagonal menor: ";
                        cin >> num2;
                        cout << "Resultado: " << calcularAreaLosango(num1, num2) << endl;
                        break;
                    case 5:
                        cout << "Digite o valor da base maior: ";
                        cin >> baseMaior;
                        cout << "Digite o valor da base menor: ";
                        cin >> baseMenor;
                        cout << "Digite o valor da altura: ";
                        cin >> altura;
                        cout << "Resultado: " << calcularAreaTrapezio(baseMaior, baseMenor, altura) << endl;
                        break;
                    case 6:
                        cout << "Digite o valor do raio: ";
                        cin >> raio;
                        cout << "Resultado: " << calcularAreaCirculo(raio) << endl;
                        break;
                    case 0:
                        cout << "Voltando ao menu principal..." << endl;
                        break;
                    default:
                        cout << "Opcao invalida! Tente novamente." << endl;
                        break;
                }

                cout << endl;
                system("pause");
            } while (opcao != 0);
            break;
        
        case 3:
                cout << "EM BREVE XD ";
                break;
        
        case 0:
            cout << "Encerrando a calculadora..." << endl;
            break;
        default:
            cout << "Opcao invalida! Tente novamente." << endl;
            break;
    }

    cout << endl;
    system("pause");
} while (opcao != 0);

return 0;
}
