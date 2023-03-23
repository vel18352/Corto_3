Ejercicio 1
#include <stdio.h>

int main()
{
    int a = 5, b = 7;
    printf("El valor de a es: ", a, "y el valor de b es:", b);
    printf("Emilio Velasquez 18352");
}


Ejercicio 2


#include <stdio.h>

int main()
{
    int a, b, suma, F, C;
    
    printf("Ingrese los dos numeros separados por espacio ");
    scanf("%d %d", &a, &b);
    suma = a + b;
    printf("La suma de %d y %d es %d\n", a, b, suma);
    
    printf("Ingrese temperatura en °F ");
    scanf("%d", &C);
    C = (F-32)*(5/9);
    printf("El resultado en °C de %d °F es %d\n", F, C);
    return 0;   
}


Ejercicio 3

#include <stdio.h>

int main()
{
    int i,j,F,n3,n2=1,n1=0;
    for (i=1; i<=10; i++)
    {
        printf("%d\n",i);
    }
    
    
    printf("Ingrese numero al que llegar en fibonacci ");
    scanf("%d",&F);
    
    for (j=2; j<F ;++j)
    {
      n3=n1+n2;
      printf("%d\n",n3);
      n1=n2;
      n2=n3;
    }
    
    return 0;
}
