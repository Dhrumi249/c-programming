void input(int size, int *a) {
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            *(a + i * size + j) = rand() % 99;// 
        }
        
    }
    
}

void squareArray(int size, int *a) {
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            *(a + i * size + j) = *(a + i * size + j) * *(a + i * size + j) * *(a + i * size + j);
        }
        
    }
    
}