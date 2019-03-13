int main() {
  int x;

  __CPROVER_assume(x>=1 && x<=100000);

  x*=-1;

  __CPROVER_assert(x<0, "x is negative");
}
