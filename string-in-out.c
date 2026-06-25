 //string input and output
 #include<stdio.h>
 void main()
 {
 	char str[30];
 	printf("Enter the string :");
 	//scanf("%s",str)//don't need to give address
 	//if we give space in scanf it will terminate and does not give result
 	gets(str);
 	//printf("String are : %s",str);
 	puts(str);//can use both 
 }
