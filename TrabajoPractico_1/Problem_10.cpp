int longitud(char *cadena)
{
   int valor = 0;
   int i;

   for(i=0; cadena[ i ]!='\0'; i++)
      valor++;

   return valor;
}

int convertirCadToInt(char *cadena)
{
   int potencias[5]={1,10,100,1000,10000};
   int i;
   int valor = 0;
   int lon = longitud(cadena);

   for(i=lon-1; i>=0; i--)
      valor += (cadena[ i ]-'0') * potencias[ lon-i-1 ];

   return valor;
}
