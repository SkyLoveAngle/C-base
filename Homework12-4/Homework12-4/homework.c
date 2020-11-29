#define  _CRT_SECURE_NO_WARNINGS
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void*  myMemmove(void* dest, const void* src, size_t num) {
	assert(dest != NULL && src != NULL);
	char* pDest = (char*)dest;
	char* pSrc = (char*)src;
	if (pSrc <= pDest && pDest <= pSrc + num) {
		for (size_t i = num - 1; i >= 0; i--) {
			*(pDest + i) = *(pSrc + i);
		}
		return dest;
	}
	else {
		return memcpy(dest, src, num);
	}
}

int main()
{
	const char dest[] = "oldstring";
	const char src[] = "new";
	printf("Before myMemmove dest = %s, src = %s\n", dest, src);
	myMemmove(dest, src, 9);
	printf("After myMemmove dest = %s, src = %s\n", dest, src);
	system("pause");
	return(0);
}
