extern int nondet();

int f00()
{
  int x = 1;  
  int y = 1;  

  while(x>=0)
  {
    if(y<10) x = nondet();
    else x--;
    if(y<100) y++;
  }
  return x;
}

void f01(int z)
{
  for(int w=0; w<10; w-=z);  
}

void main()
{
  int s = f00();
  if(s>=-100) f01(s);
}
