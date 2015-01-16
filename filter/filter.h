typedef char* String;
int less_filter(int *array, int length, int threshold, int **result_array);
int int_filter(int *array,int length,int **filterd,int (*predicate)(int ,int ,int *array));
int string_filter(String *array,int length,String **filterd,int (*predicate)(String ,int ,String *array));
