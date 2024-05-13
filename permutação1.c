#include <stdio.h>

int contadigitos(int numero, int algarismo){
    int i =0;
    while(algarismo>0){
        if(numero == (algarismo%10)){
            i++;
        }
        algarismo=algarismo/10;
    }
    return i;
}
int main(){
int j,check1,check2,numero1,numero2;
int breakador=0;
scanf("%d %d", &numero1, &numero2);
for(j=1; j<10 && breakador==0; j++){
    check1 = contadigitos(j,numero1);
    check2 = contadigitos(j,numero2);
    if (check1 ==check2) breakador = 0;
    else{
        breakador = 1;
    }
}
if (breakador == 0)printf("os numeros são joinha");
else{
    printf("os numero eh bosta");
}
}
