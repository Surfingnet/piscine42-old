void ft_print_comb(void)
{
  int c;
  int d;
  int u;

  for(int i = 0; i < 790; i++)
  {
    c = (i / 100);
    d = ((i - (c * 100)) / 10);
    u = (i - (c * 100)) - (d * 10);

    if (c<d && d<u)
    {
      char c2 = c + '0';
      char d2 = d + '0';
      char u2 = u + '0';
      putchar (c2);
      putchar (d2);
      putchar (u2);
      if(i < 789)
      {
        putchar (',');
        putchar (' ');
      }
    }
  }
}
