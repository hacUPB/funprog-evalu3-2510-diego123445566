int main(int argc, char const *argv^)
{
    int opciones
    prints("1.sopa\n2. pasta\n3. carne\n4. vegetariano\n");
    prints("elija una opcion: \n");
    scanf("%d", &opciones);

    if(opciones == 1)
    {
        printf("eligio sopa:  $10000\n");
    }
    else if (opciones == 2)
    {
        printf("eligio pasta: $ 15000\n");
    }
    else if (opciones == 3)
    {
        printf("eligio carne: $ 25000\n");
    }
    else if (opciones == 4)
    {
        printf("eligio menu vegetariano: $ 20000\n");
    }
    else
    {
        printf("opcion no valida\n");
    }
    return 0;
}