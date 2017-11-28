#include <stdio.h>

int main(void)
{
  unsigned int x, y, z, s, i, j, k;
  int d;

  scanf("%x %x %x", &x, &y, &z);

  printf("P2\n%d\n%d\n%d\n", x, y, z);

  for(i = 0; i < y; i++){
    j = 0;
    while(j < x){
      scanf("%d", &d);
      if(d < 0){
	for(k = 0; k < -d; k++){
	  scanf("%x", &s);
	  printf("%d\n", s);
	}
	j -= d;
      }
      else{
	scanf("%x", &s);
	for(k = 0; k < d; k++){
	  printf("%d\n", s);
	}
	j += d;
      }
    }
  }

  return 0;
}
