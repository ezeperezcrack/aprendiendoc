#include "BibliotecaLab.h"
int main()
{
    int i,opcion,auxId, auxMarca, espacioLibre, bajaId, posBaja, modId, posMod;
    char auxNom[100];
    items cosas[CANT];
    cambiarEstado(cosas,50,0);

    while(opcion!=6)
    {
        opcion=ValidarInt("\n\n\n1 - ALTA \n2 - BAJA \n3 - MODIFICACION\n4 - LISTAR\n5 - ORDENAR\n6 - SALIR\n\n\n", "LA OPCION INGRESADA NO ES VALIDA\n",1,6);
        switch(opcion)
        {
            case 1://alta
                espacioLibre=buscarEspacioLibre(cosas,CANT);
                if(espacioLibre==-1)
                {
                    printf("\n\nNO QUEDAN LUGARES LIBRES!!!\n");
                    break;
                }
                auxId=ValidarInt("Ingrese id del item", "El id del item debe ser numerico",1,1000);
                if(buscarItemxId(cosas,CANT,auxId)!=-1)
                {
                    printf("\n\nEL ID YA EXISTE!!!\n");
                    break;
                }
                validarString("ingrese nombre del item", "El nombre solo puede contener letras", auxNom);
                auxMarca=ValidarInt("Ingrese id de la marca", "El id de la marca debe ser numerico",1,1000);
                altaItem(cosas,espacioLibre,auxId,auxNom,auxMarca);
                break;
            case 2://baja
                bajaId=ValidarInt("Ingrese id del item a dar de baja", "El id del item debe ser numerico",1,1000);
                posBaja=buscarItemxId(cosas,CANT,bajaId);
                if(posBaja==-1)
                {
                    printf("\n\nEL ID NO EXISTE!!!\n");
                    break;
                }
                cosas[posBaja].estado=0;
                break;
            case 3://modificar
                modId=ValidarInt("Ingrese id del item a modificar", "El id del item debe ser numerico",1,1000);
                posMod=buscarItemxId(cosas,CANT,modId);
                if(posMod==-1)
                {
                    printf("\n\nEL ID NO EXISTE!!!\n");
                    break;
                }
                validarString("ingrese nombre del item", "El nombre solo puede contener letras", auxNom);
                auxMarca=ValidarInt("Ingrese id de la marca", "El id de la marca debe ser numerico",1,1000);
                altaItem(cosas,espacioLibre,auxId,auxNom,auxMarca);
                break;
            case 4://mostrar
                showArray(cosas,CANT);
                break;
            case 5://ordenar por nombre
                ordenarxNombre(cosas,CANT);
                break;
        }
    }
return 0;
}
