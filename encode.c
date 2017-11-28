#include <stdio.h>

int main(void)
{
  int x, y, z, s[850], i, j, k, c;

  getchar();
  getchar();
  getchar();

  scanf("%d %d %d", &x, &y, &z);

  printf("%x\n%x\n%x\n", x, y, z);

  for(i = 0; i < y; i++){
    for(j = 0; j < x; j++){
      scanf("%d", &s[j]);
    }
    j = 0;
    while(j < x){
      if(j == x - 1){
	printf("1\n%x\n", s[j]);
	j++;
      }
      else{
	if(s[j] == s[j + 1]){
	  c = 0;
	  for(k = j; k < x; k++){
	    if(s[j] == s[k]){
	      c++;
	    }
	    else{
	      break;
	    }
	  }
	  printf("%d\n%x\n", c, s[j]);
	  j = k;
	}
	else{
	  c = 1;
	  for(k = j + 2; k < x; k++){
	    if(s[k] != s[k - 1]){
	      c++;
	      if(k == x - 1){
		c++;
	      }
	    }
	    else{
	      break;
	    }
	  }
	  printf("%d\n", -c);
	  for(k = j; k < j + c; k++){
	    printf("%x\n", s[k]);
	  }
	  j = k;
	}
      }
    }
  }

  return 0;
}
