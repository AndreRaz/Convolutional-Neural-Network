typedef struct{
    double* data; 
    int* shape; 
    int ndim;
    int size;
} Tensor; 


Tensor* tensorCreate(int ndim, int* shape);


