#include<stdio.h>
#include<string.h>


char* execComand(char *command){
	char *resposta; 
	FILE *commandFile = popen(command, "r");

	char buf[256];





resposta = (char*) malloc(1024);
while (fgets(buf, sizeof(buf), commandFile) != 0) {
   strcat(resposta,buf);
}
pclose(commandFile);
return resposta;
}

int main (){
	 printf("%s",execComand("dir"));
	 return 0;
}
