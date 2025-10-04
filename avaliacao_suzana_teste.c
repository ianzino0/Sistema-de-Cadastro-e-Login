#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    int opcaoprincipal, opcaosecundaria, modulopessoal, modulofinanceiro, moduloacademico, moduloutilidades;
    char senha[100];
    char login[100];
    
    do{
        printf("\n========== Sistema Academico ==========\n");
        printf("1 - Criar login e senha\n");
        printf("2 - Sair\n");
        printf("=======================================\n");
        printf("Digite o que voce deseja fazer: ");
        scanf("%d", &opcaoprincipal);
        system("cls");

        switch (opcaoprincipal) {
            case 1: {
                printf("Digite seu login: ");
                scanf("%99s", login);
                printf("Digite sua senha: ");
                scanf("%99s", senha);
   
                if (strlen(senha) >= 6 && strcmp(senha, "123456") != 0) {
                    printf("Ebaa, voce criou uma conta.\n");
                    system("pause");
                    system("cls");
                    
                    do{
                        printf("\n========== Sistema Academico ==========\n");
                        printf("1 - Modulo Pessoal\n");
                        printf("2 - Modulo Financeiro\n");
                        printf("3 - Modulo Academico\n");
                        printf("4 - Modulo Utilidades\n");
                        printf("5 - Sair\n");
                        printf("=======================================\n");
                        printf("Digite o que voce deseja fazer: ");
                        scanf("%d", &opcaosecundaria);
                        system("cls");

                        switch(opcaosecundaria){
                            
                            case 1:
                                do{
                                    printf("\n========== Modulo Pessoal ==========\n");
                                    printf("1 - Idade de Voto\n");
                                    printf("2 - Calcular seu IMC\n");
                                    printf("3 - Sair\n");
                                    printf("=======================================\n");
                                    printf("Digite o que voce deseja fazer: ");
                                    scanf("%d", &modulopessoal);
                                    system("cls");

                                    switch (modulopessoal){
                                        case 1:{
                                            int voto;
                                            printf("Digite sua idade: ");
                                            scanf("%d", &voto);

                                            if(voto < 16){
                                                printf("Voce nao pode votar\n");
                                            }else if (voto == 16 || voto == 17 || voto > 70){
                                                printf("Voce pode votar se quiser\n");
                                            }else if(voto >= 18 && voto <= 70){
                                                printf("Voce DEVE votar\n");
                                            }
                                            system("pause");
                                            system("cls");
                                            break;
                                        }
                                        case 2:{
                                            float peso, altura, imc;

                                            printf("Digite seu peso (kg): ");
                                            scanf("%f", &peso);

                                            printf("Digite sua altura (m): ");
                                            scanf("%f", &altura);

                                            imc = peso / (altura * altura);

                                            printf("\nEis o seu IMC: %.2f\n", imc);
                                            printf("Eis o seu peso: %.2f kg\n", peso);
                                            printf("Eis a sua altura: %.2f m\n", altura);
                                            system("pause");
                                            system("cls");
                                            break;
                                        }
                                        case 3:
                                            break;
                                        default:
                                            printf("Opcao invalida!\n");
                                            system("pause");
                                            system("cls");
                                            break;
                                    }
                                }while(modulopessoal != 3);
                                break;
                            
                            case 2:
                                do{
                                    printf("\n========== Modulo Financeiro ==========\n");
                                    printf("1 - Salario anual\n");
                                    printf("2 - Salario do periodo\n");
                                    printf("3 - Conversor para Dolar e Euro\n");
                                    printf("4 - Sair\n");
                                    printf("=======================================\n");
                                    printf("Digite o que voce deseja fazer: ");
                                    scanf("%d", &modulofinanceiro);
                                    system("cls");

                                    switch(modulofinanceiro){
                                        case 1:{
                                            float salario, salarioanual;

                                            printf("Digite seu salario mensal: ");
                                            scanf("%f", &salario);

                                            salarioanual = salario * 12;

                                            printf("\nEis o seu salario anual: R$ %.2f\n", salarioanual);
                                            system("pause");
                                            system("cls");
                                            break;
                                        }
                                        case 2:{
                                            float periodo, salario, trabalhado;

                                            printf("Digite sua diaria: ");
                                            scanf("%f", &salario);

                                            printf("Digite o periodo trabalhado (dias): ");
                                            scanf("%f", &periodo);

                                            trabalhado = periodo * salario;

                                            printf("\nEis o seu salario do periodo: R$ %.2f\n", trabalhado);
                                            system("pause");
                                            system("cls");
                                            break;
                                        }
                                        case 3:{
                                            float dolar = 5.32;
                                            float euro = 6.27;
                                            float reais, conversaodolar, conversaoeuro;

                                            printf("Digite quanto quer converter (R$): ");
                                            scanf("%f", &reais);

                                            conversaodolar = reais / dolar;
                                            conversaoeuro = reais / euro;

                                            printf("\nEis seu valor em dolares: $ %.2f\n", conversaodolar);
                                            printf("Eis seu valor em euros: € %.2f\n", conversaoeuro);
                                            system("pause");
                                            system("cls");
                                            break;
                                        }
                                        case 4:
                                            break;
                                        default:
                                            printf("Opcao invalida!\n");
                                            system("pause");
                                            system("cls");
                                            break;
                                    }
                                }while(modulofinanceiro != 4);
                                break;
                        
                            case 3:
                                do{
                                    printf("\n========== Modulo Academico ==========\n");
                                    printf("1 - Notas\n");
                                    printf("2 - Sair\n");
                                    printf("=======================================\n");
                                    printf("Digite o que voce deseja fazer: ");
                                    scanf("%d", &moduloacademico);
                                    system("cls");

                                    switch(moduloacademico){
                                        case 1:{
                                            float notas1, notas2, soma, media, mediadobro;

                                            printf("Digite suas duas notas (separadas por espaco): ");
                                            scanf("%f %f", &notas1, &notas2);

                                            if(notas1 >= 7 && notas2 >= 7){
                                                printf("\nAprovado!\n");
                                            }else if(notas1 >= 4 && notas1 <= 6.9 && notas2 >= 4 && notas2 <= 6.9){
                                                printf("\nFoi para recuperacao\n");
                                            }else{
                                                printf("\nVoce reprovou\n");
                                            }

                                            soma = notas1 + notas2;
                                            media = soma / 2;
                                            mediadobro = media * 2;

                                            printf("Soma: %.2f\n", soma);
                                            printf("Media: %.2f\n", media);
                                            printf("O dobro da sua media: %.2f\n", mediadobro);
                                            system("pause");
                                            system("cls");
                                            break;
                                        }
                                        case 2:
                                            break;
                                        default:
                                            printf("Opcao invalida!\n");
                                            system("pause");
                                            system("cls");
                                            break;
                                    }
                                }while(moduloacademico != 2);
                                break;
                        
                            case 4:
                                do{
                                    printf("\n========== Modulo Utilidades ==========\n");
                                    printf("1 - Impar ou par\n");
                                    printf("2 - Intervalo de Numeros\n");
                                    printf("3 - Area e Perimetro\n");
                                    printf("4 - Segundos e Minutos\n");
                                    printf("5 - Sair\n");
                                    printf("=======================================\n");
                                    printf("Digite o que voce deseja fazer: ");
                                    scanf("%d", &moduloutilidades);
                                    system("cls");

                                    switch(moduloutilidades){
                                        case 1:{
                                            int numeropar;

                                            printf("Digite seu numero inteiro: ");
                                            scanf("%d", &numeropar);

                                            if(numeropar % 2 == 0){
                                                printf("\nO numero %d e par.\n", numeropar);
                                            } else {
                                                printf("\nO numero %d e impar.\n", numeropar);
                                            }
                                            system("pause");
                                            system("cls");
                                            break;
                                        }

                                        case 2:{
                                            int numero;

                                            printf("Digite seu numero de 10 a 50: ");
                                            scanf("%d", &numero);

                                            if(numero >= 10 && numero <= 50){
                                                printf("\nNumero ok!\n");
                                            } else{
                                                printf("\nNumero nao faz parte do intervalo\n");
                                            }
                                            system("pause");
                                            system("cls");
                                            break;
                                        }

                                        case 3:{
                                            float perimetroretangulo, arearetangulo, perimetrocirculo, areacirculo;
                                            float pi = 3.14;
                                            float base, altura, raio;

                                            printf("Digite a base do retangulo: ");
                                            scanf("%f", &base);

                                            printf("Digite a altura do retangulo: ");
                                            scanf("%f", &altura);

                                            printf("Digite o raio do circulo: ");
                                            scanf("%f", &raio);

                                            perimetrocirculo = 2 * pi * raio;
                                            perimetroretangulo = 2 * (base + altura);
                                            areacirculo = pi * (raio * raio);
                                            arearetangulo = base * altura;

                                            printf("\nEis a area do circulo: %.2f\n", areacirculo);
                                            printf("Eis a area do retangulo: %.2f\n", arearetangulo);
                                            printf("Eis o perimetro do circulo: %.2f\n", perimetrocirculo);
                                            printf("Eis o perimetro do retangulo: %.2f\n", perimetroretangulo);
                                            system("pause");
                                            system("cls");
                                            break;
                                        }

                                        case 4:{
                                            float segundo, horas, minutos;

                                            printf("Digite seus segundos: ");
                                            scanf("%f", &segundo);

                                            horas = segundo / 3600;
                                            minutos = segundo / 60;

                                            printf("\nHoras: %.2f\n", horas);
                                            printf("Minutos: %.2f\n", minutos);
                                            system("pause");
                                            system("cls");
                                            break;
                                        }

                                        case 5:
                                            break;
                                        default:
                                            printf("Opcao invalida!\n");
                                            system("pause");
                                            system("cls");
                                            break;
                                    }
                                }while(moduloutilidades != 5);
                                break;
                            
                            case 5:
                                break;
                            
                            default:
                                printf("Opcao invalida!\n");
                                system("pause");
                                system("cls");
                                break;
                        }
                    }while(opcaosecundaria != 5);
                } else {
                    printf("Nao foi possivel criar sua conta!\n");
                    printf("A senha deve ter pelo menos 6 caracteres e nao pode ser '123456'.\n");
                    system("pause");
                    system("cls");
                }
                break;
            }
            
            case 2:
                printf("Obrigado por usar nosso sistema.\n");
                break;
            
            default:
                printf("Opcao invalida! Tente novamente.\n");
                system("pause");
                system("cls");
                break;
        }
        
    } while(opcaoprincipal != 2);
    
    return 0;
}