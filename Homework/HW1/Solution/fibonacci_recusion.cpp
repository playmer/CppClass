int fibonacci(int aIndex)
{
  if (0 == aIndex)
  {
    return 0;
  }

  if (1 == aIndex)
  {
    return 1;
  }

  return fibonacci(aIndex - 1) +  fibonacci(aIndex - 2);
}