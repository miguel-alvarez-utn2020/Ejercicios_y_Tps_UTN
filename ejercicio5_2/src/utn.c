#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

static int esInt(char *cadena);
static int getInt(int *pResultado);
static int myGets(char *cadena, int longitud);
static int getFloat(float *pResultado);
static int esFloat(char *cadena);
static int getDni(char *pResultado);
static int esDni(char *cadena);
static int getText(char* pResultado);
static int cargarAuto(int arr[], int size);

/**
 * \brief Solicita un numero al usuario, leuego de verificarlo devuelve el resultado
 * \param pResultado Puntero al espacio de memoria donde se dejara el resultado de la funcion
 * \param mensaje Es el mensaje a ser mostrado
 * \param mensajeError Es el mensaje de Error a ser mostrado
 * \param minimo Es el numero maximo a ser aceptado
 * \param maximo Es el minimo minimo a ser aceptado
 * \return Retorna 0 si se obtuvo el numero y -1 si no
 */
int utn_inputTypeInt(int *pResultado, char *mensaje, char *mensajeError, int minimo, int maximo, int reintentos)
{
    int bufferInt;
    int retorno = -1;
    while (reintentos > 0)
    {
        reintentos--;
        printf("%s", mensaje);
        if (getInt(&bufferInt) == 0)
        {
            if (bufferInt >= minimo && bufferInt <= maximo)
            {
                *pResultado = bufferInt;
                retorno = 0;
                break;
            }
        }
        printf("%s", mensajeError);
    }
    return retorno;
}

/**
 * @brief 
 * 
 * @param pResultado 
 * @param mensaje 
 * @param msjError 
 * @param vMinimo 
 * @param vMaximo 
 * @param reintentos 
 * @return float 
 */
int utn_inputTypeFloat(float* pResultado, char* mensaje, char* msjError, float vMinimo, float vMaximo, int reintentos){

    float bufferFloat;
    int retorno = -1;

    if(pResultado != NULL && mensaje != NULL && msjError != NULL && vMinimo <= vMaximo && reintentos >= 0){

        while (reintentos > 0){
        reintentos--;
        printf("%s", mensaje);
        if (getFloat(&bufferFloat) == 0)
        {
            if (bufferFloat >= vMinimo && bufferFloat <= vMaximo)
            {
                *pResultado = bufferFloat;
                retorno = 0;
                break;
            }
        }
        printf("%s", msjError);
    }

    }
    return retorno;
}

/**
 * @brief 
 * 
 * @param pResultado 
 * @param mensaje 
 * @param msjError 
 * @param vMinimo 
 * @param vMaximo 
 * @param reintentos 
 * @return int 
 */
int utn_inputTypeDni(char* pResultado, char* mensaje, char* msjError, int vMinimo, int vMaximo, int reintentos){

    char bufferDni[50];
    int retorno = -1;

    if(pResultado != NULL && mensaje != NULL && msjError != NULL && vMinimo <= vMaximo && reintentos >= 0){

        while (reintentos > 0){
        reintentos--;
        printf("%s", mensaje);
        if (getDni(bufferDni) == 0)
        {
            if (strlen(bufferDni) >= vMinimo && strlen(bufferDni) <= vMaximo)
            {
                strcpy(pResultado, bufferDni);
                retorno = 0;
                break;
            }
        }
        printf("%s", msjError);
    }

    }
    return retorno;
}
/**
 * @brief 
 * 
 * @param pResultado 
 * @param mensaje 
 * @param msjError 
 * @param charsMimino 
 * @param charsMaximo 
 * @param reintentos 
 * @return int 
 */
int utn_inputTypeText(char* pResultado, char* mensaje, char* msjError, int charsMimino, int charsMaximo, int reintentos){
    int retorno = -1;
    char bufferText[charsMaximo];

    if(pResultado != NULL && mensaje != NULL && msjError != NULL && charsMimino <= charsMaximo && reintentos >= 0){

        while (reintentos >= 0)
        {
            reintentos --;
            printf("%s", mensaje);
            if(getText(bufferText)==0){
                if(strlen(bufferText) >= charsMimino && strlen(bufferText)<= charsMaximo ){
                    strcpy(pResultado, bufferText);
                    retorno = 0;
                    break;
                }
            }
            strcpy(pResultado, msjError);

        }
        
    }
    return retorno;
}

