#include <stdio.h>
int
display (int arr[], int size)
{
  for (int i = 0; i < size; i++)
    {
      printf ("%d ", arr[i]);

    }
  return 0;
}

int
indinsertion (int arr[], int size, int capacity, int element, int index)
{
  if (size >= capacity)
    {
      return -1;
    }
  for (int i = size - 1; i >= index; i--)
    {
      arr[i + 1] = arr[i];
    }
  arr[index] = element;
  return 1;
}

int
inddeletion (int arr[], int size, int capacity, int index)
{
  if (index > size)
    {
      return -1;
    }
  for (int i = index; i < size - 1; i++)
    {
      arr[i] = arr[i + 1];
    }

  return 1;
}

int
main ()
{
  int capacity;
  printf ("enter capacity ");
  scanf ("%d", &capacity);

  int arr[capacity];
  int size;
  printf ("enter size ");
  scanf ("%d", &size);
  for (int i = 0; i < size; i++)
    {
      printf ("enter element %d ", i);
      scanf ("%d", &arr[i]);
    }




  int index;
  printf ("enter index ");
  scanf ("%d", &index);
  int element;;
  printf ("enter 1 for insertion,\n 2 for deletion");
  int op;
  scanf ("%d", &op);
  switch (op)
    {
    case 1:
      printf ("enter element");
      scanf ("%d", &element);
      indinsertion (arr, size, capacity, element, index);

      size = size + 1;
      display (arr, size);

      break;
    case 2:
      inddeletion (arr, size, capacity, index);

      size = size - 1;
      display (arr, size);
      break;
    }
  return 0;
}
