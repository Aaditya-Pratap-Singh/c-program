 //lenght of string
 #include<stdio.h>
 void main()
 {
 	char str[30];
 	int lenght=0;
 	printf("Enter the string :");
 	gets(str);
	while(str[lenght]!='\0') 
	{
		lenght++;
	}
	printf("Lenght of String =%d",lenght);
 }
