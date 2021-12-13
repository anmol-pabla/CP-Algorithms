#include <iostream>
using namespace std;



struct Node{                                        
    int num;
    Node* next;
};

void insert(Node* List[],int a,int b)                    
{                                                       
    Node* temp = new Node;
    temp->num  = b;
    temp->next = List[a]->next;                         
    List[a]->next = temp;                                
}   

void dfs(Node* List[], int u, int visit[])               
{
    visit[u]=1;
    for (Node* v = List[u]->next; v!=NULL; v=v->next)   
    {
        if(visit[v->num]==0)
            dfs(List,v->num,visit);                          
    }
}   
