#include <stdio.h>
#include <math.h>

int testaprimo (int numero);

int main ()
{

    int a,b,c,d,produto;

    scanf ("%d %d %d %d", &a, &b, &c, &d);

    testaprimo (a);
    testaprimo (b);
    testaprimo (c);
    testaprimo (d);

    if (testaprimo (a) == 1 && testaprimo (b) == 1 && testaprimo (c) == 1 && testaprimo (d) == 1)
    {
        produto = a*b*c*d;
        printf ("%d", produto);
    }
    else
    {
        printf ("SEM PRODUTO");
    }

    return (0);
}

int testaprimo (int numero)
{
  if ((numero == 0) || (numero == 1))
     return(0);
  else {
    int i, fim = sqrt(numero);
    for(i=2; i<=fim; i++)
        {
            if ((numero % i) == 0)
            return(0);
        }

    return(1);
  }
}
