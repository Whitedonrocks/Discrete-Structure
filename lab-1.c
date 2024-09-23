// Introductin to truth table of connectives and propositional logics

#include <stdio.h>

int main()
{
    char *a[5][8];
    int i, j;
    a[0][0] = "p";
    a[0][1] = "q";
    a[0][2] = "!p";
    a[0][3] = "!q";
    a[0][4] = "p^q";
    a[0][5] = "pvq";
    a[0][6] = "p->q";
    a[0][7] = "p<->q";

    a[1][0] = a[2][0] = a[1][1] = a[3][1] = "T";
    a[3][0] = a[4][0] = a[2][1] = a[4][1] = "F";

    // negation of p

    for (i = 1; i < 5; i++)
    {
        if (a[i][0] == "T")
        {
            a[i][2] = "F";
        }
        else
        {
            a[i][2] = "T";
        }
    }
    // negation of q
    for (i = 1; i < 5; i++)
    {
        if (a[i][1] == "T")
        {
            a[i][3] = "F";
        }
        else
        {
            a[i][3] = "T";
        }
    }

    // Conjunction (AND)

    for (i = 1; i < 5; i++)
    {
        if (a[i][0] == "T" && a[i][1] == "T")
        {
            a[i][4] = "T";
        }
        else
        {
            a[i][4] = "F";
        }
    }

    // Disjunction (OR)
    for (i = 1; i < 5; i++)
    {
        if (a[i][0] == "T" || a[i][1] == "T")
        {
            a[i][5] = "T";
        }
        else
        {
            a[i][5] = "F";
        }
    }

    // Implication (p -> q)
    for (i = 1; i < 5; i++)
    {
        if (a[i][0] == "T" && a[i][1] == "F")
        {
            a[i][6] = "F";
        }
        else
        {
            a[i][6] = "T";
        }
    }

    // Bi-implication ( p <-> q)

    for (i = 1; i < 5; i++)
    {
        if (a[i][0] == a[i][1])
        {
            a[i][7] = "T";
        }
        else
        {
            a[i][7] = "F";
        }
    }

    // print table
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 8; j++)
        {
            printf("\t%s", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}