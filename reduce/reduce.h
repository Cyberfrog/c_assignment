typedef char * String ;
String string_reduce(String *array,int length,String (*func)(String,String,int,String *),String); 
int reduce(int *array,int length,int (*func)(int ,int ,int ,int *),int );
char char_reduce(char *array,int length,char (*func)(char ,char ,int ,char *),char );
float float_reduce(float *array,int length,float (*func)(float ,float ,int ,float *),float );

