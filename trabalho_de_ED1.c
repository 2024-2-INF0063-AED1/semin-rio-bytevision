#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct {
    char sanduiche[20];
    char molho [20];
    char bebida[20];
    char nome_cliente[50];
    bool noCombo;
}Pedido;

typedef struct nó{
    Pedido pedido;
    struct nó *proximo;
}Nó;

typedef struct{
    Nó *prim;
    Nó *fim;
    int tam;
}Fila;

void criar_fila(Fila *fila){
    fila -> prim = NULL;
    fila -> fim = NULL;
    fila -> tam = 0;
}

Pedido Cadastra_pedido(){
    Pedido p;
    int i;
    char sanduiches[3][20] = {"pequeno", "médio", "grande"};
    char molhos[4][20] = {"barbecue", "creme de alho", "mostarda e mel", "maionese picante"};
    char bebidas[4][20] = {"água", "coca", "H2O", "guaraná"};
    
    printf("\topções de sanduiche: 1-pequeno, 2-médio, 3-grande");
    printf("\n\tdigite o número do sanduiche:");
    scanf("%d", &i);
    while(i<1 || i>3){
        printf("\n\topção invalida digite novamente:");
        scanf("%d", &i);
    }
    strcpy(p.sanduiche, sanduiches[i--]);
    
    printf("\topções de molho: 1-barbecue, 2-creme de alho, 3-mostarda e mel, 4-maionese picante");
    printf("\n\tdigite o número do molho:");
    scanf("%d", &i);
    while(i<1 || i>4){
        printf("\n\topção invalida digite novamente:");
        scanf("%d", &i);
    }
    strcpy(p.molho, molhos[i--]);
    
    printf("\topções de bebida: 1-água, 2-coca, 3-H2O, 4-guaraná");
    printf("\n\tdigite o número da bebida:");
    scanf("%d", &i);
    while(i<1 || i>4){
        printf("\n\topção invalida digite novamente:");
        scanf("%d", &i);
    }
    strcpy(p.bebida, bebidas[i--]);    
    
    printf("\tvai ser no combo? 1-sim, 0-não: ");
    scanf("%d", &i);
    while(i != 1 && i != 0){
        printf("\n\topção invalida digite novamente:");
        scanf("%d", &i);
    }
    if(i==1)
        p.noCombo = true;
    else
        p.noCombo = false;
        
    printf("\tdigite seu nome: ");
    scanf("%s", p.nome_cliente);

    return p;
}
    


void inserir_na_fila(Fila *fila){
    Nó *novo = malloc(sizeof(Nó));
    if (novo != NULL){
        novo->pedido = Cadastra_pedido();
        novo->proximo = NULL;
        if(fila->prim == NULL){
            fila->prim = novo;
            fila->fim = novo;
        }    
        else{
            fila->fim->proximo = novo;
            fila->fim = novo;
        }
    fila->tam++;
    }else{
        printf("\nerro ao alocar memória\n");
    }
    
}

Nó* remover_da_fila(Fila *fila){
    Nó *remover = NULL;
    
    if(fila->prim){
        remover = fila->prim;
        fila->prim = remover->proximo;
        fila->tam--;
    }else
        printf("Fila vazia.");
    
    return remover;
}

void imprimir_fila(Fila *fila){
    Nó *aux = fila->prim;
    
    printf("\n\t-----COMEÇO-----\n\n");
    while(aux){
        printf("\tsanduiche: %s\n", aux->pedido.sanduiche);
        printf("\tmolho: %s\n", aux->pedido.molho);
        printf("\tbebida: %s\n", aux->pedido.bebida);
        printf("\tnome do cliente: %s\n", aux->pedido.nome_cliente);
        if(aux->pedido.noCombo == true)
            printf("\tcombo: sim\n\n");
        else
            printf("\tcombo: não\n\n");
        aux = aux->proximo;
    }
    printf("\n\t------FINAL-----\n");
}

int main()
{
    Nó *r;
    Fila fila;
    int opcao;

    criar_fila(&fila);
    
    do{
        printf("\n\t0 - sair\n\t1 - inserir\n\t2 - imprimir\n\t3 - remover\n\t");
        scanf("%d",&opcao);
        switch(opcao){
            case 1:{
                inserir_na_fila(&fila);
                break;
            }
            case 2:{
                imprimir_fila(&fila);            
                break;
            }
            case 3:{
                r = remover_da_fila(&fila);            
                if(r){
                    printf("pedido removido");
                    free(r);
                }
                break;
            }
            default:
                if(opcao!=0)
                    printf("opção invalida");
        }
        
    }while(opcao != 0);
}