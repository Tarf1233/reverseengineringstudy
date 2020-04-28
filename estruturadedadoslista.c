#include<stdio.h>
typedef struct s_node {
char letra;
struct s_node* next;
} node;

void printLST(node* pLista){
	pLista = pLista->next;
while (pLista != NULL){
	printf("%c\n", pLista->letra);
	pLista = pLista->next;
}

}

void initLST(node* lst){
	lst->letra = NULL;
	lst->next = NULL;
}

void addLST(node* lst, char value){
	while(lst->next != NULL){
		lst = lst->next;
	}
	node* novoelemento = malloc(sizeof(node));
	novoelemento->letra = value;
	novoelemento->next = NULL;
	lst->next =  novoelemento;
	
	
	
}


int main(){

node lst;
initLST(&lst);
addLST(&lst, 'A');
addLST(&lst, 'B');
addLST(&lst, 'C');
addLST(&lst, 'D');
printLST(&lst);









return 0;
}
