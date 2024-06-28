//graphs using linked list
//2 types of graphs : 
// 1. undirected graph - degree
// 2. directed graph - indegree, outdegree
//degree - no of nodes connected
//adjacency matrix
//adjacency list

#include<stdio.h>
#include<stdlib.h>
#define TABLE_SIZE 10
struct Node{
    int data;
    struct Node* next;
};
struct Graph{
    struct Node *head[TABLE_SIZE];
};
struct Node*  create_a_node(int val){
    struct Node *node = (struct Node*)malloc(sizeof(struct Node));
    node->data = val;
    node->next = NULL;
    return node;
}
void insert(struct Graph *graph, int u, struct Node *V){
    struct Node *temp = graph->head[u];
    while(temp != NULL){
        temp = temp->next;
    }
    temp  = V;
}
void create_a_graph(int n, int e){
    struct Graph *graph = (struct Graph*)malloc(sizeof(struct Graph));
    for(int i=0; i<e; i++){
        int u, v;
        scanf("%d %d",&u, &v);
        //step1 = to create two nodes u and v
        struct Node *U =  create_a_node(u);
        struct Node *V = create_a_node(v);
        //insert v at u
        insert(graph, u, V);
        insert(graph, v, U);
        
    }
}
int main (){
    int n, e;
    scanf("%d %d",&n, &e);
    create_a_graph(n, e);
}