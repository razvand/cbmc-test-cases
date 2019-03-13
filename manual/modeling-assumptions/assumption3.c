int main() {
  int a[10], x, y;

  x=nondet_int();
  y=nondet_int();
  __CPROVER_assume(x>=0 && x<10 && y>=0 && y<10);

  __CPROVER_assume(a[x]>=0);

  assert(a[y]>=0);
}
