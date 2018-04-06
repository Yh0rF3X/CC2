int es_palindromo(char *cadena)
{
   int i;
   char *invertida;

   /* Halla la cadena invertida */
   for(i=0; i < strlen(cadena); i++)
       invertida[ i ]=cadena[strlen(cadena)-i-1];

   /* Coloca caracter de fin de cadena */
   invertida[ i ] = '\0';

   /* Realiza la comparacion */
   if(!strcmp(cadena, invertida))
     return 1; /* es un palindromo */
         
   return 0;  /* no es un palindromo */
}
