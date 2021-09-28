#include <unistd.h>

void mx_printchar(char c)
{
 write(1,&c,1);
}

void mx_cube(int n)
{
    int height;
    int lenght;
    int edge;
    int space;

 if (n < 2)
    {
        return;
    }
    else
    {
        //START OF CUBE
        edge = n / 2;
        lenght = n * 2;

        //first part of cube
        //first indent
        for (int i = 0; i < edge + 1; i++)
        {
            mx_printchar(' ');
        }

        //back top edge
        mx_printchar('+');
        for (int i = 0; i < lenght; i++)
        {
            mx_printchar('-');
        }          
        mx_printchar('+');

        mx_printchar('\n');



        //diagonal edge
        space = edge;
        for (int i = 0; i < edge; i++, space--)
        {
            for (int j = 0; j < space; j++)
            {
                mx_printchar(' ');
            }
            mx_printchar('/');
            
            for (int j = 0; j < lenght; j++)
            {
                mx_printchar(' ');
            } 
            mx_printchar('/');
            

            
            //side edge
            if(i == 0)
            {
                mx_printchar('|');
            }
            else
            {
                for (int j = 0; j < edge - space; j++)
                {
                    mx_printchar(' ');
                }
                mx_printchar('|');
            }
            
            mx_printchar('\n');
        }

        //front top edge
        mx_printchar('+');
        for (int i = 0; i < lenght; i++)
        {
            mx_printchar('-');
        }
        mx_printchar('+');

        //side edge
        for (int i = 0; i < edge; i++)
        { 
            mx_printchar(' ');
        }
        mx_printchar('|');
        mx_printchar('\n');

        //second part of cube
        height = n;
        space = edge;
        for (int i = 0; i < height; i++)
        {
            if ((height / 2 < i + 1 && height % 2 == 0) || (height / 2 < i && height % 2 == 1))
            {
                space--;
            }

            //vertical side edge
            mx_printchar('|');
            for (int i = 0; i < lenght; i++)
            {
                mx_printchar(' ');
            } 
            mx_printchar('|');

            //buttom diagonal side
            for (int j = 0; j < space; j++)
            {
                mx_printchar(' ');
            }
            if ((height/ 2 == i + 1 && height % 2 == 0) || (height / 2 == i && height % 2 == 1))
            {
                mx_printchar('+');
            }
            else if (space < height / 2)
            {
                mx_printchar('/');
            }
            else
            { 
                mx_printchar('|');
            }
            mx_printchar('\n');
        }

        //front buttom edge
        mx_printchar('+');
        for (int i = 0; i < lenght; i++)
        { 
            mx_printchar('-');
        }
        mx_printchar('+');
        //END OF CUBE

        mx_printchar('\n');
    }
}

int main(void)
{
    mx_cube(2);
}