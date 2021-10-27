#include 
int main() {
  char operation;
  double firstNo, secondNo;
  printf("Enter the operator (+, -, *, /): ");
  scanf("%c", &operation);
  printf("Enter two operands: ");
  scanf("%lf %lf", &firstNo, &secondNo);

  switch (operation) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", firstNo, secondNo, firstNo + secondNo);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", firstNo, secondNo, firstNo - secondNo);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", firstNo, secondNo, firstNo * secondNo);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", firstNo, secondNo, firstNo / secondNo);
      break;
    
    default:
      printf("Error! Invalid operation");
  }

  return 0;
}
