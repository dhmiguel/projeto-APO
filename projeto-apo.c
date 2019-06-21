#include<locale.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int start;
int op[2];

int menu(){
    do{
        printf("*****MENU*****\n\n");
        printf("Ecolha uma opção através do número correspondente\n\n");
        printf("1 - Sobre o programa\n2 - Descrição do programa\n3 - Fazer uma conversão\n\n");
        printf("Opção: ");
        scanf("%d", &start);
        system("cls");
    }while(start!=1 && start!=2 && start!=3);
}

void s1(){
    char km[250];
    strcpy(km,"QUILÔMETRO QUADRADO: Unidade de medida de superfície (símbolo: km²), que corresponde à área de um quadrado com 1 quilômetro de lado.");
    puts(km);
}
void s2(){
    char ha[250];
    strcpy(ha,"HECTARE: Hectare é uma unidade de medida agrária, também chamada de hectômetro quadrado (hm²). É a medida mais usada para o cálculo do tamanho de áreas agrícolas, matas e áreas naturais.");
    puts(ha);
}
void s3(){
    char m[250];
    strcpy(m,"METRO QUADRADO: O metro quadrado (m²) é a unidade padrão de área adaptada para o Sistema Internacional de Unidades, e derivada da unidade básica metro. Corresponde à área que tem um quadrado com um metro de lado.");
    puts(m);
}
void s4(){
    char cm[250];
    strcpy(cm,"CENTÍMETRO QUADRADO: Um centímetro quadrado é a área equivalente à de um polígono de quatro lados iguais (quadrado) com cada lado medindo um centímetro.");
    puts(cm);
}
void s5(){
    char mm[250];
    strcpy(mm,"MILÍMETRO QUADRADO: Unidade de medida de superfície (mm²) equivalente à área de um quadrado que tenha um milésimo de lado");
    puts(mm);
}
void s6(){
    char um[250];
    strcpy(um,"MICRÔMETRO QUADRADO: O micrômetro quadrado é uma fração decimal da unidade derivada do SI, metro quadrado, e é igual a 1·10⁻¹² m². O seu símbolo é μm².");
    puts(um);
}
void s7(){
    char nm[250];
    strcpy(nm,"NANÔMETRO QUADRADO: O nanômetro quadrado é uma fracção decimal da unidade derivada do SI, metro quadrado, e é igual a 1·10⁻¹⁸ m². O seu símbolo é nm².");
    puts(nm);
}

