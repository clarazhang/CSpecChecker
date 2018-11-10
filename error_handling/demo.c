int cc() {return 0;}
int fopen() { return 0; }

int main()
{
  int ret1, ret2;
  ret1 = fopen();
  ret2 = fclose();
  cc();
}
