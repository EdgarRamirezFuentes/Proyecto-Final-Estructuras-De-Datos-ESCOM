#ifndef __APLICACION_H__
#define __APLICACION_H__

#include <ctype.h> // Incluida para utilizar isdigit(). 
#include <stdio.h>
#include <stdlib.h> // Incluida para utilizar system().
#include <unistd.h> // Incluida para utilizar sleep().
#include "arbolAVL.h"

struct Agenda *agenda;
struct NodoLista *lista;

void IniciarAplicacion();
void MostrarMenuPrincipal(char *);
void SeleccionarOpcion(char *);
int ValidarOpcionMenuPrincipal(char *);
void IrHaciaOpcion(char *, char *);
void AgregarContacto(char *);
void BuscarContacto();
void EliminarContacto();
void ModificarContacto(char *);
void MostrarContactos();
void EstablecerNombre(struct Contacto *);
void EstablecerNumeroCasa(struct Contacto *);
void EstablecerNumeroCelular(struct Contacto *);
void EstablecerCorreo(struct Contacto *);
int ValidarOpcionReiniciarSistema(char *);
int ReiniciarSistema(char *);
void ConvertirAMayus(char *);
void ImprimirContacto(struct Nodo *);
void RealizarModifcacion(char *, struct Nodo *);
int ValidarOpcionModificarContacto(char *);
void ModificarTelefonoCasa(struct Nodo *);
void ModificarTelefonoCelular(struct Nodo *);
void ModificarCorreo(struct Nodo *);
void BFS(struct Nodo *);
#endif 