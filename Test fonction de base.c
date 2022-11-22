#include <libc.h>
#include <stdio.h>

 int	main(void)
 {
	char b[] = "";
	char c[] = "1fg";
	memmove(b, c, 12);
	printf("%s", b);
 }