/**
 * \brief Lee de stdin hasta que encuentra un '\n' o hasta que haya copiado en cadena
 * un máximo de 'longitud - 1' caracteres.
 * \param pResultado Puntero al espacio de memoria donde se copiara la cadena obtenida
 * \param longitud Define el tamaño de cadena
 * \return Retorna 0 (EXITO) si se obtiene una cadena y -1 (ERROR) si no
 *
 */
static int myGets(char *cadena, int longitud)
{
    if (cadena != NULL && longitud > 0 && fgets(cadena, longitud, stdin) == cadena)
    {
        fflush(stdin); // LINUX-> __fpurge o WIN-> fflush o MAC-> fpurge
        if (cadena[strlen(cadena) - 1] == '\n')
        {
            cadena[strlen(cadena) - 1] = '\0';
        }
        return 0;
    }
    return -1;
}
/**
 * \brief Verifica si la cadena ingresada es numerica
 * \param pResultado Puntero al espacio de memoria donde se dejara el resultado de la funcion
 * \return Retorna 0 (EXITO) si se obtiene un numero entero y -1 (ERROR) si no
 *
 */
static int getInt(int *pResultado)
{
    int retorno = -1;
    char buffer[64];
    if (pResultado != NULL)
    {
        if (myGets(buffer, sizeof(buffer)) == 0 && esInt(buffer))
        {
            *pResultado = atoi(buffer);
            retorno = 0;
        }
    }
    return retorno;
}


/**
 * @brief Get the Int object
 * 
 * @param pResultado 
 * @return int 
 */
static int getFloat(float *pResultado)
{
    int retorno = -1;
    char buffer[64];
    if (pResultado != NULL)
    {
        if (myGets(buffer, sizeof(buffer)) == 0 && esFloat(buffer))
        {
            *pResultado = atof(buffer);
            retorno = 0;
        }
    }
    return retorno;
}
/**
 * @brief Get the Float object
 * 
 * @param pResultado 
 * @return int 
 */
static int getDni(char *pResultado)
{
    int retorno = -1;
    char buffer[64];
    if (pResultado != NULL)
    {
        if (myGets(buffer, sizeof(buffer)) == 0 && esDni(buffer))
        {
            strcpy(pResultado, buffer);
            retorno = 0;
        }
    }
    return retorno;
}

int getText(char* pResultado){

    int retorno = -1;
    char buffer[1000];
    if(pResultado != NULL){
        if(myGets(buffer, sizeof(buffer)) == 0){
            strcpy(pResultado, buffer);
            retorno = 0;
        }   
    }
    return retorno;
}
/**
 * @brief 
 * 
 * @param arr 
 * @param size 
 */
void utn_listarInt(int arr[], int size){
    int i;
    if(arr != NULL && size > 0){
        for(i = 0; i < size; i++){
            printf("%d\n", arr[i]);
        }
    }
}
/**
 * @brief 
 * 
 * @param arr 
 * @param size 
 * @param suma 
 * @return int 
 */
int utn_sumarIntArr(int arr[], int size, int* suma){

    int retorno = -1;
    int aux = 0;
    int i;
    if(arr != NULL && size > 0 && suma != NULL){
        for(i = 0; i < size; i++){
            aux += arr[i]; 
        }
        retorno = 0;
    }
    *suma = aux;
    return retorno;
}
/**
 * @brief 
 * 
 * @param arr 
 * @param size 
 * @param cantPares 
 * @return int 
 */
int utn_cantidadPares(int arr[],int size, int* cantPares){
    int retorno = -1;
    int i;
    int aux = 0;
    if(arr != NULL && size > 0 && cantPares != NULL){

        for(i = 0; i < size; i++){
            if(arr[i] % 2==0){
                aux ++;
                retorno = 0;
            }
        }
    }
    *cantPares = aux;
    return retorno;
}
/**
 * @brief 
 * 
 * @param arr 
 * @param size 
 * @param cantPositivos 
 * @return int 
 */
int utn_cantPositivos(int arr[], int size, int* cantPositivos){
    int retorno = -1;
    int i;
    int aux = 0;
    if(arr != NULL && size > 0 && cantPositivos != NULL){

        for(i = 0; i < size; i++){

            if(arr[i] > 0){
                aux ++;
                retorno = 0;
            }
        }

    }
    *cantPositivos = aux;
    return retorno;
}
/**
 * @brief 
 * 
 * @param arr 
 * @param size 
 * @param cantNegativos 
 * @return int 
 */
