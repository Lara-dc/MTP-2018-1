//Lara Dias Cabral 11721EAU009

#include <stdio.h>

int main()
{
	int j , i,num[64], *pnum;
	char msg[256], *pmsg;
	
	for(i = 0; i < 256; i++) msg[i] = '\0';
	printf("\t1Codificar\n\t2Decodificar\n\t Escolha uma: ");
	scanf("%d",&j);
	getchar();
	
	switch(j)
	{
		
		case 1:{
			printf("\tDigite a frase com ate 255 caracteres: \n\n\t"); 
			gets(msg);
			char *pmsg= msg;
			printf("\n\tFrase codificada:\n\t\t");
			
			for(i=0;msg[i];i++){
				pnum = (int*)pmsg;
				if(pnum[i]!=0) printf("%d",pnum[i]);
				if(pnum[i+1]!=0) printf(", ");}
			break;
		}
		
		case 2:
		{
			printf("\tDigite os numeros com ate 64 numeros, sendo o ultimo(64) entre 1 e ""4095!!!\n   \t\tObs:Digite 0 p/ finalizar a entrada\n\n\n]");
			
			for(i=0;i<64;i++)
			 {
				printf("\tn%d:\t ", i+1); scanf("%d", &num[i]);
				pmsg = (char*)num;
				if(num[i]==0) 
				break;
			 }
			 
			 printf("\n\n\tFrase decodificada: %s", pmsg);
	    }
			
	}
	return 0;
}
