void Multiplicacion( int Matriz1[][M], int Matriz2[][P], int Matriz3[][P])  { 
  for ( int k = 0; k < N; k++){ 
    for ( int j = 0; j < P; j++){ 
      for ( int i = 0; i < M; i++ )
        Matriz3[ k ][j ] += Matriz1[k][i]*Matriz2[i][j];} 
    }
  } 
}
