#include "../inc/header.h"

int main(int argc, char *argv[]) 
{
    bool screensaver = false;
    if(argc == 2) { // check -s
        if(mx_strlen(argv[1]) == 2 && (argv[1])[0] == '-' && (argv[1])[1] == 's'){
            screensaver = true;
        }

        else {
            write(2, "usage: ./matrix_rain [-s]\n", 27);
            return -1;
        }
    }
    if(argc > 2){
        write(2, "usage: ./matrix_rain [-s]\n", 27);
        return -1;
    }

    //INTRO //

    initscr();
    curs_set(0);
    start_color();
    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    init_pair(2, COLOR_WHITE, COLOR_BLACK);

    int top = 5;
    int left = 4;

    char *f_output = "Wake up, Neo..";
    char *s_output = "The Matrix has you..";
    char *th_output = "Follow the white rabbit";
    char *fth_output = "Knock, knock, Neo";
    refresh();

    for(int i = 0; i < mx_strlen(f_output); i++){        
        mvaddch(top, i + left, f_output[i] | COLOR_PAIR(1));
        refresh();
        usleep(200000);
    }
    usleep(600000);
    clear();
    refresh();

    for(int i = 0; i < mx_strlen(s_output); i++){
        mvaddch(top, i + left, s_output[i] | COLOR_PAIR(1));
        refresh();
        usleep(200000);
    }
    usleep(600000);
    clear();
    refresh();

    for(int i = 0; i < mx_strlen(th_output); i++){      
        mvaddch(top, i + left, th_output[i] | COLOR_PAIR(1));
        refresh();
        usleep(200000);
    }
    usleep(600000);
    clear();
    refresh();
    
    for(int i = 0; i < mx_strlen(fth_output); i++){      
        mvaddch(top, i + left, fth_output[i] | COLOR_PAIR(1));
        refresh();
        usleep(200000);
    }
    usleep(600000);
    clear();
    

        // Matrix rain //
    
    int max_y = 0, max_x = 0;    
    getmaxyx(stdscr, max_y, max_x);
    int start[max_x];
    int length[max_x];
    int arr[max_x];

    for (int i = 0; i < max_x; i++) {
        start[i] = -1 * (rand() % 80);
        arr[i] = start[i];
        length[i] = rand() % 50  - 1;
    }
    
    int speed = 100;
    int color = 1;
    while (1) {
        for (int i = 0; i < max_x; i++) {       
            wchar_t random_char = (rand() % 93 + 33);
            if (i % 2 == 0) {
                random_char = ' ';
            }
            mvaddch(arr[i] + 1, i, random_char | COLOR_PAIR(2));      
            mvaddch(arr[i], i, random_char | COLOR_PAIR(color));
            mvaddch(arr[i] - length[i], i, ' ' | COLOR_PAIR(color));
            if (arr[i] - length[i] > max_y) {
                arr[i] = start[i];
            }
            arr[i]++;
        }

        usleep(1000 * speed);
        nodelay(stdscr,TRUE);
        noecho();
        char ch = getch();
        if (ch == 'q') 
        {
            clear();
            break;
        }
        switch (ch) 
        {
            case '+':
                if (speed > 1) {
                    if (speed <= 11)
                        speed--;
                    else
                        speed -= 10;
                }
                break;
            case '-':
                if (speed < 300) {
                    if (speed <= 10)
                            speed++;
                        else
                            speed += 10;
                }
                break;
            case '0': color = 1; break;
            case '1': color = 2; break;
            case '2': color = 3; break;
        }
        refresh();
    }
    
    endwin();  
	return 0;
}

