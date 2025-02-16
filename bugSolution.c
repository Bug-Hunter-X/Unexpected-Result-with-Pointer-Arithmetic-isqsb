int main() {
  int x = 10;
  int *ptr = &x; 
  *ptr = 20; 
  int y = *ptr + 10; 
  printf("%d\n", y); // Added a newline character for better output formatting
  return 0;
}