#include "../inc/header.h"

int main(int argc, char *argv[])
{
    int file = 0;
    char buf;
    ssize_t out;

    if(argc != 2){
        write(2,"usage: ./read_file [file_path]\n",31);
        return -1;
    }

    else{

        file = open(argv[1], file);
        if(file == -1){
            write(2,"error\n",6);
            return -1;
        }

        else{

            while((out = read(file,&buf,1)) > 0){
                write(1,&buf,1);

                if(out < 0){
                    write(2,"error\n",6);
                    return -1;
                }
            }

            close(file);
            return 0;
        }
    }
}

