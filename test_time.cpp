#include <windows.h> 
#include <stdio.h> 
int main() 
{ 
SYSTEMTIME sys; 
GetLocalTime(&sys); 
printf( "%4d/%02d/%02d %02d:%02d:%02d\n",sys.wYear,sys.wMonth,sys.wDay,sys.wHour,sys.wMinute, sys.wSecond); 
return 0;
}


//加一行注释，看看git如何工作 


+33333333333333333333333333333333333333//又加了一行 


+444444444444444444444444444444444444 
+66666666666666666666666666666666666 


test for remote  
