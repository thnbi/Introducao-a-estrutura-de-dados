union example
{
   int i;
   char c;
};

int main(int argc, char **argv)
{
   union example v;
   /* vale ressaltar que o espaco de uma union so pode armazenar um valor por vez */
   v.i = 10;
   v.c = 'j';

   return 0;
}
