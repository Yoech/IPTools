// IPTools.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <Windows.h>

int _tmain(int argc, _TCHAR* argv[])
{
	bool next = true;
	while (next)
	{
		printf("1、str => int\n");
		printf("2、int => str\n");
		printf("0、Exit\n");
		int result = 0;
		::scanf("%d",&result);
		if (result==0)
		{
			next = false;
		}
		else if (result==1)
		{
			printf("请输入IP地址（字符串）：\n");
			char src[32] = {0};
			::scanf("%s",&src);
			in_addr ipAddr;
			ipAddr.S_un.S_addr = inet_addr(src);
			printf("%s => %lu\n",src,ipAddr.S_un.S_addr);
		}
		else if (result==2)
		{
			printf("请输入IP地址（整　型）：\n");
			ULONG src = 0;
			::scanf("%lu",&src);
			in_addr	addr;
			addr.S_un.S_addr = src;
			printf("%lu => %s\n",src,inet_ntoa(addr));
		}
		printf("---------------------------------\n");
		getchar();
	}
	printf("Press any key to exit~\n");
	getchar();
	return 0;
}

