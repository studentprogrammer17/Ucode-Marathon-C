void mx_printchar(char c);

void mx_str_separate(const char *str, char delim);

void mx_str_separate(const char *str, char delim)
{
  const char *cur_str = str;
  int size_str = 0;

  for(; *cur_str; cur_str++ ) { size_str = cur_str - str; }

  for(int i = 0;i < size_str;i++)
  {
      if(str[i] == delim)
      {
          if(str[i + 1] == str[i])
          {
              continue;
          }
          mx_printchar('\n');
          for(int j = i + 1;j < size_str + 1;j++)
          {
              mx_printchar(str[j]);
          }
          mx_printchar('\n');
          break;
      }
      mx_printchar(str[i]);
  }
}