int utn_cantNegativos(int arr[], int size, int* cantNegativos){
    int retorno = -1;
    int i;
    int aux = 0;
    if(arr != NULL && size > 0 && cantNegativos != NULL){

        for(i = 0; i < size; i++){

            if(arr[i] < 0){
                aux ++;
                retorno = 0;
            }
        }

    }
    *cantNegativos = aux;
    return retorno;
}
/**
 * @brief 
 * 
 * @param arr 
 * @param size 
 */
void utn_listarParesArr(int arr[], int size){
    int i;
    if(arr != NULL && size > 0){

        for(i = 0; i < size; i++){
            if(arr[i] % 2 == 0){
                printf("%d\n", arr[i]);
            }
        }

    }
}
/**
 * @brief 
 * 
 * @param arr 
 * @param size 
 */
void utn_listarImparesArr(int arr[], int size){
    int i;
    if(arr != NULL && size > 0){
        for(i = 0; i < size; i++){
            if(arr[i] % 2 != 0){
                printf("pos: %d -> %d\n", i, arr[i]);
            }
        }
    }
}
/**
 * @brief 
 * 
 * @param arr 
 * @param size 
 * @param mayorImp 
 * @return int 
 */
int utn_mayorInparArr(int arr[], int size, int* mayorImp){
    int retorno = -1;
    int i;
    int aux;
    int flag = 1;
    if(arr != NULL && size > 0){

        for(i = 0; i < size; i++){
            if(arr[i] % 2 != 0 ){
                if(flag){
                    aux = arr[i];
                    flag = 0;
                    retorno = 0;
                }
                else if (arr[i] > aux){
                    aux = arr[i];
                }
            }
        }
    }
    *mayorImp = aux;
    return retorno;
}
/**
 * @brief 
 * 
 * @param arr 
 * @param size 
 * @param mensaje 
 * @param msjError 
 * @param minimo 
 * @param maximo 
 * @param reintentos 
 * @param automatico 
 * @return int 
 */
int utn_cargarArrInt(int arr[], 
int size, 
char* mensaje, 
char* msjError, 
int minimo, 
int maximo, 
int reintentos, 
bool automatico){
    int retorno = -1;
    int i;
    int aux;
    if(arr != NULL && size > 0 && mensaje != NULL && msjError != NULL && minimo <= maximo && reintentos >= 0){

        if(automatico){
            cargarAuto(arr, size);
        }else{
            
            for(i = 0; i < size; i++){
                utn_inputTypeInt(&aux, mensaje, msjError, minimo, maximo, reintentos);
                arr[i] = aux;
            }
            retorno = 0;
        }
    }
    return retorno;
}
/**
 * @brief 
 * 
 * @param arr 
 * @param size 
 * @return int 
 */
static int cargarAuto(int arr[], int size){
    int i;
    int retorno = -1;
    if(arr != NULL && size > 0){
        for(i = 0; i < size; i++){
            arr[i] = i;
        }
    }
}
///////////////////////////////////////////////////////////////////////////
/////////////////////--------VALIDADORES-----------////////////////////////
///////////////////////////////////////////////////////////////////////////
/**
 * @brief 
 * 
 * @param cadena 
 * @return int 
 */

static int esFloat(char *cadena)
{
    int i = 0;
    int retorno = 0;
     if (cadena != NULL && strlen(cadena) > 0)
    {
        while (cadena[i] != '\0')
        {
            if (cadena[i] >=  '0' && cadena[i] <= '9')
            {
                retorno = 1;
                break;
            }
            i++;
        }
    }

    return retorno;
}

/**
 * \brief Verifica si la cadena ingresada es numerica
 * \param cadena Cadena de caracteres a ser analizada
 * \return Retorna 1 (vardadero) si la cadena es numerica y 0 (falso) si no lo es
 */
static int esInt(char *cadena)
{
    int i = 0;
    int retorno = 1;
    if (cadena != NULL && strlen(cadena) > 0)
    {
        while (cadena[i] != '\0')
        {
            if (cadena[i] < '0' || cadena[i] > '9')
            {
                retorno = 0;
                break;
            }
            i++;
        }
    }
    return retorno;
}
/**
 * @brief 
 * 
 * @param cadena 
 * @return int 
 */
static int esDni(char *cadena)
{
    int i = 0;
    int retorno = 0;
    if (cadena != NULL && strlen(cadena) > 0)
    {
        while (cadena[i] != '\0')
        {
            if(strlen(cadena) == 10){
                if(cadena[2] != '.' && cadena[6] != '.'){
                    retorno = 0;
                    break;
                }
                retorno = 1;
            }else{
                retorno = 0;
                break;
            }
            i++;
        }
    }
    return retorno;
}