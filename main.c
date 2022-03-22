//Calculo de Salário e desconto INSS

#include <stdio.h>
#include <locale.h>



int main (){
 //declaracao de variaveis
 
 char nome[60]; //variável do tipo string
 
 float ht, vh, di, sb, vd, sl; //variaveis reais, ponto flutuante
   
   // Receber os dados e  fazer a leitura
    printf ("Nome do Funcionário:  \n");
    scanf ("%s",nome);
    printf ("Total de horas trabalhadas: \n");
    scanf("%f", &ht);
    printf ("Valor das horas trabalhadas: \n");
    scanf("%f",&vh);
    printf ("Digite o percentual do INSS: \n");
    scanf("%f", &di);
    
    // Processamento dos dados
    sb = ht * vh;
    vd = (di/100) * sb;
    sl = sb - vd;
    
    
    //Resultado, Impressão final
    printf ("Salário Bruto:         %0.2f\n", sb);
    printf ("Valor de descontos:    %0.2f\n",vd);
    printf ("Salario Liquido:       %0.2f\n", sl);
    

}