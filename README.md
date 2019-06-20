# projeto-APO
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include<string.h>

int op[2];
int start;
char km[2];
char ha[2];
char m[200];
char cm[2];
char mm[2];
char um[2];
char nm[2];
char s1[300];
char s2[300];


void menu(){
    do{
        printf("*****MENU*****\n\n");
        printf("Ecolha uma opção através do número correspondente\n\n");
        printf("1 - Sobre o programa\n2 - Descrição do programa\n3 - Fazer uma conversão\n\n");
        printf("Opção: ");
        scanf("%d", &start);
        system("cls");
    }while(start!=1 && start!=2 && start!=3);
}


char description1(){
    //as descrições das unidades ainda serão inseridas
    km[2]="a";
    ha[2]="a";
    m[200]="O metro quadrado (m²) é a unidade padrão de área adaptada para o Sistema Internacional de Unidades, e derivada da unidade básica metro. Corresponde à área que tem um quadrado com um metro de lado.";
    cm[2]="a";
    mm[2]="a";
    um[2]="a";
    nm[2]="a";
    switch(op[0]){
        case 1:strcpy(s1,km);break;
        case 2:strcpy(s1,ha);break;
        case 3:strcpy(s1,m);break;
        case 4:strcpy(s1,cm);break;
        case 5:strcpy(s1,mm);break;
        case 6:strcpy(s1,um);break;
        case 7:strcpy(s1,nm);break;
    }
    puts(s1);
}


void description2(){
    //as descrições das unidades ainda serão inseridas
    km[2]="a";
    ha[2]="a";
    m[200]="O metro quadrado (m²) é a unidade padrão de área adaptada para o Sistema Internacional de Unidades, e derivada da unidade básica metro. Corresponde à área que tem um quadrado com um metro de lado.";
    cm[2]="a";
    mm[2]="a";
    um[2]="a";
    nm[2]="a";
    switch(op[1]){
        case 1:strcpy(s2,km);break;
        case 2:strcpy(s2,ha);break;
        case 3:strcpy(s2,m);break;
        case 4:strcpy(s2,cm);break;
        case 5:strcpy(s2,mm);break;
        case 6:strcpy(s2,um);break;
        case 7:strcpy(s2,nm);break;
    }
    puts(s2);
}


void main(){
    setlocale(LC_ALL, "Portuguese");
    int op[2], i=1;
    double a, b, tabela[2];
    menu();
    if(start==1){
        printf("teste");
        //serão inseridas aqui informações gerais sobre o programa
        system("pause");
        system("cls");
        menu();
    }
    else if(start==2){
        printf("teste");
        //descrição de como funciona o programa
        system("pause");
        system("cls");
        menu();
    }
    else if(start==3){
        printf("CONVERTER DE:\n\n");
        printf("1 - Quilômetro quadrado (km²)\n2 - Hectare (ha)\n3 - Metro quadrado (m²)\n4 - Centímetro quadrado (cm²)\n5 - Milímetro quadrado (mm²)\n6 - Micrometro quadrado (μm²)\n7 - Nanômetro quadrado (nm²)\n\n");
        printf("Opção: ");
        scanf("%d", &op[0]);
        system("cls");
        printf("CONVERSÃO PARA:\n\n");
        printf("1 - Quilômetro quadrado (km²)\n2 - Hectare (ha)\n3 - Metro quadrado (m²)\n4 - Centímetro quadrado (cm²)\n5 - Milímetro quadrado (mm²)\n6 - Micrometro quadrado (μm²)\n7 - Nanômetro quadrado (nm²)\n\n");
        printf("Opção: ");
        scanf("%d", &op[1]);
        printf("\nValor a ser convertido: ");
        scanf("%lf", &a);
        system("cls");
    }
    	description1();
  	printf("\n\n");
  	description2();
  	//minhas funções description não estão funcionando :(
}
