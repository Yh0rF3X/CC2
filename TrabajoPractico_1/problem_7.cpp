void concatenar(int cad1[],int cad2[]){
  int n=sizeof(cad1-1);
  for (int i=0;i<sizeof(cad2);i++){
    cad1[n]=cad2[i];
    n++;
  }
  
void concatenar(int *cad1,int *cad2){
  int *n=cad1[sizeof(cad1-1)];
  int *ptr2=cad2;
  for (int i;i<sizeof(cad2);i++){
    *n=*ptr2;
    n++;
    ptr2++;
  }
