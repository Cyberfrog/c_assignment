typedef char* String;
int less_filter(int *array, int length, int threshold, int **result_array);
int int_filter(int *array,int length,int **filterd,int (*predicate)(int ,int ,int *array));
int string_filter(String *array,int length,String **filterd,int (*predicate)(String ,int ,String *array));
int char_filter(char *array,int length,char **filterd,int (*predicate)(char ,int ,char *array));
int float_filter(float *array,int length,float **filterd,int (*predicate)(float ,int ,float *array));


