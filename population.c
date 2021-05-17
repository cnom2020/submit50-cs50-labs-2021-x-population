#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size}
     int start_size;
  do
  {
      start_size = get_int("start_size: ");
  }
  while (start_size < 9);

    // TODO: Prompt for end size
  int end_size;
  do
  {
      end_size = get_int("end_size: ");
  }
  while (end_size < start_size);

    // TODO: Calculate number of years until we reach threshold
  int years=0;

  do

  {
  start_size = start_size + (start_size/3) - (start_size/4); years++;
  }

//while (end_size > start_size);
while (start_size < end_size);

    // TODO: Print number of years (it will print years when end_size is higher than start_size)
    {
        printf("years: %i\n", years);
    }
}