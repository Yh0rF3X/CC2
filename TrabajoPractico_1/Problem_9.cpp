int es_palindromo(char *cadena)
{
 
   char *invertida;
   int long=strlen(cadena);

   //Halla la cadena invertida 
   for(int i=0; i < long; i++)
       invertida[ i ]=cadena[long-i-1];

   // Realiza la comparacion 
   for (int j=0; j< long;j++ ){
      if(cadena[j]==invertida[j]){
        return 1;
      return 0; 
      }
   }   
}
