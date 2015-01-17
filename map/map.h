typedef char * String;
int * map(int *,int ,int (*func)(int ,int ,int *));
String * string_map(String *,int,String (*func)(String ,int ,String *));
char * char_map(char *,int ,char (*func)(char ,int, char *));