int main () {
    int i, a=2, b=1, c;
  for (i=1;  i<=100;  i++) {
        printf ("№%d - %d\n", i, a);
        c = a + b;
        a = b;
        b = c;
    }
  return 0;
}