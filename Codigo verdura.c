#include <stdio.h>

typedef struct {
	char nombre[20];
	int precio;
}dataVerdura;

void rellenodata(dataVerdura x);
void seleccion(dataVerdura x);
void mostrarProducto(dataVerdura x, int longitud);
void mostrarMenu(void);

int main()
{
	int seleccion,ciclo = 1, correcto = 1;
	int i = 0;
	int peso;
	int* puntPeso;
	int num;
	puntPeso = &peso;
	dataVerdura frutas[20];
	printf("Bienvenido en este programa se guardaran datos de  frutas y verduras para poder vender en coste por kilo\n");

	while (ciclo == 1)
	{
		//printf("nuevo ciclo\n");
		correcto = 1;
		mostrarMenu();

		while (correcto == 1)
		{
			scanf("%i", &seleccion);
			if (seleccion >= 1 && seleccion <= 4)
			{
				correcto = 0;
			}
			else
			{
				printf("Chale no se puede, elige un numero del 1 al 3 en entero\n");
			}
		}
		switch (seleccion)
		{
		case 1:
			rellenodata(frutas[i]);
			i++;
			break;

		case 2:
			printf("presionaste opcion 2 y todavia no esta programada jaja\n");
			break;
		
		case 3:
			
			for (int j = 0; j < i; j++)
			{
				num = j + 1;
				printf("producto %i es %s y cuesta %i\n\n", num, frutas[j].nombre, frutas[j].precio);
			}
			break;
		case 4:
			ciclo = 0;
			break;

		default:
			printf("Recuerde poner la t en switch\n");
			break;
		}
	}




	return 0;
}

void rellenodata(dataVerdura x)
{
	printf("Ingrese el nombre del producto:\n");
	scanf("%s", &x.nombre);
	printf("su producto es: %s\n", x.nombre);
	printf("Cual es el costo por kilo?\n");
	scanf("%i",&x.precio);
	printf("El coste por kilo guardado de %s es de %i\n\n", x.nombre, x.precio);
}

void seleccion(dataVerdura x)
{


}

void mostrarMenu(void)
{
	printf("?Que desea hacer?\n");
	printf("1 A�adir frutas o verduras o carne alv\n");
	printf("2 Cobrar frutas\n");
	printf("3 Ver productos guardados\n");
	printf("4 Salir\n");

}

