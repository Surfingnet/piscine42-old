void ft_print_comb2(void)
{
  for(int i = 0; i < 100; i++)
  {
    char c1 = (i/10) + '0';
    char c2 = (i-((i/10)*10)) + '0';
    for(int y = 0; y < 100; y++)
    {
      char c3 = (y/10) + '0';
      char c4 = (y-((y/10)*10)) + '0';

      if(i != y)
      {
        putchar(c1);
        putchar(c2);
        putchar(' ');
        putchar(c3);
        putchar(c4);
        if(i != 99 || y != 98)
        {
          putchar(',');
          putchar(' ');
        }
      }
    }
  }
}
