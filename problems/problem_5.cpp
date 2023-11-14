float problemSolution5(float x, float y, char operation) {
   float result;
   // write your code here
    switch(operation) {
        case '+':
            result = x + y;
            break;
        case '-':
            result = x - y;
            break;
        case '*':
            result = x * y;
            break;
        case '/':
            if (num2 != 0) {
                result = x / y;
            } else {
                return 1;
            }
            break;
        default:
            return 1;
    }

   return result;
}
