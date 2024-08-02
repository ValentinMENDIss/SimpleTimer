#include <stdio.h>
#include <time.h>

void delay(int number_of_milli_seconds)
{
int seconds = 1000 * number_of_milli_seconds;

clock_t start_time = clock();


while(clock() < start_time + seconds) {
  ;
}

}

int main() {

  int i;

  int timer;


  printf("\nTimer Application\n");
  printf("\nHow long should timer be (in seconds)?: ");
  
  scanf("%d", &timer);

  for(i = 0; i < timer; i++) {
    delay(1000);
    printf("%d seconds have passed\n", i + 1);
  }

  return 0;
}
