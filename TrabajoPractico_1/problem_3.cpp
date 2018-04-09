void insertionSort (int arr[], int tam){
	 	int j, temp;
		
	  for (int i = 0; i < tam; i++){
		  j = i;
		
		  while (j > 0 && arr[j] < arr[j-1]){
			  temp = arr[j];
			  arr[j] = arr[j-1];
			  arr[j-1] = temp;
			  j--;
			  }
		}
}

//-----------------------------------------------------------------------------

void merge(int* A,int p,int q,int r) {
    int n1=q-p+1;
    int n2=r-q;
    int L[n1+1];
    int R[n2+1];
    for(int i=0; i<n1; i++) L[i]=A[p+i];
    for(int j=0; j<n2; j++) R[j]=A[q+1+j];
    int i=0;
    int j=0;
    int n=0;
    while(i!=n1 && j!=n2) {
        if(L[i]>R[j]) {
            A[p+n]=R[j];
            j++;
        } else {
            A[p+n]=L[i];
            i++;
        }
        n++;
    }
    while(j!=n2) {
        A[p+n]=R[j];
        j++;
        n++;
    }
    while(i!=n1) {
        A[p+n]=L[i];
        i++;
        n++;
    }
}
void mergeSort(int* A,int p,int r) {
    if(r>p) {
        int q;
        q=(p+r)/2;
        MergeSort(A,p,q);
        MergeSort(A,q+1,r);
        Merge(A,p,q,r);
    }
}


//-------------------------------------------------------------

void quickSort(int *array, int low, int high)
{
    int i = low;
    int j = high;
    int pivot = array[(i + j) / 2];
    int temp;

    while (i <= j)
    {
        while (array[i] < pivot)
            i++;
        while (array[j] > pivot)
            j--;
        if (i <= j)
        {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++;
            j--;
        }
    }
    if (j > low)
        quickSort(array, low, j);
    if (i < high)
        quickSort(array, i, high);
}
