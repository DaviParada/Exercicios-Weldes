/* Exercicio - 1 */
/*
int main(){
int i;
for(i = 1;i <= 50; i++){
    if (i % 2 != 0) {
        printf("%d\n",i);
    }
}

return 0;
}
*/


/* Exercicio - 2 */
/*
int main(){
int num1,i,result=0;

printf("Digite um numero positivo: ");
scanf("%d",&num1);

for (i = 1;i <= num1; i++){
     (result += i);
}
printf("A soma de todos os numeros de 0 ate %d eh %d ",num1,result);
return 0;
}
*/


/* Exercicio - 3 */
/*
int main (){
int num1,i,result;

printf("Digite um numero positivo: ");
scanf("%d",&num1);

for (i = 1;i <= 10;i++){
    result = (num1 * i);
    printf("%d * %d = %d \n",num1,i,result);
}
return 0;
}
*/


/* Exercicio - 4 */
/*
int main (){
int num1,result=1,i;

printf("Digite um numero positivo: ");
scanf("%d",&num1);

for(i = 1;i <= num1; i++){
    result *= i;
}
printf("%d! = %d",num1,result);

return 0;
}
*/


/* Exercicio - 5 */
/*
int main (){
int i;
for (i = 10; i >= 1 ; i--) {
    printf("%d \n",i);
}

return 0;
}
*/


/* Exercicio - 6 */
int main (){
int x, y = 1, z = 1, i, aux;

printf("Digite um numero positivo: ");
scanf("%d",&x);

if (x <= 0) {
    printf("Numero digitado invalido!");
} else {
    for(i = 1; i <= x; i++ ){
        if (i == 1) {
            printf("%d ",y);
        }else if (i == 2){
            printf("%d ",i);
        }
        
        aux = y + z;
        y = z;
        z = aux;
        printf("%d ",aux);

    }
}

return 0;
}































