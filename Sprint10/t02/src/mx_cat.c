#include "../inc/header.h"

int main(int argc, char *argv[])
{
    char buf;
    int file;

    if(argc == 1){

        while(read(0, &buf, 1)){
            write(1, &buf, 1);
        }
    }
        
    for (int i = 1; i < argc; i++)
    {
        file = open(argv[i], O_RDONLY);

        if(file < 0){
            write(2, "mx_cat: ", 9);
            write(2, argv[i], mx_strlen(argv[i]));
            write(2,": No such file or directory\n", 29);
        }
        else{
            while(read(file,&buf,1)){
                write(1,&buf,1);
            }
            
        }
        close(file);
    }
    return 0;
}

