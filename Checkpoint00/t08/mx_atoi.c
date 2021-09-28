int mx_atoi(const char *str);
// t08
int mx_atoi(const char *str)
{
    int flag = 0;

    int n = 0;
    int neg = 1;
    int i = 0;
    if(str[0] == '-'){
        neg = -1;
        i++;
    }
    for(; str[i] != '\0'; i++){
        if((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13)){
            flag = 1;
            break;
        }
        else if(c < 47 && c > 58){
            flag = 1;
            break;
        }
        else if(str[i] == '-'){
            flag = 1;
            break;
        }

        n *= 10;
        n += str[i];
        n -= '0';
    }
    if(flag == 0){
        return neg * n;
    }
    else{
        return 0;
    }
}

