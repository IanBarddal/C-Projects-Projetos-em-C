#include <stdio.h>
#include <string.h>

int main ()
{
    int x;

    char comida [20];
    char bebida [20];

    fgets (comida, 20, stdin);

    size_t len = strlen(comida);
    if (len > 0 && comida[len - 1] == '\n')
        {
            comida[len - 1] = '\0';
        }

    fgets (bebida, 20, stdin);

    size_t lenB = strlen(bebida);
    if (lenB > 0 && bebida[lenB - 1] == '\n')
        {
            bebida[lenB - 1] = '\0';
        }

    if (strcasecmp (comida,"Lasanha") == 0 && strcasecmp (bebida, "Refrigerante") == 0)
    {
        printf ("11.00");
    }
    else if (strcasecmp (comida, "Lasanha") == 0 && strcasecmp (bebida, "Suco") == 0)
    {
        printf ("10.50");
    }
    else if (strcasecmp (&comida, "Estrogonofe") == 0 && strcasecmp (&bebida, "Suco") == 0)
    {
        printf ("13.50");
    }
    else if (strcasecmp (&comida, "Estrogonofe") == 0 && strcasecmp (&bebida, "Refrigerante") == 0)
    {
        printf ("14.00");
    }

    return (0);

}
