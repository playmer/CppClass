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

  int twoAgo = 0;
  int oneAgo = 1;

  for (int i = 2; i <= aIndex; ++i)
  {
    int current = twoAgo + oneAgo;

    twoAgo = oneAgo;
    oneAgo = current;
  }
}