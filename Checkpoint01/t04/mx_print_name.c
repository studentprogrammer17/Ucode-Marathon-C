#include <unistd.h>

int main(int argc,char* argv[])
{
    int size = 0;
    
    for(int i = 0; argv[0][i] != '\0'; i++) {
        size++;
    }

    write(1,argv[0],size);

    write(1,"\n",1);

    char arr[20];
    int i = 0;
    int value = argc;

    if (value < 0) {
        value = -value;
        write(1,"-",1);
    }

    while(value != 0) {
        arr[i++] = value % 10 + '0';
        value /= 10;
    }

    for(int j = i - 1; j >= 0; j--) {
        write(1,&arr[j],1);
    }

    write(1,"\n",1);

    return 0;
}

