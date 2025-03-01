#define LISTAS_H_INCLUDED
#define LISTAS_H_INCLUDED


enum estados {FALSE , TRUE};

struct NodoE;  //int(dato) , prox

typedef struct NodoE * No;

struct ListaEncE;

typedef struct ListaEncE * ListaEnc;  //Lista --- inicio-primer nodo, tam

ListaEnc crearLista();

No crearNo(int item,No prox);

//Insertar (pos- ini- fin)
int insertarInicio(ListaEnc lista, int item);

//Eliminar en la lista
int removerInicio(ListaEnc lista, int * item);

//utiles

int estaVacia(ListaEnc lista);

int obtenerElemento(ListaEnc lista, int* item, int pos);
int obtenerTamanio(ListaEnc lista, int* tam);

//Mostrar - imprimir
void imprimir(ListaEnc lista);




#endif // LISTAS_H_INCLUDED
