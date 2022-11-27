int fibonacciIterative(int N){
    int first = 0, second = 1, result, i;
    for (int i = 0; i < N+1; i++)
  {
    if (i <= 1){
        result = i;
    }
    else
    {
      result = first + second;
      first = second;
      second = result;
    }
}
return result;
}
int fibonacciRecursive(int N){
    
    if (N==0){
        return 0;
    }
    else if (N==1){
        return 1;
    }
    else{
        return fibonacciRecursive(N-1)+fibonacciRecursive(N-2);
    }
}