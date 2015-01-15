int forEach(int *array,int length,void (*func)(int,int,int *));
int forEach_char(char *array,int length,void(*func)(char,int,char *));
int forEach_string(char **array,int length,void(*func)(char *,int,char **));
