//Fermin Narvaez Reyes A01411229

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int
main (void)
{				//Declaracion de variables
  int i;			// De procedimiento
  int a;			// De procedimiento
  int f;
  int tickets;			// Del ticket
  int VIPmultiply;
  //Inicio del programa donde pido informacion.
  printf ("\t\tMr. G\t\t\n");
  printf("Este es un one night only event. A continuaciC3n se mostrarC! toda la informaciC3n que necesitas saber: \n");
  printf("Mr. G = Artistas como Jimmy Page, Blondie, Robert Plant, Knopfler, Ringo Starr, Roger Waters, etcetera\n");
  printf("Hay 400 asientos: 100 en el centro, 50 en las esquinas\n");
  printf("Escoge el asiento que gustes. Se dividen en: \n VIP ($100) - 1, \n Gold ($70) - 2, \n Silver ($55)- 3, \n Green ($45) - 4, \n Yellow ($40) - 5, \n Red ($30) - 6, \n Sky Blue ($50) -7, \n Navy Blue ($35) - 8 and \n Deep Blue ($20) - 9\n");
  printf("Si desea, por ejemplo 2 VIP y 3 Gold, comprarlos de manera separada. Es decir hacer la primera compra para VIP y una segunda para Gold\n");
  printf("Eliga uno\n");
  scanf ("%i", &f);		// El dC-a que el usuario puso
  if (f == 1){ // Cada if es lo que pedi arriba de informacion, de que 1 VIP, 2 Gold y asi
      printf ("Cuantos boletos?: ");
      scanf ("%i", &tickets);
      VIPmultiply = tickets * 100;
      printf ("El precio a pagar es: %d\n", VIPmultiply);
    }
    if (f == 2){
      printf ("Cuantos boletos?: ");
      scanf ("%i", &tickets);
      VIPmultiply = tickets * 70;
      printf ("El precio a pagar es: %d\n", VIPmultiply);
    }
    if (f == 3){
      printf ("Cuantos boletos?: ");
      scanf ("%i", &tickets);
      VIPmultiply = tickets * 55;
      printf ("El precio a pagar es: %d\n", VIPmultiply);
    }
    if (f == 4){
      printf ("Cuantos boletos?: ");
      scanf ("%i", &tickets);
      VIPmultiply = tickets * 45;
      printf ("El precio a pagar es: %d\n", VIPmultiply);
    }
    if (f == 5){
      printf ("Cuantos boletos?: ");
      scanf ("%i", &tickets);
      VIPmultiply = tickets * 40;
      printf ("El precio a pagar es: %d\n", VIPmultiply);
    }
    if (f == 6){
      printf ("Cuantos boletos?: ");
      scanf ("%i", &tickets);
      VIPmultiply = tickets * 30;
      printf ("El precio a pagar es: %d\n", VIPmultiply);
    }
    if (f == 7){
      printf ("Cuantos boletos?: ");
      scanf ("%i", &tickets);
      VIPmultiply = tickets * 50;
      printf ("El precio a pagar es: %d\n", VIPmultiply);
    }
    if (f == 8){
      printf ("Cuantos boletos?: ");
      scanf ("%i", &tickets);
      VIPmultiply = tickets * 35;
      printf ("El precio a pagar es: %d\n", VIPmultiply);
    }
    if (f == 9){
      printf ("Cuantos boletos?: ");
      scanf ("%i", &tickets);
      VIPmultiply = tickets * 20;
      printf ("El precio a pagar es: %d\n", VIPmultiply);
    }
}