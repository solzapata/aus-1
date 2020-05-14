#include<stdio.h>

int main() {
    int M[10] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
    int N[10] = {15, 15, 10, 10, 25, 30, 35, 40, 45, 50};
    int i;
    int igualdad = 0;
    int sumaM = 0;
    int sumaN = 0;

    for(i = 0; i < 10; i++){
        sumaM = sumaM + M[i];
        sumaN = sumaN + N[i];

        if(M[i] == N[i]){
            igualdad++;
        } else{
            igualdad;
        };
    }

    if(igualdad == 10){
        printf("Los arrays son iguales");
    } else if(sumaM == sumaN){
        printf("Los arrays son similares frente a suma, ambos resultan %d", sumaM);
    } else{
        printf("Los arrays son diferentes");
    }

    return 0;
}
