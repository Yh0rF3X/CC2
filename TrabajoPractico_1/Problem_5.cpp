int LongitudCadena( char str[]{
  int cont =0;
  for (i=0;cad[i]!='\0';i++) 
    cont=cont+1;
  return cont
}

//LONGITUD DE UNA CADENA USANDO PUNTEROS
int LongitudCadena( char *str)
{
   char *s;
   for (s = str; *s; ++s);
      return(s - str);
}
