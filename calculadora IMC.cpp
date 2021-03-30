#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main ( )
{
float alt,peso,imc;

printf("CALCULE SEU IMC\n");

printf("Digite o valor do seu peso:\n");
scanf("%f", &peso);

printf("Digite o valor da sua altura: ex: X.XXcm\n");
scanf("%f", &alt);

imc=peso/(alt*alt);

if(imc<18.5){
printf("o seu IMC e igual a: %f e voce esta muito abaixo do peso", imc);
}

if((imc>18.5) && (imc<24.9)){
printf("o seu IMC e igual a : %f e o seu peso etsa normal, parabens!", imc);
}

if((imc>25) && (imc<29.9)){
printf("o seu IMC e igual a : %f e voce esta com sobrepeso, ATENCAO!", imc);
}

if((imc>30) && (imc<34.9)){
printf("o seu IMC e igual a : %f e voce esta com Obesidade Grau 1, CUIDADO!", imc);
}

if((imc>35) && (imc<39.9)){
printf("o seu IMC e igual a : %f e voce esta com Obesidade Severa Grau 2, PERIGO CUIDADO!", imc);
}

if(imc>=40){
printf("o seu IMC e igual a : %f e voce esta com Obesidade Morbida Grau 3, MUITO PERIGO!", imc);
}


}
