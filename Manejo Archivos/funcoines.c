#include <stdio.h>
#include <string.h>
#include "funciones.h"

void leerCadena(char *cadena, int num)
{
    fflush(stdin);
    fgets(cadena, num, stdin);
    int len= strlen(cadena)-1;
    cadena[len]='\0';
}

int menu()
{
    int opc;
    printf("Selecciones una opcion: \n");
    printf("1. Inicializar productos\n");
    printf("2.Imprimir productos\n");
    printf("3. Realizar venta\n");
    printf("4. Listar Ventas\n");
    printf("5. Buscar Ventas\n");
    printf("6. Salir\n");
    scanf("%d", &opc);
    return opc;
}

void inicializarProductos(struct Producto productos[5])
{
    strcpy(productos[0].nombre, "Mircronda");
    productos[0].precio=80;
    strcpy(productos[1].nombre, "Licuadora");
    productos[1].precio=30;
    strcpy(productos[2].nombre, "Cocina");
    productos[2].precio=200;
    strcpy(productos[3].nombre, "Refrigradora");
    productos[3].precio=600;
    strcpy(productos[4].nombre, "Television");
    productos[4].precio=700;

}

void imprimirProductos(struct Producto productos[5])
{
    printf("Productos Disponibles:\n");
    printf("#\t\tNombre\t\tPrecio\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t\t%s\t\t%.2f\n", i, productos[i].nombre,
                                        productos[i].precio);

    }    
}