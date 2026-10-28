#include <stdio.h>

int main()
{
    int d, g, i;
    int m, dugaar, udur;
    int ih = 0, ihMashin = 0;

    printf("Mashinii suuliin oron (0-9): ");
    scanf("%d", &d);

    printf("Unuudriin garag (1-7): ");
    scanf("%d", &g);

    if (d % 2 == g % 2)
        printf("\nUnuudur yavj BOLNO.\n");
    else
        printf("\nUnuudur yavj BOLOHGUI.\n");

    printf("\nGarag  Tuluv\n");
    for (i = 1; i <= 7; i++)
    {
        if (d % 2 == i % 2)
            printf("%d Bolno\n", i);
        else
            printf("%d Horiotoi\n", i);
    }

    printf("\n--- Geriin 3 mashin ---\n");
    for (m = 1; m <= 3; m++)
    {
        printf("%d-r mashinii suuliin oron: ", m);
        scanf("%d", &dugaar);

        udur = 0;
        for (i = 1; i <= 7; i++)
        {
            if (dugaar % 2 == i % 2)
                udur = udur + 1;
        }
        printf("   Mashin %d: 7 honogt %d udur yavna\n", m, udur);

        if (udur > ih)
        {
            ih = udur;
            ihMashin = m;
        }
    }

    printf("\nHamgiin olon udur yavah: %d-r mashin (%d udur)\n", ihMashin, ih);

    return 0;
}