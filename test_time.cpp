#include <windows.h> 
#include <stdio.h> 
int main() 
{ 
SYSTEMTIME sys; 
GetLocalTime(&sys); 
printf( "%4d/%02d/%02d %02d:%02d:%02d\n",sys.wYear,sys.wMonth,sys.wDay,sys.wHour,sys.wMinute, sys.wSecond); 
return 0;
}


//��һ��ע�ͣ�����git��ι��� 
