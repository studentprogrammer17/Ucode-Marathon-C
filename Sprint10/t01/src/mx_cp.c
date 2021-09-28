#include "../inc/header.h"

int main(int argc, char *argv[])
{
    int file_src = 0;
    int file_dst = 0;
    char buf;
    if(argc != 3){
        write(2,"usage: ./mx_cp [source_file] [destination_file]\n", 49);
        return -1;
    }

    file_src = open(argv[1], O_RDONLY);

    if(file_src < 0){
        write(2,"mx_cp: ", 8);
        write(2,argv[1],mx_strlen(argv[1]));
        write(2,": No such file or directory\n", 29);
        return -1;
    }

    file_dst =  open(argv[2], O_CREAT | O_EXCL | O_WRONLY, S_IRUSR | S_IWUSR);

    while(read(file_src,&buf,1)){
        write(file_dst,&buf,1);
    }

    close(file_dst);
    close(file_src);

    return 0;
        
    
}

