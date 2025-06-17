struct Producto
{
    char nombre[20];
    float precio;
};

struct Venta
{
    char nombre[30];
    int cedula;
    int numProductos;
    struct Producto productos[5];
    float totalVenta;  
};

struct Venta
{
    struct Cliente cliente;
    int numProductos;
    
    
};

void leerCadena(char *cadena, int num);
int menu();
void inicializarProductos(struct Producto productos[5]);
void imprimirProductos(struct Producto productos[5]);