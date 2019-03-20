int binsearch(int x, signed low, signed high) {
  int a[16];

  __CPROVER_assume(low == 0);
  __CPROVER_assume(high == 16);
  while(low<high) {
    signed middle=low+((high-low)>>1);

    if(a[middle]<x)
      high=middle;
    else if(a[middle]>x)
      low=middle+1;
    else // a[middle]=x !
      return middle;
  }

  return -1;
}