double conversao(double x, double y){
    if(op[0]==1 && op[1]==2){
        y=x*pow(10,2);
        printf("FÓRMULA DE CONVERSÃO:\nha = km²*(10^2)\n\n");
        printf("EXEMPLO:\n1 km² em ha\n\n");
        printf("ha = 1*(10^2)\n");
        printf("ha = 100 km²\n\n");
        system("pause");
        system("cls");
        printf("Valor convertido: %.2lf\n\n", y);
    }
    else if(op[0]==1 && op[1]==3){
        y=x*pow(10,6);
        printf("FÓRMULA DE CONVERSÃO:\nm² = km²*(10^6)\n\n");
        printf("EXEMPLO:\n1 km² em m²\n\n");
        printf("m² = 1*(10^6)\n");
        printf("m² = 1000000 km²\n\n");
        system("pause");
        system("cls");
        printf("Valor convertido: %.2lf\n\n", y);
    }
    else if(op[0]==1 && op[1]==4){
        y=x*pow(10,10);
        printf("FÓRMULA DE CONVERSÃO:\ncm² = km²*(10^10)\n\n");
        printf("EXEMPLO:\n1 km² em cm²\n\n");
        printf("cm² = 1*(10^10)\n");
        printf("cm² = 10000000000 km²\n\n");
        system("pause");
        system("cls");
        printf("Valor convertido: %.2lf\n\n", y);
    }
       else if(op[0]==1 && op[1]==5){
        y=x*pow(10,12);
        printf("FÓRMULA DE CONVERSÃO:\nmm² = km²*(10^12)\n\n");
        printf("EXEMPLO:\n1 km² em mm²\n\n");
        printf("mm² = 1*(10^12)\n");
        printf("mm² = 1000000000000 km²\n\n");
        system("pause");
        system("cls");
        printf("Valor convertido: %.2lf\n\n", y);
    }
       else if(op[0]==1 && op[1]==6){
        y=x*pow(10,18);
        printf("FÓRMULA DE CONVERSÃO:\nμm² = km²*(10^18)\n\n");
        printf("EXEMPLO:\n1 km² em μm²\n\n");
        printf("μm² = 1*(10^18)\n");
        printf("μm² = 1000000000000000000 km²\n\n");
        system("pause");
        system("cls");
        printf("Valor convertido: %.2lf\n\n", y);
    }
    else if(op[0]==1 && op[1]==7){
        y=x*pow(10,18);
        printf("FÓRMULA DE CONVERSÃO:\nnm² = km²*(10^24)\n\n");
        printf("EXEMPLO:\n1 km² em nm²\n\n");
        printf("nm² = 1*(10^24)\n");
        printf("nm² = 1000000000000000000000000 km²\n\n");
        system("pause");
        system("cls");
        printf("Valor convertido: %.2lf\n\n", y);
    }
    else if(op[0]==2 && op[1]==1){
        y=x*pow(10,-2);
        printf("FÓRMULA DE CONVERSÃO:\nkm² = ha*(10^-2)\n\n");
        printf("EXEMPLO:\n1 ha em km²\n\n");
        printf("km² = 1*(10^-2)\n");
        printf("km² = 0,01 ha\n\n");
        system("pause");
        system("cls");
        printf("Valor convertido: %.2lf\n\n", y);
    }
    else if(op[0]==2 && op[1]==3){
        y=x*pow(10,4);
        printf("FÓRMULA DE CONVERSÃO:\nm² = ha*(10^4)\n\n");
        printf("EXEMPLO:\n1 ha em m²\n\n");
        printf("m² = 1*(10^4)\n");
        printf("m² = 10000 ha\n\n");
        system("pause");
        system("cls");
        printf("Valor convertido: %.2lf\n\n", y);
    }
    else if(op[0]==2 && op[1]==4){
        y=x*pow(10,8);
        printf("FÓRMULA DE CONVERSÃO:\ncm² = ha*(10^8)\n\n");
        printf("EXEMPLO:\n1 ha em cm²\n\n");
        printf("cm² = 1*(10^8)\n");
        printf("cm² = 100000000 ha\n\n");
        system("pause");
        system("cls");
        printf("Valor convertido: %.2lf\n\n", y);
    }
    else if(op[0]==2 && op[1]==5){
        y=x*pow(10,10);
        printf("FÓRMULA DE CONVERSÃO:\nmm² = ha*(10^10)\n\n");
        printf("EXEMPLO:\n1 ha em mm²\n\n");
        printf("mm² = 1*(10^10)\n");
        printf("mm² = 10000000000 ha\n\n");
        system("pause");
        system("cls");
        printf("Valor convertido: %.2lf\n\n", y);
    }
    else if(op[0]==2 && op[1]==6){
        y=x*pow(10,16);
        printf("FÓRMULA DE CONVERSÃO:\nμm² = ha*(10^16)\n\n");
        printf("EXEMPLO:\n1 ha em μm²\n\n");
        printf("μm² = 1*(10^16)\n");
        printf("μm² = 10000000000000000 ha\n\n");
        system("pause");
        system("cls");
        printf("Valor convertido: %.2lf\n\n", y);
    }
    else if(op[0]==2 && op[1]==7){
        y=x*pow(10,22);
        printf("FÓRMULA DE CONVERSÃO:\nnm² = ha*(10^22)\n\n");
        printf("EXEMPLO:\n1 ha em nm²\n\n");
        printf("nm² = 1*(10^22)\n");
        printf("nm² = 10000000000000000000000 ha\n\n");
        system("pause");
        system("cls");
        printf("Valor convertido: %.2lf\n\n", y);
    }
}

