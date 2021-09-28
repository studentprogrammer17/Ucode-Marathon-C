#include <unistd.h>

void mx_printstr(const char *s)
{
    int size = 0;

    for(int i = 0; s[i] != '\0'; i++) {
        size++;
    }

    write(1,s,size);
}

int main(int argc,char* argv[])
{
    if(argc > 1) {

        for(int i = 1; i < argc; i++) {
            mx_printstr(argv[i]);
            write(1,"\n",1);
        }

        return 0;
    }
    
    else {
        return 1;
    }
}

