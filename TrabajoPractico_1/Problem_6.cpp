void copiarArray(array array1[],array array2[]){
	
	for(int i=0;i<sizeof(array1);i++){
		array2[i]=array1[i];  //array2 = array1;
	}

}

void copiarArray(int *array1,int *array2){
  int *ptr=array1;
  int *ptr=array2,
	
	for(int i=0;i<sizeof(array1);i++){
    *ptr=*ptr2
    ptr++;
    ptr2++;
		
	}

}

int main(){
	array array1[5]={"hola"};
	array array2[6]={"mundo"};
	
	copiarArray(array1,array2,5);	
	return 0;
}