void main(){
    setlocale(LC_ALL, "Portuguese");
    int i=0, j, dec;
    double a, b, tabela[i][2];
    do{
        menu();
        if(start==1){
            printf("Nathan Holanda Lima - Prontuário: 1960962\nDiego Miguel Arruda de Moura - 1960903\nTurma A\n\nEste programa tem por finalidade a conversão de unidades de medidas relativas a área.\nFoi elaborado para a disciplina de Algoritmos e Programação do primeiro semestre de 2019 do curso de Análise e Desenvolvimento de Sistemas do IFSP Câmpus Guarulhos.\nTodos os direitos reservados aos criadores©\n\n");
            system("pause");
            system("cls");
            menu();
        }
        if(start==2){
            printf("Para realizar conversões, siga o passo a passo a seguir:\n1- No menu inicial, escolha a opção \"3\" para realizar uma conversão\n2- Será exibida uma tela com as opções da unidade de medida de origem que você deseja converter.\n3- Selecione a unidade que deseja.\n4- Será exibida uma tela com as opções da unidade de medida para a qual você queira converter.\n5- Selecione a unidade que deseja.\n6- O programa irá solicitar que você digite o valor para realizar a conversão.\n7- Após digitar o valor, o programa exibirá um breve histórico da conversão, mostrando a definição das unidades escolhidas bem como as fórmulas de conversão.\n8- Em seguida, o programa irá perguntar se deseja retornar ao menu principal.\n9- Ao retornar ao menu principal, será possível realizar novas conversões.\n10- Siga o mesmo passo a passo para realizar outras conversões.\n11- Caso não deseja retonar ao menu principal, o programa exibirá o histórico das conversões realizadas na ordem que foram feitas.\n12- Pronto para iniciar uma conversão? Retorne ao menu principal e siga as instruções dadas aqui :D\n");
            //explicar como funciona essa bosta
            system("pause");
            system("cls");
            menu();
        }
        if(start==3){
            do{
            printf("CONVERTER DE:\n");
            printf("1 - Quilômetro quadrado (km²)\n2 - Hectare (ha)\n3 - Metro quadrado (m²)\n4 - Centímetro quadrado (cm²)\n5 - Milímetro quadrado (mm²)\n6 - Micrometro quadrado (μm²)\n7 - Nanômetro quadrado (nm²)\n");
            printf("Opção: ");
            scanf("%d", &op[0]);
            printf("\nPARA:\n");
            printf("1 - Quilômetro quadrado (km²)\n2 - Hectare (ha)\n3 - Metro quadrado (m²)\n4 - Centímetro quadrado (cm²)\n5 - Milímetro quadrado (mm²)\n6 - Micrometro quadrado (μm²)\n7 - Nanômetro quadrado (nm²)\n");
            printf("Opção: ");
            scanf("%d", &op[1]);
            printf("\nValor a ser convertido: ");
            scanf("%lf", &a);
            system("cls");
            }while(op[0]==op[1] || op[0]<1 || 7<op[0] || op[1]<1 || 7<op[1]);
        }
        printf("CONVERSOR DE MEDIDAS - ÁREA\n\n");
        switch(op[0]){
            case 1:printf("Conversão escolhida de quilômetros quadrados ");break;
            case 2:printf("Conversão escolhida de hectare ");break;
            case 3:printf("Conversão escolhida de metros quadrados ");break;
            case 4:printf("Conversão escolhida de centímetros quadrados ");break;
            case 5:printf("Conversão escolhida de milímetros quadrados ");break;
            case 6:printf("Conversão escolhida de micrômetros quadrados ");break;
            case 7:printf("Conversão escolhida de nanômetros quadrados ");break;
        }
         switch(op[1]){
            case 1:printf("para quilômetros quadrados \n\n");break;
            case 2:printf("para hectare \n\n");break;
            case 3:printf("para metros quadrados \n\n");break;
            case 4:printf("para centímetros quadrados \n\n");break;
            case 5:printf("para milímetros quadrados \n\n");break;
            case 6:printf("para micrômetros quadrados \n\n");break;
            case 7:printf("para nanômetros quadrados \n\n");break;
        }
        if(op[0]==1)
            s1();
        else if(op[0]==2)
            s2();
        else if(op[0]==3)
            s3();
        else if(op[0]==4)
            s4();
        else if(op[0]==5)
            s5();
        else if(op[0]==6)
            s6();
        else if(op[0]==7)
            s7();
        printf("\n");
        if(op[1]==1)
            s1();
        else if(op[1]==2)
            s2();
        else if(op[1]==3)
            s3();
        else if(op[1]==4)
            s4();
        else if(op[1]==5)
            s5();
        else if(op[1]==6)
            s6();
        else if(op[1]==7)
            s7();
        printf("\n");
        conversao(a,b);
        tabela[i][0]=a;
        tabela[i][1]=b;
        system("pause");
        system("cls");
        printf("Se deseja voltar ao menu principal, digite 0: ");
        scanf("%d", &dec);
        if(dec==0)
            i++;
        system("cls");
    }while(dec==0);
    int n=i;
    //relatório de conversões
    printf("CONVERTIDO DE:\t\t");
    printf("PARA:\n\n");
    for(i=0;i<=n;i++){
        printf("%.10lf\t\t", tabela[i][0]);
        printf("%.10lf\n", tabela[i][1]);
    }
    printf("\n");
}
