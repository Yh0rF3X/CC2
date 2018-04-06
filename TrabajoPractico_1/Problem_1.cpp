    //intercambio de valores por paso por valor
    int intercambiarValores(int x,int y){
      int auxiliar;
      auxiliar = v1;
      v1 = v2;
      v2 = auxiliar;
    }
    
    //Intercambio de vañlores de paso por referencia
    int intercambiarValores(int *x,int *y){
      int aux;
      aux =*x;
      *x=*b;
      *b=aux;
    }
void main(){
  int a,b;
  a=2:
  b=3;
  intecambiarValores(a, b);
  intecambiarValores(&a, &b);
}
