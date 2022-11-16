#include <libc.h>
#include <stdio.h>

 int	main(void)
 {
	char b[] = "abcdef";
	memset(b, 5, 1);
	printf("%s", b);
 }

