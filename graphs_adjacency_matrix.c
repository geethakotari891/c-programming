#include<stdio.h>
//adjacency matrix
struct Node{
    int data;
    struct Node* next;
};
struct Graph{
    struct Node *head[TABLE_SIZE];
};
void create_a_graph(int n, int e){
    struct Graph *graph = (struct Graph*)malloc(sizeof(struct Graph));
    for(int i=0; i<e; i++){
        int u, v;
        scanf("%d %d",&u, &v);
        //create a node with v
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = v;
        newNode->next = NULL;
        //insert node v at place u
        //create a temp node and travel
        struct Node *temp = graph->head[u];
        while(temp != NULL){
            temp = temp->next;
        }
        temp = newNode;
        //create a node with u
        struct Node *newNode1 = (struct Node *)malloc(sizeof(struct Node));
        newNode1->data = u;
        newNode1->next = NULL;
        //insert node u at place v
        struct Node *temp = graph->head[v];
        while(temp != NULL){
            temp = temp->next;
        }
        temp = newNode1;
    }
}
void readTheGraph(int **graph, int n, int e){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            graph[i][j] = 0;
        }
    }
    for(int i=0; i<e; i++){
        int u, v;
        scanf("%d %d", &u, &v);
        graph[u][v] = 1;
        graph[v][u] = 1;
    }
}
int main (){
    int n, e;
    scanf("%d %d",&n, &e);
    int **graph = (int **)malloc(n * sizeof(int *));
    for(int i=0; i<n; i++){
       graph[i] = (int *)malloc(n * sizeof(int));
    }
    create_a_graph(graph, n, e);
}